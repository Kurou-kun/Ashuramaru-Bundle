;	Ashuramaru Bundle Settings\Skins\Statistics 2nd Page

;	This is additional file for panel

;	Last edit date: 23.06.2022

;------------
;	Measures
;------------

[Settings-Statistics-Letter-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-Statistics-Disks-Letters-10:X]+50)
Y=([Settings-Statistics-Disks-Letters-10:Y]+0)
W=50
H=35
FontSize=20
StringAlign=Center
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=1
DefaultValue=C
FocusDismiss=0
Command1=[!WriteKeyValue Variables Disk-Letter "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]
Command2=[!WriteKeyValue Variables Disk-Letter2 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]
Command3=!WriteKeyValue Variables Disk-Letter3 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]
Command4=[!WriteKeyValue Variables Disk-Letter4 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]
Command5=[!WriteKeyValue Variables Disk-Letter5 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]
Command6=[!WriteKeyValue Variables Disk-Letter6 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]
Command7=[!WriteKeyValue Variables Disk-Letter7 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]
Command8=[!WriteKeyValue Variables Disk-Letter8 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]
Command9=[!WriteKeyValue Variables Disk-Letter9 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]
Command10=[!WriteKeyValue Variables Disk-Letter10 "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Ping-Host-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-Statistics-Ping-Host-1:X]+0)
Y=([Settings-Statistics-Ping-Host-1:Y]+0)
W=230
H=35
FontSize=20
StringAlign=Center
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
DefaultValue=#Host#
InputLimit=16
FocusDismiss=0
Command1=[!WriteKeyValue Variables Host "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-GPU-Maximum-Memory-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-Statistics-GPU-Maximum-Memory-1:X]+0)
Y=([Settings-Statistics-GPU-Maximum-Memory-1:Y]+0)
W=104
H=35
FontSize=20
StringAlign=Center
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
DefaultValue=#GPUMemMax#
InputLimit=5
FocusDismiss=0
Command1=[!WriteKeyValue Variables GPUMemMax "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Net-Total-Limit-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-Statistics-Net-Total-Limit-1:X]+0)
Y=([Settings-Statistics-Net-Total-Limit-1:Y]+0)
W=104
H=35
FontSize=20
StringAlign=Center
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
DefaultValue=#NetTotalLimit#
InputLimit=6
FocusDismiss=0
Command1=[!WriteKeyValue Variables NetTotalLimit "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Logging-Delay-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-Statistics-Logging-Delay-1:X]+0)
Y=([Settings-Statistics-Logging-Delay-1:Y]+0)
W=100
H=35
FontSize=20
StringAlign=Center
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
DefaultValue=#StatisticsLoggingDelay#
InputLimit=6
FocusDismiss=0
Command1=[!WriteKeyValue Variables StatisticsLoggingDelay "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Group"]

;------------
;	Meters
;------------

;	Statistics Disks Letters

[Settings-Statistics-Disks-Letters]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Disks_Letters#
W=360
X=70
Y=60

[Settings-Statistics-Info]
Meter=Image
ImageName=#@#\Images\Icons\info.png
W=30
H=30
X=([Settings-Statistics-Disks-Letters:X]+370)
Y=([Settings-Statistics-Disks-Letters:Y]+0)
ToolTipTitle=#Panel_Content_Info_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=2
ToolTipText=#Panel_Content_Info#

[Settings-Statistics-Disks-Letters-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Disk-Letter#:
X=70
Y=40r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Letter-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Disk-Letter "C" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-Letters-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Disk-Letter2#:
X=50r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Letter-Measure "ExecuteBatch 2"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Disk-Letter2 "D" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-Letters-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Disk-Letter3#:
X=50r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Letter-Measure "ExecuteBatch 3"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Disk-Letter3 "E" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-Letters-4]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Disk-Letter4#:
X=50r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Letter-Measure "ExecuteBatch 4"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Disk-Letter4 "F" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-Letters-5]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Disk-Letter5#:
X=50r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Letter-Measure "ExecuteBatch 5"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Disk-Letter5 "G" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-Letters-6]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Disk-Letter6#:
X=50r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Letter-Measure "ExecuteBatch 6"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Disk-Letter6 "H" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-Letters-7]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Disk-Letter7#:
X=50r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Letter-Measure "ExecuteBatch 7"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Disk-Letter7 "I" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-Letters-8]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Disk-Letter8#:
X=50r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Letter-Measure "ExecuteBatch 8"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Disk-Letter8 "J" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-Letters-9]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Disk-Letter9#:
X=50r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Letter-Measure "ExecuteBatch 9"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Disk-Letter9 "K" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-Letters-10]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Disk-Letter10#:
X=50r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Letter-Measure "ExecuteBatch 10"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Disk-Letter10 "L" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

;	Statistics Net Total Limit

[Settings-Statistics-Net-Total-Limit]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Net_Total_Limit#
W=400
X=70
Y=50r

[Settings-Statistics-Net-Total-Limit-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
Text=#NetTotalLimit#
W=104
X=125
Y=40r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Net-Total-Limit-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables NetTotalLimit "200000" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Net-Total-Limit-Prefix-1]
Meter=String
MeterStyle=TEXT
FontSize=20
Text=MB
X=52r
Y=0r

;	Statistics GPU Maximum Memory

[Settings-Statistics-GPU-Maximum-Memory]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_GPU_Vram_Memory#
W=430
X=70
Y=50r

[Settings-Statistics-GPU-Maximum-Memory-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
Text=#GPUMemMax#
W=104
X=125
Y=40r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-GPU-Maximum-Memory-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables GPUMemMax "3072" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-GPU-Maximum-Memory-Prefix-1]
Meter=String
MeterStyle=TEXT
FontSize=20
Text=MB
X=52r
Y=0r

;	Statistics Ping Host

[Settings-Statistics-Ping-Host]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Ping_Host#
W=300
X=70
Y=50r

[Settings-Statistics-Ping-Host-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
Text=#Host#
W=230
X=188
Y=40r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Ping-Host-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Host "8.8.8.8" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

;	Statistics Logging Delay

[Settings-Statistics-Logging-Delay]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Logging_Delay#
W=380
X=70
Y=50r

[Settings-Statistics-Logging-Delay-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
Text=#StatisticsLoggingDelay#
W=100
X=122
Y=40r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-Statistics-Logging-Delay-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables StatisticsLoggingDelay "600" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Group"]

[Settings-Statistics-Logging-Delay-Prefix-1]
Meter=String
MeterStyle=TEXT
FontSize=20
Text=S
X=55r
Y=0r

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
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\Statistics\page4" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

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
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\Statistics\page2" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Previous-Page-Icon]
Meter=Image
ImageName=#@#\Images\Icons\left-arrow.png
ImageTint=200,200,200,30
W=30
H=30
X=10r
Y=115r