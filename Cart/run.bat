set WORKING_DIRECTORY=%cd%

cd \mame
mame aquarius -exp mini -cart2 %WORKING_DIRECTORY%/Game.bin -window

cd %WORKING_DIRECTORY%