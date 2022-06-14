;	Panel > Appearance > Fonts page

;------------
;	Meters
;------------

[Appearance-Fonts-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#A_F_Desc#
W=410
X=180
Y=40

[Change-Fonts]
Meter=String
MeterStyle=TEXT
Text=#A_F_Title#
X=180
Y=30r

;	Panel Font

[Panel]
Meter=String
MeterStyle=BUTTONS
Text=#A_F_P_Title#
X=180
Y=30r
Hidden=#FCPFUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Font-To-Change "PanelFont" "#@#\Addons\variables.inc"][!DeactivateConfig "#ROOTCONFIG#\Panel\FontChanger" "Font-Changer.ini"][!ActivateConfig "#ROOTCONFIG#\Panel\FontChanger" "Font-Changer.ini"][!WriteKeyValue Variables FCPFUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables FCPF "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables FCIFUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables FCIF "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Panel-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#A_F_P_Title#
Hidden=#FCPF#
X=0r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Font-To-Change "NULL" "#@#\Addons\variables.inc"][!DeactivateConfig "#ROOTCONFIG#\Panel\FontChanger" "Font-Changer.ini"][!WriteKeyValue Variables FCPFUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables FCPF "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Illustro Font

[Illustro]
Meter=String
MeterStyle=BUTTONS
Text=#A_F_I_Title#
X=180
Y=([Panel:Y]+25)
Hidden=#FCIFUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Font-To-Change "IllustroFont" "#@#\Addons\variables.inc"][!WriteKeyValue Variables FCIFUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables FCIF "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables FCPFUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables FCPF "1" "#@#\Addons\variables.inc"][!DeactivateConfig "#ROOTCONFIG#\Panel\FontChanger" "Font-Changer.ini"][!ActivateConfig "#ROOTCONFIG#\Panel\FontChanger" "Font-Changer.ini"][!Refresh #CURRENTCONFIG#]

[Illustro-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#A_F_I_Title#
Hidden=#FCIF#
X=0r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Font-To-Change "NULL" "#@#\Addons\variables.inc"][!WriteKeyValue Variables FCIFUA "0" "#@#\Addons\variables.inc"][!DeactivateConfig "#ROOTCONFIG#\Panel\FontChanger" "Font-Changer.ini"][!WriteKeyValue Variables FCIF "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Appearance-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

;	Bottom

[Panel-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Appearance#
W=90
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Appearance" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Default-Fonts-Button]
Meter=String
MeterStyle=BUTTONS
Text=#A_F_DF#
W=90
X=100r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PanelFont "Trebuchet MS" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IllustroFont "Bahnschrift" "#@#\Addons\variables.inc"]#Refreshes#