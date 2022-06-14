;	Panel > Settings page

;------------
;	Meters
;------------

[Settings-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_Desc#
W=410
X=180
Y=40

[Statistics-Settings]
Meter=String
MeterStyle=BUTTONS
Text=#S_Statistics#
X=180
Y=30r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Statistics" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Translucent-Settings]
Meter=String
MeterStyle=BUTTONS
Text=#S_Taskbar#
X=180
Y=30r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Translucent" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Visualizer-Settings]
Meter=String
MeterStyle=BUTTONS
Text=#S_VectorCopy#
X=180
Y=30r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Visualizer" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Processes-Settings]
Meter=String
MeterStyle=BUTTONS
Text=#S_Processes#
X=180
Y=30r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Processes" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Dock-Settings]
Meter=String
MeterStyle=BUTTONS
Text=#S_Dock#
X=180
Y=30r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Dock" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]
[CyberSearch-Settings]
Meter=String
MeterStyle=BUTTONS
Text=#S_CyberSearch#
X=180
Y=30r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-CyberSearch" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[TaskbarX-Settings]
Meter=String
MeterStyle=BUTTONS
Text=#S_TaskbarX#
X=180
Y=30r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-TaskbarX" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Clock-Settings]
Meter=String
MeterStyle=BUTTONS
Text=#S_Clock#
X=180
Y=30r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Clock" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Bottom Buttons

[Settings-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Settings-Uninstall-Button]
Meter=String
MeterStyle=BUTTONS
Text=#S_Uninstall#
W=62
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Uninstall" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Settings-Usage-Button]
Meter=String
MeterStyle=BUTTONS
Text=#S_Usage#
W=95
X=70r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Usage" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Panel-Settings]
Meter=String
MeterStyle=BUTTONS
Text=#S_Panel#
X=105r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Panel" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]