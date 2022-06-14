;	Panel > Settings > Dock > 2nd page

;------------
;	Meters
;------------

;	Description

[Dock-Settings-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_D_Desc#
W=410
X=180
Y=40

;	Length

[Dock-Settings-Length]
Meter=String
MeterStyle=TEXT
Text=#S_D_I_Amount#
ToolTipTitle=#S_D_I_Amount#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_I_A_ToolTipText#"
X=180
Y=30r

[Dock-Settings-Lenght-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=2 #S_D_I#
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DIW "88" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI3 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI4 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI5 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DHI "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA5 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Dock"]
Hidden=#ISBUA#

[Dock-Settings-Lenght-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=2 #S_D_I#
X=0r
Y=0r
Hidden=#ISB#

[Dock-Settings-Lenght-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=3 #S_D_I#
X=70r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DIW "123" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI2 "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI3 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI4 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI5 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DHI "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA5 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Dock"]
Hidden=#ISBUA2#

[Dock-Settings-Lenght-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=3 #S_D_I#
X=0r
Y=0r
Hidden=#ISB2#

[Dock-Settings-Lenght-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=4 #S_D_I#
X=70r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DIW "158" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI2 "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI3 "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI4 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI5 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DHI "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA5 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Dock"]
Hidden=#ISBUA3#

[Dock-Settings-Lenght-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=4 #S_D_I#
X=0r
Y=0r
Hidden=#ISB3#

[Dock-Settings-Lenght-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=5 #S_D_I#
X=70r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DIW "193" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI2 "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI3 "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI4 "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI5 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DHI "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA5 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Dock"]
Hidden=#ISBUA4#

[Dock-Settings-Lenght-Option-4-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=5 #S_D_I#
X=0r
Y=0r
Hidden=#ISB4#

[Dock-Settings-Lenght-Option-5]
Meter=String
MeterStyle=BUTTONS
Text=6 #S_D_I#
X=70r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DIW "228" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI2 "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI3 "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI4 "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DI5 "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DHI "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DIH5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISB5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISBUA5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Dock"]
Hidden=#ISBUA5#

[Dock-Settings-Lenght-Option-5-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=6 #S_D_I#
X=0r
Y=0r
Hidden=#ISB5#

;	Bottom Buttons

[Dock-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Dock-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=#S_D_Apply#
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!RefreshGroup "Ashuramaru-Bundle Dock" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageName "Settings" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive2 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive3 ">" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive4 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive5 "" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Dock-Settings-Icons-Folder]
Meter=String
MeterStyle=BUTTONS
Text=#S_D_I_Folder#
X=100r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][::{450D8FBA-AD25-11D0-98A8-0800361B1103}\Rainmeter\Skins\Ashuramaru-Bundle\@Resources\Images\Icons\Dock]#Log-Settings-Dock-IF#

[Dock-Settings-Prevous-Page]
Meter=String
MeterStyle=BUTTONS
Text=< #P_P#
StringAlign=Right
X=585
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-dock" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]