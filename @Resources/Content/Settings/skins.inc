;	Ashuramaru Bundle Settings\Skins Page

;	This is additional file for panel

;	Last edit date: 20.06.2022

;------------
;	Meters
;------------

;	Statistics

[Settings-Statistics]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=25
Text=#Panel_Content_Settings_Skins_1#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=60
W=500
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\Statistics\page1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Processes

[Settings-Processes]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=25
Text=#Panel_Content_Settings_Skins_2#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=60r
W=500
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\Processes\page1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Elegant Clock

[Settings-Elegant-Clock]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=25
Text=#Panel_Content_Settings_Skins_3#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=60r
W=500
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\ElegantClock\page1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Dock

[Settings-Dock]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=25
Text=#Panel_Content_Settings_Skins_4#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=60r
W=500
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\Dock\page1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Translucent Taskbar

[Settings-Translucent-Taskbar]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=25
Text=#Panel_Content_Settings_Skins_5#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=60r
W=500
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\TranslucentTaskbar\page1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	CyberSearch

[Settings-CyberSearch]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=25
Text=#Panel_Content_Settings_Skins_6#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=60r
W=500
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\CyberSearch\page1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	TaskbarX

[Settings-TaskbarX]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=25
Text=#Panel_Content_Settings_Skins_7#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=60r
W=500
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\TaskbarX\page1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	VectorCopy

[Settings-VectorCopy]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=25
Text=#Panel_Content_Settings_Skins_8#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=60r
W=500
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\VectorCopy\page1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]