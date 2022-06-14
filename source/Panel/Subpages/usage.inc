;	Panel > Usage page

;------------
;	Measures
;------------

;	CPU

[MeasureUsageCPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Percent=1
Name=Rainmeter

[MeasureUsageCPUCalc]
Measure=Calc
Formula=MeasureUsageCPU
MinValue=0.0
MaxValue=100.0
DynamicVariables=1

;	GPU

[MeasureUsageGPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Percent=1
Name=Rainmeter

[MeasureUsageGPUCalc]
Measure=Calc
Formula=MeasureUsageGPU
MinValue=0.0
MaxValue=100.0
DynamicVariables=1

;	RAM

[MeasureUsageRAM]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Name=Rainmeter

[MeasureUsageRAMCalc]
Measure=Calc
Formula=MeasureUsageRAM

;------------
;	Meters
;------------

[Usage-Title]
Meter=String
MeterStyle=H2
StringALign=Center
Text=Usage Monitor
X=375
Y=50

;	CPU

[Usage-CPU-Title]
Meter=String
MeterStyle=TEXT
FontColor=#QuaternaryColor#
Text=CPU
X=180
Y=30r

[Usage-CPU-Value]
Meter=String
MeterStyle=TEXT
StringAlign=RIGHT-ALIGN
FontColor=#QuaternaryColor#
MeasureName=MeasureUsageCPUCalc
NumOfDecimals=1
Text=%1
Postfix=" %"
X=400r
Y=0r

[Usage-CPU-Graph]
Meter=Image
ImageName=#@#\Images\Backgrounds\Graph-Background.png
ScaleMargins=13,34,13,13
W=400
H=50
X=180
Y=25r

[Usage-CPU-Graph-Line]
Meter=Line
MeterStyle=GRAPH
MeasureName=MeasureUsageCPUCalc
AutoScale=1
LineCount=1
W=399
H=49
Y=1r
X=1r

;	GPU

[Usage-GPU-Title]
Meter=String
MeterStyle=TEXT
FontColor=#QuaternaryColor#
Text=GPU
X=180
Y=60r

[Usage-GPU-Value]
Meter=String
MeterStyle=TEXT
StringAlign=RIGHT-ALIGN
FontColor=#QuaternaryColor#
MeasureName=MeasureUsageGPUCalc
Autoscale=1
Text=%1
Postfix=" %"
X=400r
Y=0r

[Usage-GPU-Graph]
Meter=Image
ImageName=#@#\Images\Backgrounds\Graph-Background.png
ScaleMargins=13,34,13,13
W=400
H=50
X=180
Y=25r

[Usage-GPU-Graph-Line]
Meter=Line
MeterStyle=GRAPH
MeasureName=MeasureUsageGPUCalc
AutoScale=1
LineCount=1
W=399
H=49
Y=1r
X=1r

;	RAM

[Usage-RAM-Title]
Meter=String
MeterStyle=TEXT
FontColor=#QuaternaryColor#
Text=RAM
X=180
Y=60r

[Usage-RAM-Value]
Meter=String
MeterStyle=TEXT
StringAlign=RIGHT-ALIGN
FontColor=#QuaternaryColor#
MeasureName=MeasureUsageRAMCalc
Autoscale=1
Text=%1
Postfix="B"
X=400r
Y=0r

[Usage-RAM-Graph]
Meter=Image
ImageName=#@#\Images\Backgrounds\Graph-Background.png
ScaleMargins=13,34,13,13
W=400
H=50
X=180
Y=25r

[Usage-RAM-Graph-Line]
Meter=Line
MeterStyle=GRAPH
MeasureName=MeasureUsageRAMCalc
AutoScale=1
LineCount=1
W=399
H=49
Y=1r
X=1r

;	Bottom Buttons

[Usage-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Usage-Back]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Settings#
W=70
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]