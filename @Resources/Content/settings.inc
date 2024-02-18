;	Ashuramaru Bundle Settings Page

;	This is additional file for panel

;	Last edit date: 20.06.2022

;------------
;	Meters
;------------

;	Banner

[Banner]
Meter=Image
ImageName=#@#\Images\Banners\home.png
X=75
Y=50

;	Description

[Settings-Page-Text]
Meter=String
MeterStyle=DESCRIPTION
StringAlign=Center
Text=#Panel_Content_Settings#
ClipString=2
ClipStringW=650
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=210r

;	Panel Settings

[Settings-Panel]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=30
Text=#Panel_Content_Settings_1#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=100r
W=375
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CurrentPage "Settings\panel" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Skins Settings

[Settings-Skins]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=30
Text=#Panel_Content_Settings_2#
X=0r
Y=70r
W=375
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CurrentPage "Settings\skins" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Uninstall

[Settings-Uninstall]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=30
Text=#Panel_Content_Settings_3#
X=0r
Y=70r
W=375
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CurrentPage "uninstall" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]