cd Cassette

set WORKING_DIRECTORY=%cd%

cd \mame
mame aquarius -exp mini -cass %WORKING_DIRECTORY%/Game.caq -debug

cd %WORKING_DIRECTORY%
cd ..
