#include <Windows.h>
#include <stdio.h>

int main() {
    int status; //holds return value from commands to check if they were successful
    status = MessageBoxA( 
        NULL,
        "Press \"OK\" to install Star Wars Sounds! Check out ReadMe.txt for details, unistalling, or troubleshooting.",
        "Star Wars Sounds",
        0x00000001L ); //0x00000041L would be a Combintion of MB_ICONINFORMATION 0x00000040L and MB_OKCANCEL 0x00000001L flags
    if( status == 1 ) { //IDOK, the OK button was selected
        system(".\\Installers\\install.bat");
        MessageBox(0, "The installation is finished!", "Star Wars Sounds", 0);
    }
    if( status == 2 ) { //IDCANCEL, the cancel button was selected 
        return 0;
    }
    /*
    system("xcopy /E /C /Y \"Star Wars Sounds\" \"C:\\Star Wars Sounds\\\"");
    system("reg import .\\StarWarsSystemSounds.reg");
    system("mkdir \"C:\\Star Wars Sounds\"");
    */
    return 0;
}