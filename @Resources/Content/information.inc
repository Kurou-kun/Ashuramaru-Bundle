;	Ashuramaru Bundle Information Page

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

[Information-Page-Text]
Meter=String
MeterStyle=DESCRIPTION
StringAlign=Center
Text=#Panel_About_Content#
ClipString=2
ClipStringW=650
X=((#CURRENTCONFIGWIDTH#/2)+410)
Y=210r

;	Version

[Information-Version]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_About_Version#: #Version#
X=80
Y=50r

;	Build

[Information-Build]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_About_Build#: #Build#
X=80
Y=50r

;	Released

[Information-Released]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_About_Released#: #Released#
X=80
Y=50r

;	License

[Information-License]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_About_License#: #LicenseType#
X=80
Y=50r

[Information-License-Area]
Meter=Image
SolidColor=50,50,50,30
W=220
H=40
X=([Information-License:X]+115)
Y=([Information-License:Y]+0)
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"]["https://creativecommons.org/licenses/by-nc-sa/4.0/"]

;	Copyright

[Information-Copyright]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_About_Copyright# © Kurou 2022
X=80
Y=50r

;	Plugins

[Information-Plugins]
Meter=String
MeterStyle=H2
FontSize=20
StringAlign=Center
Text=#Panel_About_Plugins#
SolidColor=100,100,100,20
ToolTipTitle=#Panel_About_Plugins_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=2
ToolTipText=- App Volume v.1.2.3.0#CRLF#- AudioAnalyzer v.2.0.3.3#CRLF#- AudioLevelBeta v.1.1.8.6#CRLF#- Chameleon v.1.6.2.0#CRLF#- CursorColor v.1.3.0.0#CRLF#- ForstedGlass v.1.1.2#CRLF#- magickmeter v.0.7.4.0#CRLF#- Mouse v.3.2.0#CRLF#- MouseXY v.1.0.0.0#CRLF#- PixelColor v.1.1.0.0#CRLF#- MSIAfterburner v.2.0.0.0#CRLF#- PluginClipboard v.1.0.0.0#CRLF#- TranslucentTaskbar v.1.2.0.0#CRLF#- TopProcesses v.2.2.0.1#CRLF#- ConfigActive v.2.2.1.0#CRLF#- PowerPlugin v.1.4.0.0#CRLF#- RunCommand  v.1.2.0.52#CRLF#- Win7AudioPlugin 1.6.0.0#CRLF#- InputText v.1.7.0.0#CRLF#- ActionTimer v.1.0.0.7
W=150
X=550r
Y=([Information-Version:Y]+0)

;	Skins

[Information-Skins]
Meter=String
MeterStyle=H2
FontSize=20
StringAlign=Center
Text=#Panel_About_Skins#
SolidColor=100,100,100,20
ToolTipTitle=#Panel_About_Skins_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=2
ToolTipText=- Statistics#CRLF#- Processes#CRLF#- Translucent Taskbar#CRLF#- TaskbarX#CRLF#- Battery#CRLF#- Clipboard#CRLF#- Elegant Clock#CRLF#- CyberSearch#CRLF#- Dock#CRLF#- Recycle-Bin#CRLF#- System Control#CRLF#- Volume Control#CRLF#- VectorCopy
W=150
X=([Information-Plugins:X]+75)
Y=([Information-Build:Y]+0)