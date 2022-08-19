#include "File.h"
#include "CAQ.h"

CAQ::CAQ()	:
	m_iBufferLength(0)
{
}

CAQ::~CAQ()
{
	close();
}

CAQ::Ptr CAQ::create(const std::string& _strFilename)
{
	INSTANCE(pCAQ, CAQ())

	if (false == pCAQ->initialize(_strFilename))
	{
		pCAQ.reset();
	}

	return	pCAQ;
}

bool CAQ::initialize(const std::string& _strFilename)
{
	if (false == loadBinary(_strFilename))
	{
		return	false;
	}

	return	true;
}

void CAQ::close()
{
}

bool CAQ::save(const std::string& _strFilename, const std::string& _strName, int _iLoadAddress, int _iStartAddress)
{
	if (false == writeBinary(_strFilename, _strName, _iLoadAddress, _iStartAddress))
	{
		return	false;
	}

	return	true;
}

bool CAQ::loadBinary(const std::string& _strFilename)
{
	File::Ptr	pFile	= File::create();

	if (nullptr == pFile)
	{
		printf("Unable to create file interface");

		return	false;
	}

	if (false == pFile->open(_strFilename, true))
	{
		printf("Unable to open binary file");

		return	false;
	}

	m_iBufferLength	= pFile->getLength();
	
	if (0 == m_iBufferLength)
	{
		printf("Binary file is empty");

		return	false;
	}
	
	SHAREDBUFFER(m_pBinaryBuffer, uint8_t, m_iBufferLength);

	memset(m_pBinaryBuffer.get(), 0, m_iBufferLength);

	uint8_t*	pBuffer	= m_pBinaryBuffer.get();

	if (false == pFile->readBuffer(&pBuffer, m_iBufferLength))
	{
		printf("Unable to read from binary file");

		return	false;
	}

	pFile->close();

	return	true;
}

bool CAQ::writeBinary(const std::string& _strFilename, const std::string& _strName, int _iLoadAddress, int _iStartAddress)
{
	if (0 == m_iBufferLength)
	{
		printf("Binary is not valid");

		return	false;
	}

	int	iChecksum	= calculateCheckSum();

	File::Ptr	pFile	= File::create();
	
	if (nullptr == pFile)
	{
		printf("Unable to create file interface");

		return	false;
	}

	if (false == pFile->create(_strFilename))
	{
		printf("Unable to create binary file");

		return	false;
	}

	// Write binary file header
	for (int iLoop = 0; iLoop < 16; ++iLoop)
	{
		pFile->write8Bit(0xFF);
	}

	pFile->write8Bit(0x00);

	// Write name
	int	t_c	= (int)_strName.size();

	for (int iLoop = 0; iLoop < t_c; ++iLoop)
	{
		pFile->write8Bit(_strName[iLoop]);
	}

	pFile->write8Bit(0x00);

	// Write load address
	pFile->write8Bit(_iLoadAddress & 0xFF);
	pFile->write8Bit((_iLoadAddress >> 8) & 0xFF);

	int	iEndAddress	= _iStartAddress + m_iBufferLength;

	// Write end address
	pFile->write8Bit(iEndAddress & 0xFF);
	pFile->write8Bit((iEndAddress >> 8) & 0xFF);

	// Write start address
	pFile->write8Bit(_iStartAddress & 0xFF);
	pFile->write8Bit((_iStartAddress >> 8) & 0xFF);

	pFile->writeBuffer(m_pBinaryBuffer.get(), m_iBufferLength);

	iChecksum	+= _iLoadAddress & 0xFF;
	iChecksum	+= (_iLoadAddress >> 8) & 0xFF;

	iChecksum	+= iEndAddress & 0xFF;
	iChecksum	+= (iEndAddress >> 8) & 0xFF;

	iChecksum	+= _iStartAddress & 0xFF;
	iChecksum	+= (_iStartAddress >> 8) & 0xFF;

	pFile->write8Bit(iChecksum & 0xFF);
	pFile->write8Bit((iChecksum >> 8) & 0xFF);

	for (int iLoop = 0; iLoop < 16; ++iLoop)
	{
		pFile->write8Bit(0);
	}
	
	pFile->close();

	return	true;
}

int CAQ::calculateCheckSum()
{
	int	iChecksum	= 0;

	uint8_t*	pBuffer	= m_pBinaryBuffer.get();

	for (int iLoop = 0; iLoop < m_iBufferLength; ++iLoop)
	{
		iChecksum	+= pBuffer[iLoop];
	}

	return	iChecksum;
}
