;	Ashuramaru Bundle Appearance\Fonts Page

;	This is additional file for panel

;	Last edit date: 19.06.2022

;------------
;	Measures
;------------

[Appearance-Font-Changer-Measure]
Measure=Plugin
Plugin=InputText
X=([Appearance-Font-Changer-1:X]+0)
Y=([Appearance-Font-Changer-1:Y]+0)
W=250
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables IllustroFont "$UserInput$" "#@#\Addons\variables.inc"]#Refreshes#

;------------
;	Meters
;------------

[Appearance-Font-Changer]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Appearance_Adjust_Fonts_Title#:
W=310
X=70
Y=60

[Appearance-Font-Changer-Info]
Meter=Image
ImageName=#@#\Images\Icons\info.png
W=30
H=30
X=([Appearance-Font-Changer:X]+340)
Y=([Appearance-Font-Changer:Y]+0)
ToolTipTitle=#Panel_Content_Info_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=2
ToolTipText=#Panel_Content_Info##CRLF##CRLF##Panel_Appearance_Adjust_Fonts_Info##CRLF#fontawasome-webfont, Gotham Book, Oswald,#CRLF#PlayfairDisplay, Poppins, Product Sans,#CRLF#RobotoMono, Ubuntu, Bahnschrift.#CRLF##CRLF##Panel_Appearance_Adjust_Fonts_Info2#.

;	Font Changer

[Appearance-Font-Changer-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
Text=#IllustroFont#
X=200
Y=40r
W=250
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!CommandMeasure Appearance-Font-Changer-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables IllustroFont "Bahnschrift" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]#Refreshes#