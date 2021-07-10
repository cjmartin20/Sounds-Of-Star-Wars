#include <Windows.h>
#include <stdio.h>
#include <string.h>

int main() {
    int status; //holds return value from commands to check if they were successful
    status = system("dir.bat");
    if( status == 1 ) { 
        MessageBox(0, "Option 1", "Status", 0);
    }
    else {
        MessageBox(0, "Option 2", "Status", 0);
    }
    status = system("mkdir \"C:\\Star Wars Sounds\"");
    if( status == 0 ) {
        MessageBox(0, "Created direcotry C:\\Star Wars Sounds\"", "Status", 0);
    }
    else {
        MessageBox(0,
            "Could not create direcotry C:\\Star Wars Sounds\"",
            "Status", 0);
        return 0;
    }
    system("copy \\Y \".\\Sounds\\*\" \"C:\\Star Wars Sounds\"");
    if( status == 0 ) {
        MessageBox(0, "Files Copied!", "Status", 0);
    }
    else {
        MessageBox(0,
            "There was a problem copying the files, please make sure 'C:\\Star Wars Sounds' does already exist", 
            "Status", 0);
        return 0;
    }
    status = system("reg import .\\StarWarsSystemSounds.reg");
    if( status == 0 ) {
        MessageBox(0, "Installation Successful!", "Status", 0);
    }
    else {
        MessageBox(0,
            "There was a problem importing the the registry file", 
            "Status", 0);
    }

    return 0;
}