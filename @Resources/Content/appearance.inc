;	Ashuramaru Bundle Appearance Page

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

[Appearance-Page-Text]
Meter=String
MeterStyle=DESCRIPTION
StringAlign=Center
Text=#Panel_Appearance_Content#
ClipString=2
ClipStringW=650
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=210r

;	Colors

[Appearance-Colors]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=30
Text=#Panel_Appearance_Adjust_Colors#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=100r
W=375
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CurrentPage "Appearance\colors" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Fonts

[Appearance-Fonts]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=30
Text=#Panel_Appearance_Adjust_Fonts#
X=0r
Y=70r
W=375
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CurrentPage "Appearance\fonts" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Background

[Appearance-Background]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=30
Text=#Panel_Appearance_Adjust_Background#
X=0r
Y=70r
W=375
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CurrentPage "Appearance\background" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]