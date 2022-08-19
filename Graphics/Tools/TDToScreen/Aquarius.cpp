#include "Aquarius.h"
#include "File.h"
#include "Palette.h"

static const int	gsc_iTileLimit			= 256;		// Tile limit
static const char*	gsc_szMapExtension		= ".bin";	// Map extension;
static const char*	gsc_szPaletteExtension	= ".pal";	// Palette extension;
static const char*	gsc_szScreenExtension	= ".scn";	// Screen extension;
static const char*	gsc_szColorExtension	= ".col";	// Color extension;

Aquarius::Aquarius()
{
	clearPaletteIndices();
}

Aquarius::~Aquarius()
{
	close();
}

Aquarius::Ptr Aquarius::create(const std::string& _strFilename)
{
	INSTANCE(pAquarius, Aquarius())

	if (false == pAquarius->initialize(_strFilename))
	{
		pAquarius.reset();
	}

	return	pAquarius;
}

bool Aquarius::initialize(const std::string& _strPrefix)
{
	SHAREDBUFFER(m_pScreenBuffer, uint8_t, gsc_iWidth * gsc_iHeight);

	if (nullptr == m_pScreenBuffer)
	{
		printf("Unable to allocate memory for the screen buffer.");

		return	false;
	}

	SHAREDBUFFER(m_pColorBuffer, uint8_t, gsc_iWidth * gsc_iHeight);

	if (nullptr == m_pColorBuffer)
	{
		printf("Unable to allocate memory for the color buffer.");

		return	false;
	}

	if (false == loadPalette(_strPrefix))
	{
		return	false;
	}

	if (false == loadScreen(_strPrefix))
	{
		return	false;
	}

	return	true;
}

void Aquarius::close()
{
}

void Aquarius::clearPaletteIndices()
{
	for (int iLoop = 0; iLoop < gsc_iMaxPalettes; ++iLoop)
	{
		m_paletteIndices[iLoop].iForegroundIndex	= -1;
		m_paletteIndices[iLoop].iBackgroundIndex	= -1;
	}
}

bool Aquarius::loadPalette(const std::string& _strPrefix)
{
	File::Ptr	pFile	= File::create();

	if (nullptr == pFile)
	{
		printf("Unable to create file interface.\n");

		return	false;
	}

	std::string	strFilename;

	strFilename	= _strPrefix;
	strFilename	+= gsc_szPaletteExtension;

	if (false == pFile->open(strFilename, true))
	{
		printf("Unable to open palette file.\n");

		return	true;
	}

	int	iLength		= pFile->getLength();
	int	iPalettes	= iLength / (2 * 4);

	if (iPalettes != gsc_iMaxPalettes)
	{
		printf("Palette file does not contain %d palettes.\n", gsc_iMaxPalettes);

		return	false;
	}

	DEFINESHAREDBUFFER(pBuffer, uint8_t, iLength);

	uint8_t*	pColors	= pBuffer.get();

	if (false == pFile->readBuffer(&pColors, iLength))
	{
		printf("Unable to read from palette file.\n");

		return	false;
	}

	pFile->close();

	for (int iLoop = 0; iLoop < iPalettes; ++iLoop)
	{
		uint16_t	lowByte	= *pColors;
		pColors++;

		uint16_t	highByte	= *pColors;
		pColors++;

		uint16_t	color	= (highByte << 8) | lowByte;

		uint8_t	red		= (uint8_t)(color & 0x1F);
		uint8_t	green	= (uint8_t)((color >> 5) & 0x1F);
		uint8_t	blue	= (uint8_t)((color >> 10) & 0x1F);

		m_paletteIndices[iLoop].iBackgroundIndex	= findPalette(red, green, blue);	

		lowByte	= *pColors;
		pColors++;

		highByte	= *pColors;
		pColors++;

		color	= (highByte << 8) | lowByte;

		red		= (uint8_t)(color & 0x1F);
		green	= (uint8_t)((color >> 5) & 0x1F);
		blue	= (uint8_t)((color >> 10) & 0x1F);

		m_paletteIndices[iLoop].iForegroundIndex	= findPalette(red, green, blue);	

		pColors	+= 4;
	}

	return	true;
}

bool Aquarius::loadScreen(const std::string& _strPrefix)
{
	File::Ptr	pFile	= File::create();

	if (nullptr == pFile)
	{
		printf("Unable to create file interface.\n");

		return	false;
	}

	std::string	strFilename;

	strFilename	= _strPrefix;
	strFilename	+= gsc_szMapExtension;

	if (false == pFile->open(strFilename, true))
	{
		return	true;
	}

	int	iLength	= pFile->getLength();
	int	iTiles	= iLength / 2;

	if (iTiles != gsc_iWidth * gsc_iHeight)
	{
		printf("Map must be %d by %d.\n", gsc_iWidth, gsc_iHeight);

		return	false;
	}

	DEFINESHAREDBUFFER(pBuffer, uint8_t, iLength);

	uint8_t*	pMap	= pBuffer.get();

	if (false == pFile->readBuffer(&pMap, iLength))
	{
		printf("Unable to read from map file.\n");

		return	false;
	}

	pFile->close();

	uint8_t*	pScreen	= m_pScreenBuffer.get();
	uint8_t*	pColor	= m_pColorBuffer.get();

	for (int iLoop = 0; iLoop < iTiles; ++iLoop)
	{
		pScreen[iLoop]	= *pMap;
		pMap++;

		uint8_t	palette	= *pMap;
		pMap++;

		uint8_t	color	= 0;

		if (palette != -1)
		{
			color	= m_paletteIndices[palette].iBackgroundIndex | (m_paletteIndices[palette].iForegroundIndex << 4);
		}

		pColor[iLoop]	= color;
	}

	return	true;
}

bool Aquarius::save(const std::string& _strPrefix)
{
	int	iLength	= gsc_iWidth * gsc_iHeight;

	File::Ptr	pFile	= File::create();

	if (nullptr == pFile)
	{
		printf("Unable to create file interface.\n");

		return	false;
	}

	std::string	strFilename;

	strFilename	= _strPrefix;
	strFilename	+= gsc_szScreenExtension;

	if (false == pFile->create(strFilename, true))
	{
		printf("Unable to create screen file %s.\n", strFilename.c_str());

		return	false;
	}

	// Write screen
	if (false == pFile->writeBuffer(m_pScreenBuffer.get(), iLength))
	{
		printf("Unable to write screen data.\n");

		return	false;
	}
			
	pFile->close();

	strFilename	= _strPrefix;
	strFilename	+= gsc_szColorExtension;

	if (false == pFile->create(strFilename, true))
	{
		printf("Unable to create color file %s.\n", strFilename.c_str());

		return	false;
	}

	// Write color
	if (false == pFile->writeBuffer(m_pColorBuffer.get(), iLength))
	{
		printf("Unable to write color data.\n");

		return	false;
	}
			
	pFile->close();

	return	true;
}

int Aquarius::findPalette(int _iRed, int _iGreen, int _iBlue)
{
	for (int iLoop = 0; iLoop < gsc_iColors; ++iLoop)
	{
		if (_iRed == gsc_palette[iLoop].red && _iGreen == gsc_palette[iLoop].green && _iBlue == gsc_palette[iLoop].blue)
		{
			return	iLoop;
		}
	}

	printf("Unable to find color %08x %08x %08x.", _iRed, _iGreen, _iBlue);

	return	-1;
}
