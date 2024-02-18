;	Ashuramaru Bundle Skins Page

;	This is additional file for panel

;	Last edit date: 19.06.2022

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

[Skins-Page-Text]
Meter=String
MeterStyle=DESCRIPTION
StringAlign=Center
Text=#Panel_Skins_Content#
ClipString=2
ClipStringW=650
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=210r

;	Kurou Skins

;	Colors

[Skins-Type-1]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=30
Text=#Panel_Skins_Type1#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=100r
W=375
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CurrentPage "Skins\kurou" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Fonts

[Skins-Type-2]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=30
Text=#Panel_Skins_Type2#
X=0r
Y=70r
W=375
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CurrentPage "Skins\other" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]