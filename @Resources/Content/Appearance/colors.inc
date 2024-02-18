;	Ashuramaru Bundle Appearance\Colors Page

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

[Appearance-Color-Text]
Meter=String
MeterStyle=DESCRIPTION
StringAlign=Center
Text=#Panel_Appearance_Adjust_Colors_Title#
ClipString=2
ClipStringW=650
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=210r

;	Illustro

[Illustro-Colors]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=30
Text=#Panel_Appearance_Adjust_Colors_IllustroColors#
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=100r
W=375
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CurrentPage "Appearance\Colors\colors-illustro" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	VectorCopy

[VectorCopy-Colors]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=30
Text=#Panel_Appearance_Adjust_Colors_VectorCopyColors#
X=0r
Y=70r
W=375
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CurrentPage "Appearance\Colors\colors-vectorcopy" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]