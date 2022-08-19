..\Tools\Millfork\millfork.exe -o Game -g -t aquarius_crt -Os Main.mfk
IF ERRORLEVEL 1 goto errorOut

echo Build completed successfully

exit /B 0

:errorOut
echo Build Error
