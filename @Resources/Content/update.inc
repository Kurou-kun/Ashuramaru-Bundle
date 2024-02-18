;	Ashuramaru Bundle Update Page

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

[Update-Page-Text]
Meter=String
MeterStyle=DESCRIPTION
StringAlign=Center
Text=#Panel_Update_Content#
ClipString=2
ClipStringW=650
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=210r

;	Update Check

[Update-Checker-String]
Meter=String
MeterStyle=H2 | Style-Update-Checker-Connecting
FontSize=20
X=((#CURRENTCONFIGWIDTH#/2)+0)
Y=70r
DynamicVariables=1

[Update-Download-Button]
Meter=String
MeterStyle=BUTTONS
Text=#Panel_Upadate_Download#
FontSize=30
X=((#CURRENTCONFIGWIDTH#/2)-80)
Y=50r
Hidden=1
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"]["https://github.com/Kurou-kun/Ashuramaru-Bundle/releases/latest"]