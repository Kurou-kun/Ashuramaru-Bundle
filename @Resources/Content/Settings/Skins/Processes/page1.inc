;	Ashuramaru Bundle Settings\Skins\Processes Page

;	This is additional file for panel

;	Last edit date: 20.06.2022

;------------
;	Meters
;------------

;	Processes Graphs

[Settings-Processes-Graphs]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Processes_Content#
X=70
Y=60
W=280

[Settings-Processes-Graphs-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=310r
Y=0r
Hidden=#PGOUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables HideGraph "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GraphY "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PGOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PGOA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Top-Processes"]

[Settings-Processes-Graphs-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#PGOA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables HideGraph "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GraphY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PGOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PGOA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Top-Processes"]