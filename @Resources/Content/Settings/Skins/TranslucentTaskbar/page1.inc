;	Ashuramaru Bundle Settings\Skins\Translucent Taskbar Page

;	This is additional file for panel

;	Last edit date: 20.06.2022

;------------
;	Meters
;------------

;	Translucent Taskbar Type

[Settings-Translucent-Taskbar-Type]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Translucent_Taskbar_Type#
W=400
X=70
Y=60

[Settings-Translucent-Taskbar-Type-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Translucent_Taskbar_Type_Transparent#
W=155
X=70
Y=40r
Hidden=#TTVOUA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TTAS "2" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVOUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Taskbar"][!Redraw]

[Settings-Translucent-Taskbar-Type-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Translucent_Taskbar_Type_Transparent#
W=155
X=0r
Y=0r
Hidden=#TTVO#

[Settings-Translucent-Taskbar-Type-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Translucent_Taskbar_Type_Blured#
W=90
X=170r
Y=0r
Hidden=#TTVOUA2#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TTAS "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTVOUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Taskbar"][!Redraw]

[Settings-Translucent-Taskbar-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Translucent_Taskbar_Type_Blured#
W=90
X=0r
Y=0r
Hidden=#TTVO2#