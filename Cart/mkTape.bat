..\Tools\Millfork\millfork.exe -o Cassette\Game -g -t aquarius_tape -Os Main.mfk
IF ERRORLEVEL 1 goto errorOut

..\Tools\WriteCAQ 16384 16384 16368 Cassette\Game.bin Cassette\Game_A.CAQ GAME
IF ERRORLEVEL 1 goto errorOut

echo Build completed successfully

exit /B 0

:errorOut
echo Build Error
