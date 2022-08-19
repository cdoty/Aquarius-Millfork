# Aquarius Millfork example
This is a simple Millfork example that create a cartridge and a cassette that runs on the Mattel Aquarius. The cartridge will run on an unexpanded Aquarius. The mini expander is needed for joystick input. The cassette version requires at least 16k of expanded memory, and needs the mini expander for joystick input. The cartridge version was tested using the Aquarius Super Cart 1, and the cassette was tested with the 32k memory cartridge. The ship can be moved left and right with the first controller, and button 1 will fire.

The graphics are created using the Gameboy map builder and tile builder tools, and converted with the included tools. The casette uses the McNamara & Dubois ML Loader and custom written software to create CAQ files from the command line.

There is also support for BitBuster compression and decompression. But, it isn't used in this version. The plan is to use the uncompressed map and color data to erase the characters.
