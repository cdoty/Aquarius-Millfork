#pragma once

#include "Macros.h"

class CAQ
{
	public:
		PTR(CAQ)

		// Constructor
		CAQ();

		// Destructor
		~CAQ();

		// Create
		static Ptr create(const std::string& _strFilename);

		// Initialize
		bool initialize(const std::string& _strFilename);

		// Close
		void close();
		
		// Save
		bool save(const std::string& _strFilename, const std::string& _strName, int _iLoadAddress, int _iStartAddress);

	private:
		std::shared_ptr<uint8_t>	m_pBinaryBuffer;	// Screen buffer
		int							m_iBufferLength;	// Buffer length

		// Load binary
		bool loadBinary(const std::string& _strFilename);

		// Write binary
		bool writeBinary(const std::string& _strFilename, const std::string& _strName, int _iLoadAddress, int _iStartAddress);

		// Calculate checksum
		int calculateCheckSum();
};
