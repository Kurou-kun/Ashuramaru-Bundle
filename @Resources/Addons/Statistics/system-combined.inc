;	INFO
;This file is part of Statistics
;This are system statistics

;------------
;	Meters
;------------

;	CPU Usage

[CPU-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSCUY#
W=190
H=14
Text=#SS_S_S_CPU_U#
Hidden=#SLSCU#

[CPU-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-CPU
X=200
Y=0r
W=190
H=14
Text=%1
Postfix=" %"
Hidden=#SLSCU#

[CPU-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-CPU
X=10
Y=#SLSCUB#
W=190
H=1
Hidden=#SLSCU#

;	CPU Core Clock

[CPU-Label-Core-Clock]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSCCY#
W=190
H=14
Text=#SS_S_S_CPU_C#
Hidden=#SLSCC#

[CPU-Value-Core-Clock]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-CPU-Core-Clock
NumOfDecimals=1
X=200
Y=0r
W=190
H=14
Text="%1"
Postfix=" MHz"
Hidden=#SLSCC#

[CPU-Bar-Core-Clock]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-CPU-Core-Clock
X=10
Y=#SLSCCB#
W=190
H=1
Hidden=#SLSCC#

;	CPU Temperature

[CPU-Label-Temperature]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSCTY#
W=190
H=14
Text=#SS_S_S_CPU_T#
Hidden=#SLSCT#

[CPU-Value-Temperature]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-CPU-Temp
X=200
Y=0r
W=190
H=14
Text="%1"
Postfix=" °C"
Hidden=#SLSCT#

[CPU-Bar-Temperature]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-CPU-Temp
X=10
Y=#SLSCTB#
W=190
H=1
Hidden=#SLSCT#

;	GPU Usage

[GPU-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSGUY#
W=190
H=14
Text=#SS_S_S_GPU_U#
Hidden=#SLSGU#

[GPU-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-GPU-Usage
X=200
Y=0r
W=190
H=14
Text=%1
Postfix=" %"
Hidden=#SLSGU#

[GPU-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-GPU-Usage
X=10
Y=#SLSGUB#
W=190
H=1
Hidden=#SLSGU#

;	GPU Temperature

[GPU-Label-Temperature]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSGTY#
W=190
H=14
Text=#SS_S_S_GPU_T#
Hidden=#SLSGT#

[GPU-Value-Temperature]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-GPU-Temp
X=200
Y=0r
W=190
H=14
Text="%1"
Postfix=" °C"
Hidden=#SLSGT#

[GPU-Bar-Temperature]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-GPU-Temp
X=10
Y=#SLSGTB#
W=190
H=1
Hidden=#SLSGT#

;	GPU Core Clock

[GPU-Label-Core-Clock]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSGCY#
W=190
H=14
Text=#SS_S_S_GPU_C#
Hidden=#SLSGC#

[GPU-Value-Core-Clock]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-GPU-Core-Clock
NumOfDecimals=1
X=200
Y=0r
W=190
H=14
Text="%1"
Postfix=" MHz"
Hidden=#SLSGC#

[GPU-Bar-Core-Clock]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-GPU-Core-Clock
X=10
Y=#SLSGCB#
W=190
H=1
Hidden=#SLSGC#

;	GPU Memory Clock

[GPU-Label-Memory-Clock]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSGMCY#
W=190
H=14
Text=#SS_S_S_GPU_M#
Hidden=#SLSGMC#

[GPU-Value-Memory-Clock]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-GPU-Memory-Clock
NumOfDecimals=1
X=200
Y=0r
W=190
H=14
Text="%1"
Postfix=" MHz"
Hidden=#SLSGMC#

[GPU-Bar-Memory-Clock]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-GPU-Memory-Clock
X=10
Y=#SLSGMCB#
W=190
H=1
Hidden=#SLSGMC#

;	GPU Memory Usage

[GPU-Label-Memory-Usage]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSGMCY2#
W=190
H=14
Text=#SS_S_S_GPU_M2#
Hidden=#SLSGMC2#

[GPU-Value-Memory-Usage]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-GPU-Memory-Usage
X=200
Y=0r
W=190
H=14
Text="%1"
Postfix=" MB"
Hidden=#SLSGMC2#

[GPU-Bar-Memory-Usage]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-GPU-Memory-Usage
X=10
Y=#SLSGMCB2#
W=190
H=1
Hidden=#SLSGMC2#

;	GPU Memory Usage Percentage

[GPU-Label-Memory-Usage-Percentage]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSGMCY3#
W=190
H=14
Text=#SS_S_S_GPU_M2#
Hidden=#SLSGMC3#

[GPU-Value-Memory-Usage-Percentage]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-GPU-Memory-Usage-Percentage
X=200
Y=0r
W=190
H=14
Text="%1"
Postfix=" %"
Percentual=1
MinValue=0
MaxValue=100
Hidden=#SLSGMC3#

[GPU-Bar-Memory-Usage-Percentage]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-GPU-Memory-Usage-Percentage
X=10
Y=#SLSGMCB3#
W=190
H=1
MinValue=0
MaxValue=100
Hidden=#SLSGMC3#

;	GPU Voltage

[GPU-Label-GPU-Voltage]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSGVY#
W=190
H=14
Text=#SS_S_S_GPU_V#
Hidden=#SLSGV#

[GPU-Value-GPU-Voltage]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-GPU-Voltage
NumOfDecimals=3
X=200
Y=0r
W=190
H=14
Text="%1"
Postfix=" v"
Hidden=#SLSGV#

[GPU-Bar-GPU-Voltage]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-GPU-Voltage
X=10
Y=#SLSGVB#
W=190
H=1
Hidden=#SLSGV#

;	GPU Fan Speed

[GPU-Label-Fan]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSGFSY#
W=190
H=14
Text=#SS_S_S_GPU_FS#
Hidden=#SLSGFS#

[GPU-Value-Fan]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-GPU-Fan
X=200
Y=0r
W=190
H=14
Text="%1"
Postfix=" %"
Hidden=#SLSGFS#

[GPU-Bar-Fan]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-GPU-Fan
X=10
Y=#SLSGFSB#
W=190
H=1
Hidden=#SLSGFS#

;	GPU Fan Speed RPM

[GPU-Label-RPM]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSGFSY2#
W=190
H=14
Text=#SS_S_S_GPU_FS#
Hidden=#SLSGFS2#

[GPU-Value-RPM]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-GPU-Fan-RPM
X=200
Y=0r
W=190
H=14
Text="%1"
Postfix=" RPM"
Hidden=#SLSGFS2#

[GPU-Bar-Fan-RPM]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-GPU-Fan-RPM
X=10
Y=#SLSGFSB2#
W=190
H=1
Hidden=#SLSGFS2#

;	RAM Usage

[RAM-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSRUY#
W=190
H=14
Text=#SS_S_S_RAM#
Hidden=#SLSRU#

[RAM-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-RAM
X=200
Y=0r
W=190
H=14
Text=%1
Postfix=" %"
Percentual=1
Hidden=#SLSRU#

[RAM-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-RAM
X=10
Y=#SLSRUB#
W=190
H=1
Hidden=#SLSRU#

;	RAM Usage 2

[RAM-Usage2-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSRUY2#
W=190
H=14
Text=#SS_S_S_RAM#
Hidden=#SLSRU2#

[RAM-Usage2-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-RAM2
X=200
Y=0r
W=190
H=14
Text=%1
Postfix=" MB"
Percentual=0
Hidden=#SLSRU2#

[RAM-Usage2-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-RAM2
X=10
Y=#SLSRUB2#
W=190
H=1
Hidden=#SLSRU2#

;	SWAP Usage

[SWAP-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSSUY#
W=190
H=14
Text=#SS_S_S_SWAP#
Hidden=#SLSSU#

[SWAP-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-SWAP
X=200
Y=0r
W=190
H=14
Text=%1
Postfix=" %"
Percentual=1
Hidden=#SLSSU#

[SWAP-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-SWAP
X=10
Y=#SLSSUB#
W=190
H=1
Hidden=#SLSSU#

;	Framerate

[Framerate-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SLSFUY#
W=190
H=14
Text=#Panel_Content_Settings_Skins_Statistics_System_Segment_Framerate#
Hidden=#SLSFU#

[Framerate-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Framerate
X=200
Y=0r
W=190
H=14
Text=%1
Postfix=" FPS"
Percentual=1
Hidden=#SLSFU#

[Framerate-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Framerate
X=10
Y=#SLSFUB#
W=190
H=1
Hidden=#SLSFU#