;	Processes > GPU

[Variables]
SmoothFactor=2
MaxProcesses=8
Blacklist="_Total|Idle|dwm"

;------------
;	Measures
;------------

;	Processes

[MeasureGPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=0
AverageSize=#SmoothFactor#

[MeasureTopUsage1]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=1
IfCondition=((MeasureTopUsage1 > 0) && (#MaxProcesses# > 0))
IfTrueAction=[!EnableMeasureGroup "Process1"][!UpdateMeterGroup "Process1"][!ShowMeterGroup "Process1"][!RedrawGroup "Process1"]
IfFalseAction=[!DisableMeasureGroup "Process1"][!HideMeterGroup "Process1"][!RedrawGroup "Process1"]
Disabled=0

[MeasureTopUsage2]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=2
IfCondition=((MeasureTopUsage2 > 0) && (#MaxProcesses# > 1))
IfTrueAction=[!EnableMeasureGroup "Process2"][!UpdateMeterGroup "Process2"][!ShowMeterGroup "Process2"][!RedrawGroup "Process2"]
IfFalseAction=[!DisableMeasureGroup "Process2"][!HideMeterGroup "Process2"][!RedrawGroup "Process2"]
Disabled=(#MaxProcesses# < 2)

[MeasureTopUsage3]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=3
IfCondition=((MeasureTopUsage3 > 0) && (#MaxProcesses# > 2))
IfTrueAction=[!EnableMeasureGroup "Process3"][!UpdateMeterGroup "Process3"][!ShowMeterGroup "Process3"][!RedrawGroup "Process3"]
IfFalseAction=[!DisableMeasureGroup "Process3"][!HideMeterGroup "Process3"][!RedrawGroup "Process3"]
Disabled=(#MaxProcesses# < 3)

[MeasureTopUsage4]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=4
IfCondition=((MeasureTopUsage4 > 0) && (#MaxProcesses# > 3))
IfTrueAction=[!EnableMeasureGroup "Process4"][!UpdateMeterGroup "Process4"][!ShowMeterGroup "Process4"][!RedrawGroup "Process4"]
IfFalseAction=[!DisableMeasureGroup "Process4"][!HideMeterGroup "Process4"][!RedrawGroup "Process4"]
Disabled=(#MaxProcesses# < 4)

[MeasureTopUsage5]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=5
IfCondition=((MeasureTopUsage5 > 0) && (#MaxProcesses# > 4))
IfTrueAction=[!EnableMeasureGroup "Process5"][!UpdateMeterGroup "Process5"][!ShowMeterGroup "Process5"][!RedrawGroup "Process5"]
IfFalseAction=[!DisableMeasureGroup "Process5"][!HideMeterGroup "Process5"][!RedrawGroup "Process5"]
Disabled=(#MaxProcesses# < 5)

[MeasureTopUsage6]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=6
IfCondition=((MeasureTopUsage6 > 0) && (#MaxProcesses# > 5))
IfTrueAction=[!EnableMeasureGroup "Process6"][!UpdateMeterGroup "Process6"][!ShowMeterGroup "Process6"][!RedrawGroup "Process6"]
IfFalseAction=[!DisableMeasureGroup "Process6"][!HideMeterGroup "Process6"][!RedrawGroup "Process6"]
Disabled=(#MaxProcesses# < 6)

[MeasureTopUsage7]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=7
IfCondition=((MeasureTopUsage7 > 0) && (#MaxProcesses# > 6))
IfTrueAction=[!EnableMeasureGroup "Process7"][!UpdateMeterGroup "Process7"][!ShowMeterGroup "Process7"][!RedrawGroup "Process7"]
IfFalseAction=[!DisableMeasureGroup "Process7"][!HideMeterGroup "Process7"][!RedrawGroup "Process7"]
Disabled=(#MaxProcesses# < 7)

[MeasureTopUsage8]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=8
IfCondition=((MeasureTopUsage8 > 0) && (#MaxProcesses# > 7))
IfTrueAction=[!EnableMeasureGroup "Process8"][!UpdateMeterGroup "Process8"][!ShowMeterGroup "Process8"][!RedrawGroup "Process8"]
IfFalseAction=[!DisableMeasureGroup "Process8"][!HideMeterGroup "Process8"][!RedrawGroup "Process8"]
Disabled=(#MaxProcesses# < 8)

;	Memory

[MeasureTopMemory1]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage1]
Group=Process1
DynamicVariables=1
Disabled=1

[MeasureTopMemoryShared1]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage1]
Group=Process1
DynamicVariables=1
Disabled=1

[MeasureTopMemory2]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage2]
Group=Process2
DynamicVariables=1
Disabled=1

[MeasureTopMemoryShared2]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage2]
Group=Process2
DynamicVariables=1
Disabled=1

[MeasureTopMemory3]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage3]
Group=Process3
DynamicVariables=1
Disabled=1

[MeasureTopMemoryShared3]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage3]
Group=Process3
DynamicVariables=1
Disabled=1

[MeasureTopMemory4]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage4]
Group=Process4
DynamicVariables=1
Disabled=1

[MeasureTopMemoryShared4]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage4]
Group=Process4
DynamicVariables=1
Disabled=1

[MeasureTopMemory5]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage5]
Group=Process5
DynamicVariables=1
Disabled=1

[MeasureTopMemoryShared5]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage5]
Group=Process5
DynamicVariables=1
Disabled=1

[MeasureTopMemory6]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage6]
Group=Process6
DynamicVariables=1
Disabled=1

[MeasureTopMemoryShared6]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage6]
Group=Process6
DynamicVariables=1
Disabled=1

[MeasureTopMemory7]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage7]
Group=Process7
DynamicVariables=1
Disabled=1

[MeasureTopMemoryShared7]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage7]
Group=Process7
DynamicVariables=1
Disabled=1

[MeasureTopMemory8]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage8]
Group=Process8
DynamicVariables=1
Disabled=1

[MeasureTopMemoryShared8]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage8]
Group=Process8
DynamicVariables=1
Disabled=1

;	Calcs

[CalcTopMemory1]
Measure=Calc
Formula=(MeasureTopMemory1 + MeasureTopMemoryShared1)
Group=Process1
Disabled=1

[CalcTopMemory2]
Measure=Calc
Formula=(MeasureTopMemory2 + MeasureTopMemoryShared2)
Group=Process2
Disabled=1

[CalcTopMemory3]
Measure=Calc
Formula=(MeasureTopMemory3 + MeasureTopMemoryShared3)
Group=Process3
Disabled=1

[CalcTopMemory4]
Measure=Calc
Formula=(MeasureTopMemory4 + MeasureTopMemoryShared4)
Group=Process4
Disabled=1

[CalcTopMemory5]
Measure=Calc
Formula=(MeasureTopMemory5 + MeasureTopMemoryShared5)
Group=Process5
Disabled=1

[CalcTopMemory6]
Measure=Calc
Formula=(MeasureTopMemory6 + MeasureTopMemoryShared6)
Group=Process6
Disabled=1

[CalcTopMemory7]
Measure=Calc
Formula=(MeasureTopMemory7 + MeasureTopMemoryShared7)
Group=Process7
Disabled=1

[CalcTopMemory8]
Measure=Calc
Formula=(MeasureTopMemory8 + MeasureTopMemoryShared8)
Group=Process8
Disabled=1

[CalcTopPercent1]
Measure=Calc
Formula=MeasureTopUsage1
MinValue=0.0
MaxValue=100.0
Group=Process1
Disabled=1

[CalcTopPercent2]
Measure=Calc
Formula=MeasureTopUsage2
MinValue=0.0
MaxValue=100.0
Group=Process2
Disabled=1

[CalcTopPercent3]
Measure=Calc
Formula=MeasureTopUsage3
MinValue=0.0
MaxValue=100.0
Group=Process3
Disabled=1

[CalcTopPercent4]
Measure=Calc
Formula=MeasureTopUsage4
MinValue=0.0
MaxValue=100.0
Group=Process4
Disabled=1

[CalcTopPercent5]
Measure=Calc
Formula=MeasureTopUsage5
MinValue=0.0
MaxValue=100.0
Group=Process5
Disabled=1

[CalcTopPercent6]
Measure=Calc
Formula=MeasureTopUsage6
MinValue=0.0
MaxValue=100.0
Group=Process6
Disabled=1

[CalcTopPercent7]
Measure=Calc
Formula=MeasureTopUsage7
MinValue=0.0
MaxValue=100.0
Group=Process7
Disabled=1

[CalcTopPercent8]
Measure=Calc
Formula=MeasureTopUsage8
MinValue=0.0
MaxValue=100.0
Group=Process8
Disabled=1

;------------
;	Meters
;------------

;	Header

[Processes-Mouse-Action]
Meter=Image
SolidColor=0,0,0,1
X=7
Y=7
W=195
H=195
ToolTipTitle=#SS_PR_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#SS_PR_ToolTipText#"
MouseActionCursor=0
MouseScrollDownAction=[!WriteKeyValue Variables TopProcessActive "cpu-process" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Top-Processes"][!Redraw]
MouseScrollUpAction=[!WriteKeyValue Variables TopProcessActive "io-process" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Top-Processes"][!Redraw]

[MeterTitleText]
Meter=String
MeterStyle=H4
Text=#SS_PR_Title2#
X=100
Y=12
UpdateDivider=-1

;	Processes

[MeterTopName1]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=MeasureTopUsage1
Group=Process1
Y=28r
X=10
W=85
Hidden=1

[MeterTopMemory1]
Meter=String
MeterStyle=CENTER-ALIGN
MeasureName=CalcTopMemory1
Group=Process1
Text="%1B"
AutoScale=1k
NumOfDecimals=1
X=125
Y=0r
Hidden=1

[MeterTopPercent1]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=CalcTopPercent1
Group=Process1
Text="%1%"
NumOfDecimals=1
X=200
Y=0r
Hidden=1

[Process-1-Seperator]
Meter=Image
SolidColor=255,255,255,50
X=10
Y=13r
W=189
H=1

[MeterTopName2]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=MeasureTopUsage2
Group=Process2
Y=8r
X=10
W=85
Hidden=1

[MeterTopMemory2]
Meter=String
MeterStyle=CENTER-ALIGN
MeasureName=CalcTopMemory2
Group=Process2
Text="%1B"
AutoScale=1k
NumOfDecimals=1
X=125
Y=0r
Hidden=1

[MeterTopPercent2]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=CalcTopPercent2
Group=Process2
Text="%1%"
NumOfDecimals=1
X=200
Y=0r
Hidden=1

[Process-2-Seperator]
Meter=Image
SolidColor=255,255,255,50
X=10
Y=13r
W=189
H=1

[MeterTopName3]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=MeasureTopUsage3
Group=Process3
Y=8r
X=10
W=85
Hidden=1

[MeterTopMemory3]
Meter=String
MeterStyle=CENTER-ALIGN
MeasureName=CalcTopMemory3
Group=Process3
Text="%1B"
AutoScale=1k
NumOfDecimals=1
X=125
Y=0r
Hidden=1

[MeterTopPercent3]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=CalcTopPercent3
Group=Process3
Text="%1%"
NumOfDecimals=1
X=200
Y=0r
Hidden=1

[Process-3-Seperator]
Meter=Image
SolidColor=255,255,255,50
X=10
Y=13r
W=189
H=1

[MeterTopName4]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=MeasureTopUsage4
Group=Process4
Y=8r
X=10
W=85
Hidden=1

[MeterTopMemory4]
Meter=String
MeterStyle=CENTER-ALIGN
MeasureName=CalcTopMemory4
Group=Process4
Text="%1B"
AutoScale=1k
NumOfDecimals=1
X=125
Y=0r
Hidden=1

[MeterTopPercent4]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=CalcTopPercent4
Group=Process4
Text="%1%"
NumOfDecimals=1
X=200
Y=0r
Hidden=1

[Process-4-Seperator]
Meter=Image
SolidColor=255,255,255,50
X=10
Y=13r
W=189
H=1

[MeterTopName5]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=MeasureTopUsage5
Group=Process5
Y=8r
X=10
W=85
Hidden=1

[MeterTopMemory5]
Meter=String
MeterStyle=CENTER-ALIGN
MeasureName=CalcTopMemory5
Group=Process5
Text="%1B"
AutoScale=1k
NumOfDecimals=1
X=125
Y=0r
Hidden=1

[MeterTopPercent5]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=CalcTopPercent5
Group=Process5
Text="%1%"
NumOfDecimals=1
X=200
Y=0r
Hidden=1

[Process-5-Seperator]
Meter=Image
SolidColor=255,255,255,50
X=10
Y=13r
W=189
H=1

[MeterTopName6]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=MeasureTopUsage6
Group=Process6
Y=8r
X=10
W=85
Hidden=1

[MeterTopMemory6]
Meter=String
MeterStyle=CENTER-ALIGN
MeasureName=CalcTopMemory6
Group=Process6
Text="%1B"
AutoScale=1k
NumOfDecimals=1
X=125
Y=0r
Hidden=1

[MeterTopPercent6]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=CalcTopPercent6
Group=Process6
Text="%1%"
NumOfDecimals=1
X=200
Y=0r
Hidden=1

[Process-6-Seperator]
Meter=Image
SolidColor=255,255,255,50
X=10
Y=13r
W=189
H=1

[MeterTopName7]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=MeasureTopUsage7
Group=Process7
Y=8r
X=10
W=85
Hidden=1

[MeterTopMemory7]
Meter=String
MeterStyle=CENTER-ALIGN
MeasureName=CalcTopMemory7
Group=Process7
Text="%1B"
AutoScale=1k
NumOfDecimals=1
X=125
Y=0r
Hidden=1

[MeterTopPercent7]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=CalcTopPercent7
Group=Process7
Text="%1%"
NumOfDecimals=1
X=200
Y=0r
Hidden=1

[Process-7-Seperator]
Meter=Image
SolidColor=255,255,255,50
X=10
Y=13r
W=189
H=1

[MeterTopName8]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=MeasureTopUsage8
Group=Process8
Y=8r
X=10
W=85
Hidden=1

[MeterTopMemory8]
Meter=String
MeterStyle=CENTER-ALIGN
MeasureName=CalcTopMemory8
Group=Process8
Text="%1B"
AutoScale=1k
NumOfDecimals=1
X=125
Y=0r
Hidden=1

[MeterTopPercent8]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=CalcTopPercent8
Group=Process8
Text="%1%"
NumOfDecimals=1
X=200
Y=0r
Hidden=1

[MeterGraph]
Meter=Image
ImageName=#@#\Images\Backgrounds\Graph-Background.png
W=193
H=40
X=7
Y=#GraphY#
Hidden=#HideGraph#

[MeterLineGraph]
Meter=Line
MeterStyle=GRAPH
MeasureName=MeasureGPU
Y=1r
X=1r
LineCount=1
AutoScale=1
Hidden=#HideGraph#