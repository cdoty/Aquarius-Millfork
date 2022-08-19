#pragma once

#include <stdint.h>

struct Color
{
	uint8_t	red;	// Color values
	uint8_t	green;
	uint8_t	blue;
};

// Aquarius colors converted to 5 bit without rounding
Color	gsc_palette[]	= 
{
	{2, 2, 2},
	{27, 2, 5},
	{2, 24, 0},
	{26, 23, 2},
	{1, 3, 24},
	{25, 2, 27},
	{0, 25, 21},
	{31, 31, 31},
	{24, 24, 24},
	{9, 21, 19},
	{18, 7, 19},
	{3, 4, 15},
	{24, 23, 12},
	{8, 20, 7},
	{18, 5, 7},
	{2, 2, 2}
};

static const int	gsc_iColors	= sizeof(gsc_palette) / sizeof(Color);
