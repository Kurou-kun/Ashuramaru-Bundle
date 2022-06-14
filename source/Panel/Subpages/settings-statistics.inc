;	Panel > Settings > Statistics

;------------
;	Measures
;------------

[Measure-Input]
Measure=Plugin
Plugin=InputText
X=500
Y=315
W=20
H=20
FontSize=12
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
DefaultValue=C
InputLimit=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables Disk-Letter "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]
Command2=[!WriteKeyValue Variables Disk-Letter2 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]
Command3=!WriteKeyValue Variables Disk-Letter3 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]
Command4=[!WriteKeyValue Variables Disk-Letter4 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]
Command5=[!WriteKeyValue Variables Disk-Letter5 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]
Command6=[!WriteKeyValue Variables Disk-Letter6 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]
Command7=[!WriteKeyValue Variables Disk-Letter7 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]
Command8=[!WriteKeyValue Variables Disk-Letter8 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]
Command9=[!WriteKeyValue Variables Disk-Letter9 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]
Command10=[!WriteKeyValue Variables Disk-Letter10 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

;------------
;	Meters
;------------

;	Description

[Statistics-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_S_Desc#
W=410
X=180
Y=40

;	Settings

[Statistics-Variation]
Meter=String
MeterStyle=TEXT
Text=#S_S_Title#
X=180
Y=30r

[Statistics-Variation-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_Combined#
W=70
X=180
Y=25r
Hidden=#SVOUA1#
ToolTipTitle=#S_S_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\Statistics\Combined" "Statistics.ini"][!DeactivateCOnfig "Ashuramaru-Bundle\Supported\Statistics\Individual\Network" "network.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Individual\System" "system.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Individual\Disks" "disks.ini"][!WriteKeyValue Variables SVOUA1 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVO "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Variation-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_Combined#
FontColor=#PrimaryColor#
W=70
X=0r
Y=0r
Hidden=#SVO#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Combined" "Statistics.ini"][!WriteKeyValue Variables SVO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVOUA1 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Variation-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_Individual#
W=70
X=80r
Y=0r
Hidden=#SVOUA2#
ToolTipTitle=#S_S_ToolTipTextTitle2#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_ToolTipText2#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\Statistics\Individual\Disks" "disks.ini"][!ActivateConfig "Ashuramaru-Bundle\Supported\Statistics\Individual\Network" "network.ini"][!ActivateConfig "Ashuramaru-Bundle\Supported\Statistics\Individual\System" "system.ini"][!WriteKeyValue Variables SVOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVO2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Variation-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_Individual#
FontColor=#PrimaryColor#
Hidden=#SVO2#
W=70
X=0r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Individual\Network" "network.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Individual\System" "system.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Individual\Disks" "disks.ini"][!WriteKeyValue Variables SVOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVO2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Variation-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_Minimal#
W=53
X=80r
Y=0r
ToolTipTitle=#S_S_ToolTipTextTitle3#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_ToolTipText3#"
Hidden=#SVOUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\Statistics\Minimal" "statistics-minimal.ini"][!WriteKeyValue Variables SVO3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVOUA3 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Vartiation-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_Minimal#
FontColor=#PrimaryColor#
W=53
Y=0r
X=0r
Hidden=#SVO3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Minimal" "statistics-minimal.ini"][!WriteKeyValue Variables SVO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVOUA3 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]


;	Statistics Combined Variation

[Statistics-Combined-Variation]
Meter=String
MeterStyle=TEXT
Text=#S_S_C_Variation#
X=180
Y=30r
Hidden=#SVT4#

[Statistics-Combined-Variation-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_C_Network_Only#
W=92
X=180
Y=25r
ToolTipTitle=#S_S_C_Network_Only#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_C_ToolTipText##CRLF##S_S_C_ToolTipText2#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SVT "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVT2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVT3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVT4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Network "#@#\Addons\Statistics\network-combined.inc" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-System "none" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Disks "none" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#][!Redraw]
Hidden=#SVT#

[Statistics-Combined-Variation-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_C_Network_Only#
FontColor=#PrimaryColor#
W=92
X=0r
Y=0r
Hidden=#SVA#

[Statistics-Combined-Variation-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_C_Network_System#
W=120
X=100r
Y=0r
ToolTipTitle=#S_S_C_Network_System#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_C_ToolTipText##CRLF##S_S_C_ToolTipText3#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SVT "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVT2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVT3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVT4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY "3r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Network "#@#\Addons\Statistics\network-combined.inc" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-System "#@#\Addons\Statistics\system-combined.inc" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Disks "none" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#][!Redraw]
Hidden=#SVT2#

[Statistics-Combined-Variation-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_C_Network_System#
FontColor=#PrimaryColor#
Hidden=#SVA2#
W=120
X=0r
Y=0r

[Statistics-Combined-Variation-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_C_Network_System_Disks#
W=152
X=125r
Y=0r
ToolTipTitle=#S_S_C_Network_System_Disks#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_C_ToolTipText##CRLF##S_S_C_ToolTipText4#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SVT "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVT2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVT3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVT4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY "3r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY2 "3r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY2 "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Network "#@#\Addons\Statistics\network-combined.inc" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-System "#@#\Addons\Statistics\system-combined.inc" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Disks "#@#\Addons\Statistics\disks-combined.inc" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#][!Redraw]
Hidden=#SVT3#

[Statistics-Combined-Variation-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_C_Network_System_Disks#
FontColor=#PrimaryColor#
Hidden=#SVA3#
W=152
X=0r
Y=0r

;	Detailed

[Statistics-Detailed]
Meter=String
MeterStyle=TEXT
Text=#S_S_S_Title2#
X=180
Y=30r

[Statistics-Detailed-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_CPU#
W=65
X=180
Y=25r
Hidden=#SGUA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\Statistics\Detailed\Processor" "processor.ini"][!WriteKeyValue Variables SGA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SGUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Detailed-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_CPU#
FontColor=#PrimaryColor#
W=65
X=0r
Y=0r
Hidden=#SGA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Detailed\Processor" "processor.ini"][!WriteKeyValue Variables SGA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SGUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Detailed-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_GPU#
W=60
X=70r
Y=0r
Hidden=#SGUA2#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\Statistics\Detailed\Graphics" "graphics.ini"][!WriteKeyValue Variables SGA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SGUA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Detailed-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_GPU#
FontColor=#PrimaryColor#
W=60
X=0r
Y=0r
Hidden=#SGA2#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Detailed\Graphics" "graphics.ini"][!WriteKeyValue Variables SGA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SGUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Detailed-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_WEB#
W=58
X=65r
Y=0r
Hidden=#SGUA3#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\Statistics\Detailed\Network" "network.ini"][!WriteKeyValue Variables SGA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SGUA3 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Detailed-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_WEB#
FontColor=#PrimaryColor#
W=58
X=0r
Y=0r
Hidden=#SGA3#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Detailed\Network" "network.ini"][!WriteKeyValue Variables SGA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SGUA3 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Detailed-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_RAM#
W=55
X=65r
Y=0r
Hidden=#SGUA4#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\Statistics\Detailed\Memory" "memory.ini"][!WriteKeyValue Variables SGA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SGUA4 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Detailed-Option-4-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_RAM#
FontColor=#PrimaryColor#
W=55
X=0r
Y=0r
Hidden=#SGA4#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Detailed\Memory" "memory.ini"][!WriteKeyValue Variables SGA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SGUA4 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Detailed-Option-5]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_DISK#
W=45
X=60r
Y=0r
Hidden=#SGUA5#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\Statistics\Detailed\Drives" "drives.ini"][!WriteKeyValue Variables SGA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SGUA5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

[Statistics-Detailed-Option-5-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_DISK#
FontColor=#PrimaryColor#
W=45
X=0r
Y=0r
Hidden=#SGA5#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics\Detailed\Drives" "drives.ini"][!WriteKeyValue Variables SGA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SGUA5 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!Redraw]

;	Disks

[Statistics-Disks]
Meter=String
MeterStyle=TEXT
Text=#S_S_S_D_Title#
W=120
X=180
Y=20r

[Statistics-Disks-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_D_Disk# #2
W=55
X=180
Y=25r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D2B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D2A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2BA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_S_S_D_Disk# #2
W=55
X=0r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D2BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D2A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2BA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_D_Disk# #3
W=55
X=60r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D3B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D3A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3BA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_S_S_D_Disk# #3
W=55
X=0r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D3BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D3A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3BA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_D_Disk# #4
W=55
X=60r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D4B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D4A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4BA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA3 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_S_S_D_Disk# #4
W=55
X=0r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D4BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D4A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4BA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA3 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_D_Disk# #5
W=55
X=60r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D5B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D5A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5BA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA4 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-4-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_S_S_D_Disk# #5
W=55
X=0r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D5BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D5A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5BA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA4 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-5]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_D_Disk# #6
W=55
X=60r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D6B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D6A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6BA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA5 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-5-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_S_S_D_Disk# #6
W=55
X=0r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D6BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D6A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6BA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-6]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_D_Disk# #7
W=55
X=60r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D7B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D7A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7BA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA6 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-6-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_S_S_D_Disk# #7
W=55
X=0r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D7BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D7A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7BA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA6 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-7]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_D_Disk# #8
W=55
X=180
Y=20r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D8B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D8A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8BA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA7 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-7-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_S_S_D_Disk# #8
W=55
X=0r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D8BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D8A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8BA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA7 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-8]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_D_Disk# #9
W=55
X=60r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D9B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D9A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9BA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA8 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-8-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_S_S_D_Disk# #9
W=55
X=0r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D9BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D9A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9BA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA8 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-9]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_D_Disk# #10
W=60
X=60r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D10B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D10A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10BA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA9 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Statistics-Disks-Option-9-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_S_S_D_Disk# #10
W=60
X=0r
Y=0r
ToolTipTitle=#S_S_S_D_Disk#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_S_S_D_ToolTipText#"
Hidden=#D10BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D10A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10BA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDL9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDLUA9 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

;	Disk Letters

[Statistics-Disks-Letters]
Meter=String
MeterStyle=TEXT
Text=#S_S_S_DL_Title#
X=180
Y=22r

[Statistics-Disks-Letters-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter#:
X=180
Y=25r
ToolTipText="Click to open input window"
LeftMouseUpAction=[!CommandMeasure Measure-Input "ExecuteBatch 1"]

[Statistics-Disks-Letters-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter2#:
X=210
Y=0r
ToolTipText="Click to open input window"
LeftMouseUpAction=[!CommandMeasure Measure-Input "ExecuteBatch 2"]
Hidden=#SDLUA#

[Statistics-Disks-Letters-Option-2-UnActive]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter2#:
FontColor=50,50,50
X=0r
Y=0r
Hidden=#SDL#

[Statistics-Disks-Letters-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter3#:
X=240
Y=0r
ToolTipText="Click to open input window"
LeftMouseUpAction=[!CommandMeasure Measure-Input "ExecuteBatch 3"]
Hidden=#SDLUA2#

[Statistics-Disks-Letters-Option-3-UnActive]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter3#:
FontColor=50,50,50
X=0r
Y=0r
Hidden=#SDL2#

[Statistics-Disks-Letters-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter4#:
X=270
Y=0r
ToolTipText="Click to open input window"
LeftMouseUpAction=[!CommandMeasure Measure-Input "ExecuteBatch 4"]
Hidden=#SDLUA3#

[Statistics-Disks-Letters-Option-4-UnActive]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter4#:
FontColor=50,50,50
X=0r
Y=0r
Hidden=#SDL3#

[Statistics-Disks-Letters-Option-5]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter5#:
X=300
Y=0r
ToolTipText="Click to open input window"
LeftMouseUpAction=[!CommandMeasure Measure-Input "ExecuteBatch 5"]
Hidden=#SDLUA4#

[Statistics-Disks-Letters-Option-5-UnActive]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter5#:
FontColor=50,50,50
X=0r
Y=0r
Hidden=#SDL4#

[Statistics-Disks-Letters-Option-6]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter6#:
X=330
Y=0r
ToolTipText="Click to open input window"
LeftMouseUpAction=[!CommandMeasure Measure-Input "ExecuteBatch 6"]
Hidden=#SDLUA5#

[Statistics-Disks-Letters-Option-6-UnActive]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter6#:
FontColor=50,50,50
X=0r
Y=0r
Hidden=#SDL5#

[Statistics-Disks-Letters-Option-7]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter7#:
X=360
Y=0r
ToolTipText="Click to open input window"
LeftMouseUpAction=[!CommandMeasure Measure-Input "ExecuteBatch 7"]
Hidden=#SDLUA6#

[Statistics-Disks-Letters-Option-7-UnActive]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter6#:
FontColor=50,50,50
X=0r
Y=0r
Hidden=#SDL6#

[Statistics-Disks-Letters-Option-8]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter8#:
X=390
Y=0r
ToolTipText="Click to open input window"
LeftMouseUpAction=[!CommandMeasure Measure-Input "ExecuteBatch 8"]
Hidden=#SDLUA7#

[Statistics-Disks-Letters-Option-8-UnActive]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter8#:
FontColor=50,50,50
X=0r
Y=0r
Hidden=#SDL7#

[Statistics-Disks-Letters-Option-9]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter9#:
X=420
Y=0r
ToolTipText="Click to open input window"
LeftMouseUpAction=[!CommandMeasure Measure-Input "ExecuteBatch 9"]
Hidden=#SDLUA8#

[Statistics-Disks-Letters-Option-9-UnActive]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter9#:
FontColor=50,50,50
X=0r
Y=0r
Hidden=#SDL8#

[Statistics-Disks-Letters-Option-10]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter10#:
X=450
Y=0r
ToolTipText="Click to open input window"
LeftMouseUpAction=[!CommandMeasure Measure-Input "ExecuteBatch 10"]
Hidden=#SDLUA9#

[Statistics-Disks-Letters-Option-10-UnActive]
Meter=String
MeterStyle=BUTTONS
Text=#Disk-Letter10#:
FontColor=50,50,50
X=0r
Y=0r
Hidden=#SDL9#

;	Bottom Buttons

[Statistics-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Statistics-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Settings#
W=70
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive2 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive3 ">" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive4 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive5 "" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Statistics-Back-Button-Skins]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Skins#
W=50
X=80r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Skins" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive2 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive3 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive4 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive5 ">" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Statistics-Next-Page-Button]
Meter=String
MeterStyle=BUTTONS
Text=#P_P# >
W=45
X=540
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Statistics2" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]