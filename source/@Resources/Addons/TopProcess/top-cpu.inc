;	Top Process Meter > CPU

;------------
;	Measures
;------------

;	CPU

[Measure-CPU]
Measure=CPU
AverageSize=#SmoothFactor#

[Measure-Top-Usage-1]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Percent=1
Index=1
IfCondition=((Measure-Top-Usage-1 > 0) && (#MaxProcesses# > 0))
IfTrueAction=[!EnableMeasureGroup "Process-1"][!UpdateMeterGroup "Process-1"][!ShowMeterGroup "Process-1"][!RedrawGroup "Process-1"]
IfFalseAction=[!DisableMeasureGroup "Process-1"][!HideMeterGroup "Process-1"][!RedrawGroup "Process-1"]
Disabled=0

[Measure-Top-Usage-2]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Percent=1
Index=2
IfCondition=((Measure-Top-Usage2 > 0) && (#MaxProcesses# > 1))
IfTrueAction=[!EnableMeasureGroup "Process-2"][!UpdateMeterGroup "Process-2"][!ShowMeterGroup "Process-2"][!RedrawGroup "Process-2"]
IfFalseAction=[!DisableMeasureGroup "Process-2"][!HideMeterGroup "Process-2"][!RedrawGroup "Process-2"]
Disabled=(#MaxProcesses# < 2)

[Measure-Top-Usage-3]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Percent=1
Index=3
IfCondition=((Measure-Top-Usage-3 > 0) && (#MaxProcesses# > 2))
IfTrueAction=[!EnableMeasureGroup "Process3"][!UpdateMeterGroup "Process3"][!ShowMeterGroup "Process3"][!RedrawGroup "Process3"]
IfFalseAction=[!DisableMeasureGroup "Process3"][!HideMeterGroup "Process3"][!RedrawGroup "Process3"]
Disabled=(#MaxProcesses# < 3)

[Measure-Top-Usage-4]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Percent=1
Index=4
IfCondition=((Measure-Top-Usage-4 > 0) && (#MaxProcesses# > 3))
IfTrueAction=[!EnableMeasureGroup "Process4"][!UpdateMeterGroup "Process4"][!ShowMeterGroup "Process4"][!RedrawGroup "Process4"]
IfFalseAction=[!DisableMeasureGroup "Process4"][!HideMeterGroup "Process4"][!RedrawGroup "Process4"]
Disabled=(#MaxProcesses# < 4)

[Measure-Top-Usage-5]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Percent=1
Index=5
IfCondition=((Measure-Top-Usage-5 > 0) && (#MaxProcesses# > 4))
IfTrueAction=[!EnableMeasureGroup "Process5"][!UpdateMeterGroup "Process5"][!ShowMeterGroup "Process5"][!RedrawGroup "Process5"]
IfFalseAction=[!DisableMeasureGroup "Process5"][!HideMeterGroup "Process5"][!RedrawGroup "Process5"]
Disabled=(#MaxProcesses# < 5)

[Measure-Top-Usage-6]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Percent=1
Index=6
IfCondition=((Measure-Top-Usage-6 > 0) && (#MaxProcesses# > 5))
IfTrueAction=[!EnableMeasureGroup "Process6"][!UpdateMeterGroup "Process6"][!ShowMeterGroup "Process6"][!RedrawGroup "Process6"]
IfFalseAction=[!DisableMeasureGroup "Process6"][!HideMeterGroup "Process6"][!RedrawGroup "Process6"]
Disabled=(#MaxProcesses# < 6)

[Measure-Top-Usage-7]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Percent=1
Index=7
IfCondition=((Measure-Top-Usage-7 > 0) && (#MaxProcesses# > 6))
IfTrueAction=[!EnableMeasureGroup "Process7"][!UpdateMeterGroup "Process7"][!ShowMeterGroup "Process7"][!RedrawGroup "Process7"]
IfFalseAction=[!DisableMeasureGroup "Process7"][!HideMeterGroup "Process7"][!RedrawGroup "Process7"]
Disabled=(#MaxProcesses# < 7)

[Measure-Top-Usage-8]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Percent=1
Index=8
IfCondition=((Measure-Top-Usage-8 > 0) && (#MaxProcesses# > 7))
IfTrueAction=[!EnableMeasureGroup "Process8"][!UpdateMeterGroup "Process8"][!ShowMeterGroup "Process8"][!RedrawGroup "Process8"]
IfFalseAction=[!DisableMeasureGroup "Process8"][!HideMeterGroup "Process8"][!RedrawGroup "Process8"]
Disabled=(#MaxProcesses# < 8)

[Measure-Top-Usage-9]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Percent=1
Index=9
IfCondition=((Measure-Top-Usage-9 > 0) && (#MaxProcesses# > 8))
IfTrueAction=[!EnableMeasureGroup "Process9"][!UpdateMeterGroup "Process9"][!ShowMeterGroup "Process9"][!RedrawGroup "Process9"]
IfFalseAction=[!DisableMeasureGroup "Process9"][!HideMeterGroup "Process9"][!RedrawGroup "Process9"]
Disabled=(#MaxProcesses# < 9)

[Measure-Top-Usage-10]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Percent=1
Index=10
IfCondition=((Measure-Top-Usage-10 > 0) && (#MaxProcesses# > 9))
IfTrueAction=[!EnableMeasureGroup "Process10"][!UpdateMeterGroup "Process10"][!ShowMeterGroup "Process10"][!RedrawGroup "Process10"]
IfFalseAction=[!DisableMeasureGroup "Process10"][!HideMeterGroup "Process10"][!RedrawGroup "Process10"]
Disabled=(#MaxProcesses# < 10)

;	CPU Calc

[Calc-Top-Percent-1]
Measure=Calc
Formula=Measure-Top-Usage-1
MinValue=0.0
MaxValue=100.0
Group=Process-1
Disabled=0

[Calc-Top-Percent-2]
Measure=Calc
Formula=Measure-Top-Usage-2
MinValue=0.0
MaxValue=100.0
Group=Process-2
Disabled=1

[Calc-Top-Percent-3]
Measure=Calc
Formula=Measure-Top-Usage-3
MinValue=0.0
MaxValue=100.0
Group=Process3
Disabled=1

[Calc-Top-Percent-4]
Measure=Calc
Formula=Measure-Top-Usage-4
MinValue=0.0
MaxValue=100.0
Group=Process4
Disabled=1

[Calc-Top-Percent-5]
Measure=Calc
Formula=Measure-Top-Usage-5
MinValue=0.0
MaxValue=100.0
Group=Process5
Disabled=1

[Calc-Top-Percent-6]
Measure=Calc
Formula=Measure-Top-Usage-6
MinValue=0.0
MaxValue=100.0
Group=Process6
Disabled=1

[Calc-Top-Percent-7]
Measure=Calc
Formula=Measure-Top-Usage-7
MinValue=0.0
MaxValue=100.0
Group=Process7
Disabled=1

[Calc-Top-Percent-8]
Measure=Calc
Formula=Measure-Top-Usage-8
MinValue=0.0
MaxValue=100.0
Group=Process8
Disabled=1

[Calc-Top-Percent-9]
Measure=Calc
Formula=Measure-Top-Usage-9
MinValue=0.0
MaxValue=100.0
Group=Process9
Disabled=1

[Calc-Top-Percent-10]
Measure=Calc
Formula=Measure-Top-Usage-10
MinValue=0.0
MaxValue=100.0
Group=Process10
Disabled=1

;------------
;	Meters
;------------

[Top-CPU-Title]
Meter=String
MeterStyle=H4
Text=Top CPU Proccesses
X=100
Y=12

;	Proccesses

[Top-Name-1]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Top-Usage-1
Group=Process-1
Y=27r

[Top-Percent-1]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Calc-Top-Percent-1
Group=Process-1
Y=0r

[Top-Name-2]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Top-Usage-2
Group=Process-2

[Top-Percent-2]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Calc-Top-Percent-2
Group=Process-2
Y=0r

[Top-Name-3]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Top-Usage-3
Group=Process3

[Top-Percent-3]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Calc-Top-Percent-3
Group=Process3
Y=0r

[Top-Name-4]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Top-Usage-4
Group=Process4

[Top-Percent-4]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Calc-Top-Percent-4
Group=Process4
Y=0r

[Top-Name-5]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Top-Usage-5
Group=Process5

[Top-Percent-5]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Calc-Top-Percent-5
Group=Process5
Y=0r

[Top-Name-6]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Top-Usage-6
Group=Process6

[Top-Percent-6]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Calc-Top-Percent-6
Group=Process6
Y=0r

[Top-Name-7]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Top-Usage-7
Group=Process7

[Top-Percent-7]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Calc-Top-Percent-7
Group=Process7
Y=0r

[Top-Name-8]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Top-Usage-8
Group=Process8

[Top-Percent-8]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Calc-Top-Percent-8
Group=Process8
Y=0r

[Top-Name-9]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Top-Usage-9
Group=Process9

[Top-Percent-9]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Calc-Top-Percent-9
Group=Process9
Y=0r

[Top-Name-10]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Top-Usage-10
Group=Process10

[Top-Percent-10]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Calc-Top-Percent-10
Group=Process10
Y=0r