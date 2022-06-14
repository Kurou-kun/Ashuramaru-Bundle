;	Panel > Settings > Translucent Taskbar

;------------
;	Meters
;------------

[Translucent-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_T_Desc#
W=410
X=180
Y=40

[Translucent-Taskbar]
Meter=String
MeterStyle=TEXT
Text=#S_T_Title#
X=180
Y=30r

[Translucent-Taskbar-Variation-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_T_UnBlurred#
X=180
Y=25r
ToolTipTitle=#S_T_UnBlurred#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_T_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TTAS "2" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVOUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Taskbar"][!Redraw]
Hidden=#TTVOUA#

[Translucent-Taskbar-Variation-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_T_UnBlurred#
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#TTVO#

[Translucent-Taskbar-Variation-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_T_Blurred#
X=80r
Y=0r
ToolTipTitle=#S_T_Blurred#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_T_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TTAS "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVOUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Taskbar"][!Redraw]
Hidden=#TTVOUA2#

[Translucent-Taskbar-Variation-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_T_Blurred#
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#TTVO2#

[Translucent-Taskbar-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Translucent-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Settings#
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]