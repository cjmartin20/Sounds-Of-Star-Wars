Directions
-If you have an Intel based system you should just be able to simply extract the files 
from the zipped folder and double click "Star Wars Sounds Installer" in the top directory
******The program might not open in a visible window, check the task bar***********
-If you do not have an Intel (x86) processor, you can run the install.bat file 
by double clicking it also. 
-If for both of the installers do not work, you can manually set the sounds up yourself
following the instructions below.

About
This program changes default Windows system sounds to Star Wars noises. 
A simple installer copies the custom sound files needed, then imports a registry file 
that updates the settings to use the new sounds.
If you have any questions about this project, or need help using it email cjmartin@eastex.net


Manual install
-Extract the files from StarWarsSounds.zip
-Copy the Extracted folder "Star Wars Sounds" into the top most directory C:\
    The path should be:
    C:\Star Wars Sounds\
-right click on the extacted file StarWarsSystemSoundScheme.reg and click "Merge"
    A message box pops up asking "Do you want this app to make changes to your device?"
        -click "YES"
    Another message box title "Registry Editor" asks if you want to continue
        -clcik "YES"
    A third box should say that the keys were added successfully
        -click "OK"
-The Star Wars Sounds should now have replace your default system sounds


To unistall, go into the .\Installers\ directory and double click uninstall.bat
Or you can manually do it by following the steps below-
To reset back to default system sounds, go to Settings --> System --> Sound and click
"Sound Control Panel", which should be on the upper right side if the Settings window is 
maximized.
After opening Sounds Control Panel, click the "Sounds" tab at the top of the window
Right under "Sound Scheme" click the drop down arrow and select "Windows Default"

    


Default Sound --> Star Wars Sound
    System Action/Description

Windows Background --> Wilhelm Scream
    Astrik
    Default Beep
    Exclamation
    Low Battery Alarm
    System Notification
Windows Notify Calendar --> Ewok
    Calendar Reminder
Windows Foreground --> R2D2 Blast 
    Critical Battery Alarm
    Critical Stop
Windows Notify Email --> Blaster
    Desktop Mail Notification
    New Fax Notification
    New Mail Notification
Windows Hardware Insert --> Lightsaber On
    Device Connect
Windows Hardware Remove --> Lightsaber Off
    Device Disconnect
Windows Hardware Fail --> Seismic Charge
    Device Failed to connect
Windows Notify Messaging -- Tie Fighter
    Instant Message Notification
    New Text Message Notification
Windows Message Nudge --> Darth Vader
    Message Nudge
Windows Proximity Notification --> Chewbacca
    NFP Completion
Windows Proximity Connection --> Mini Droid
    NFP Connection
Windows Notify System Generic --> Utinni
    Notification
Windows User Account Control --> Saber Fight
    Windows User Account Control

These Star Wars sounds are not currently assigned to anything:
Alderan

This is the registry key that is exported using Windows Registry Editor
HKEY_CURRENT_USER\AppEvents\Schemes
Importing keys only replaces information that is being imported, for example:
My Windows has keys for Visual Studio sounds, which other Windows systems might not have.
HKEY_CURRENT_USER
    AppEvents
        Schemes
            Apps
                .Default
                devenv  <-- the Visual Studio sounds
                Explorer
                sapisvr
Below would be the keys in a default system, and is what is contained in the DefaultSystemSounds.reg file
HKEY_CURRENT_USER
    AppEvents
        Schemes
            Apps
                .Default
                Explorer
                sapisvr
If I were to import the default system Schemes key into my system, it would not delete the devenv key for Visual Studio

To create a relative shortcut to run the installer, right click in the directory you want the shortcut
and navigate to the .exe
Once the shortcut is created, right click and go to "Properties"
The below text was put in the "Target" box
%windir%\system32\cmd.exe /c start "" "%CD%\Installers\installer.exe"
The "Start In" box should be left blank
The .exe runs in the same directory as the shortcut

For documentation on the MessageBoxA function refer to the link below
https://docs.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-messageboxa

Keep from the cmd window from popping up when running the application
This has been added to the compile batch file
-Open Visual Studio (Can't run this command from system cmd prompt)
-Go to Tools>Command Line
-Run below command, replacing installer.exe with executable to silence
editbin /SUBSYSTEM:WINDOWS installer.exe
