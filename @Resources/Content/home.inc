;	Ashuramaru Bundle Home Page

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

[Home-Page-Text]
Meter=String
MeterStyle=DESCRIPTION
StringAlign=Center
Text=#Panel_HomePage_Content#
ClipString=2
ClipStringW=650
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=210r

;	Github

[Social-Github]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
FontSize=25
Text=GitHub
W=160
X=240
Y=200r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"]["https://github.com/Kurou-kun/Ashuramaru-Bundle"]

[Social-Github-Logo]
Meter=Image
ImageName=#@#\Images\Icons\github.png
W=42
H=42
X=([Social-Github:X]+0)
Y=([Social-Github:Y]+0)

;	DeviantArt

[Social-DeviantArt]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
FontSize=25
Text=DeviantArt
W=220
X=430r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"]["https://www.deviantart.com/kurou--kun"]

[Social-DeviantArt-Logo]
Meter=Image
ImageName=#@#\Images\Icons\deviantart.png
W=42
H=42
X=([Social-DeviantArt:X]+0)
Y=([Social-DeviantArt:Y]+0)

;	Rainmeter Forum

[Social-Rainmeter]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
FontSize=25
Text=Rainmeter
W=215
X=480r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"]["https://forum.rainmeter.net/viewtopic.php?t=39820"]

[Social-Rainmeter-Logo]
Meter=Image
ImageName=#@#\Images\Icons\rainmeter.png
W=42
H=42
X=([Social-Rainmeter:X]+0)
Y=([Social-Rainmeter:Y]+0)