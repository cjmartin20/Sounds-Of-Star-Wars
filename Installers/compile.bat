call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\Tools\VsDevCmd.bat"
gcc install.c -o installer.exe
editbin /SUBSYSTEM:WINDOWS installer.exe