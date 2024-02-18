;	Statistics Net Total Limit

[Settings-Statistics-Net-Total-Limit]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Net_Total_Limiter#
W=400
X=70
Y=60

[Settings-Statistics-Net-Total-Limit-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=450r
Y=0r
Hidden=#SNTLLUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNTLA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTLLUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTLLA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Settings-Statistics-Net-Total-Limit-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#SNTLLA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNTLA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTLLUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTLLA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

;	Statistics Detailed Graphs

[Settings-Statistics-Detailed-Graphs]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Detailed_Graphs#
W=400
X=70
Y=50r

[Settings-Statistics-Detailed-Graphs-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=450r
Y=0r
Hidden=#STGOUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DPGY "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDPHG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDPHG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY04 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY203 "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY03 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY2 "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDGHG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NDLY "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DNGYY "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DNGY "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDNHG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DMGYY "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DMGY "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDMHG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DYY0 "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DYY4 "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY04 "1r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY03 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY02 "8r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY01 "15r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY0 "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY5 "1r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY4 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY3 "8r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY2 "15r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDDHG "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Settings-Statistics-Detailed-Graphs-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#STGO#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DPGY "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDPHG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY04 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY203 "165r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY03 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY2 "145r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY "-90r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDGHG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NDLY "180r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DNGYY "165r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DNGY "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDNHG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DMGYY "80r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DMGY "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDMHG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DYY0 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DYY4 -5r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY04 "-105r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY03 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY02 "8r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY01 "15r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY0 "105r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY5 "-105r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY4 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY3 "8r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY2 "15r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY "105r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDDHG "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

;	Statistics Logging

[Settings-Statistics-Logging]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Logging#
W=400
X=70
Y=50r

[Settings-Statistics-Logging-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=450r
Y=0r
Hidden=#STLGUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables STLGUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STLGO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StatisticsLogging "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Group"]

[Settings-Statistics-Logging-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#STLGO#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables STLGUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STLGO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StatisticsLogging "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Group"]

;	Next Page Area

[Settings-VectorCopy-Next-Page-Area]
Meter=Image
SolidColor=100,100,100,10
W=50
H=271
X=742
Y=49
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,40][!SetOption Settings-VectorCopy-Next-Page-Icon ImageTint 200,200,200,60][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-VectorCopy-Next-Page-Icon]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,10][!SetOption Settings-VectorCopy-Next-Page-Icon ImageTint 200,200,200,30][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-VectorCopy-Next-Page-Icon]
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\Statistics\page3" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Next-Page-Icon]
Meter=Image
ImageName=#@#\Images\Icons\right-arrow.png
ImageTint=200,200,200,30
W=30
H=30
X=10r
Y=115r

;	Previous Page Area

[Settings-VectorCopy-Previous-Page-Area]
Meter=Image
SolidColor=100,100,100,10
W=50
H=271
X=742
Y=([Settings-VectorCopy-Next-Page-Area:Y]+271)
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,40][!SetOption Settings-VectorCopy-Previous-Page-Icon ImageTint 200,200,200,60][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-VectorCopy-Previous-Page-Icon]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,10][!SetOption Settings-VectorCopy-Previous-Page-Icon ImageTint 200,200,200,30][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-VectorCopy-Previous-Page-Icon]
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\Statistics\page1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Previous-Page-Icon]
Meter=Image
ImageName=#@#\Images\Icons\left-arrow.png
ImageTint=200,200,200,30
W=30
H=30
X=10r
Y=115r