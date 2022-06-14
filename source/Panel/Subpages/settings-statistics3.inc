;	Panel > Settings > Statistics > 3rd page

;------------
;	Measures
;------------

[Measure-Input]
Measure=Plugin
Plugin=InputText
X=180
Y=95
W=100
H=20
FontSize=12
FontColor=255,255,255,255
SolidColor=50,50,50,255
AntiAlias=1
DefaultValue=#Host#
InputLimit=12
FocusDismiss=0
Command1=[!WriteKeyValue Variables Host "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

[Measure-Input2]
Measure=Plugin
Plugin=InputText
X=180
Y=150
W=100
H=20
FontSize=12
FontColor=255,255,255,255
SolidColor=50,50,50,255
AntiAlias=1
DefaultValue=#GPUMemMax#
InputLimit=6
FocusDismiss=0
Command1=[!WriteKeyValue Variables GPUMemMax "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"][!Redraw]

[Measure-Input3]
Measure=Plugin
Plugin=InputText
X=180
Y=200
W=100
H=20
FontSize=12
FontColor=255,255,255,255
SolidColor=50,50,50,255
AntiAlias=1
DefaultValue=#NetTotalLimit#
InputLimit=6
FocusDismiss=0
Command1=[!WriteKeyValue Variables NetTotalLimit "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Redraw]

;------------
;	Meters
;------------

[Statistics-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_S_Desc#
W=410
X=180
Y=40

;	Ping Host

[Statistics-Ping-Host]
Meter=String
MeterStyle=TEXT
Text=#S_S_PH_Title#
W=100
X=180
Y=30r

[Statistics-Ping-Host-Input]
Meter=String
MeterStyle=BUTTONS
Text=#Host#
SolidColor=50,50,50,50
W=100
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!CommandMeasure Measure-Input "ExecuteBatch 1"]

;	GPU Memory Usage Max

[Statistics-GPU-Mem-Max]
Meter=String
MeterStyle=TEXT
Text=#S_S_GMM_Title#
W=140
X=180
Y=30r

[Statistics-GPU-Mem-Max-Input]
Meter=String
MeterStyle=BUTTONS
Text=#GPUMemMax# MB
SolidColor=50,50,50,50
W=100
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!CommandMeasure Measure-Input2 "ExecuteBatch 1"]

;	Network Traffic Limit

[Statistics-Network-Traffic-Limit]
Meter=String
MeterStyle=TEXT
Text=#S_S_NTL_Title#
W=170
X=180
Y=30r

[Statistics-Network-Traffic-Limit-UnActive]
Meter=String
MeterStyle=BUTTONS
Text=#SK_OFF#
X=200r
Y=0r
Hidden=#SNTLLUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNTLA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTLLUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTLLA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Network-Traffic-Limit-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#SK_ON#
X=0r
Y=0r
Hidden=#SNTLLA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNTLA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTLLUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTLLA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Network-Traffic-Limit-Input]
Meter=String
MeterStyle=BUTTONS
Text=#NetTotalLimit# MB
SolidColor=50,50,50,50
W=100
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!CommandMeasure Measure-Input3 "ExecuteBatch 1"]

;	Statistics Measures Engine

[Statistics-Measures-Engine]
Meter=String
MeterStyle=TEXT
Text=#S_S_ME_Title#
W=210
X=180
Y=30r

[Statistics-Measures-Engine-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_ME_MSIAfterburner#
W=103
X=180
Y=25r
Hidden=#SMEUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables StatisticsMeasureEngine "msiafterburner" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Measures-Engine-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_ME_MSIAfterburner#
FontColor=#PrimaryColor#
W=103
X=0r
Y=0r
Hidden=#SMEA#

[Statistics-Measures-Engine-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_ME_HWInfo#
W=68
X=110r
Y=0r
Hidden=#SMEUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables StatisticsMeasureEngine "hwinfo" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Measures-Engine-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_ME_HWInfo#
FontColor=#PrimaryColor#
W=68
X=0r
Y=0r
Hidden=#SMEA2#

;	Statistics Disks Type

[Statistics-Disks-Type]
Meter=String
MeterStyle=TEXT
Text=#S_S_SDT_Title#
W=210
X=180
Y=30r

[Statistics-Disks-Type-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_SDT_Classic#
W=48
X=180
Y=25r
Hidden=#SDTUA#
LeftMouseDownAction=[!WriteKeyValue Variables SDTUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Disks-Combined-Path "#@#\Addons\Statistics\disks-type.inc" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Disks-Type-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_S_SDT_Classic#
W=48
X=0r
Y=0r
Hidden=#SDTA#

[Statistics-Disks-Type-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_SDT_Advanced#
W=67
X=60r
Y=0r
Hidden=#SDTUA2#
LeftMouseDownAction=[!WriteKeyValue Variables SDTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Disks-Combined-Path "#@#\Addons\Statistics\disks-type2.inc" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Disks-Type-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_S_SDT_Advanced#
W=67
X=0r
Y=0r
Hidden=#SDTA2#

;	Bottom Buttons

[Statistics-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Statistics-Back-Page-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #P_P#
StringAlign=Right
X=585
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Statistics2" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]