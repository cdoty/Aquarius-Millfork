#pragma once

#include "Macros.h"

class Aquarius
{
	public:
		PTR(Aquarius)

		// Constructor
		Aquarius();

		// Destructor
		~Aquarius();

		// Create
		static Ptr create(const std::string& _strPrefix);

		// Initialize
		bool initialize(const std::string& _strPrefix);

		// Close
		void close();

		// Save
		bool save(const std::string& _strPrefix);
		
	private:
		struct ColorInfo
		{
			int	iBackgroundIndex;	// Palette index
			int	iForegroundIndex;
		};

		static const int	gsc_iWidth			= 40;	// Size of aquarius screen, in tiles
		static const int	gsc_iHeight			= 25;
		static const int	gsc_iMaxPalettes	= 8;	// Max palettes

		std::shared_ptr<uint8_t>	m_pScreenBuffer;					// Screen buffer
		std::shared_ptr<uint8_t>	m_pColorBuffer;						// Color buffer
		ColorInfo					m_paletteIndices[gsc_iMaxPalettes];	// Palette indices

		// Clear palette indices
		void clearPaletteIndices();

		// Load palette
		bool loadPalette(const std::string& _strPrefix);

		// Load screen
		bool loadScreen(const std::string& _strPrefix);

		// Find palette
		int findPalette(int _iRed, int _iGreen, int _iBlue);
};
