;	Statistics > Network

;------------
;	Meters
;------------

;	Ping

[Ping-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=28r
W=190
H=14
Text=#SS_S_N_Latency#

[Ping-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Ping
X=200
Y=0r
W=190
H=14
Text=%1
Postfix=" ms"

[Ping-Bar]
Meter=Bar
MeasureName=Measure-Ping
MeterStyle=BAR
X=10
Y=16r
W=190
H=1

;	Upload

[Upload-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SNUY#
W=190
H=14
Text=#SS_S_N_Upload#
Hidden=#SNU#

[Upload-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Net-Out
X=200
Y=0r
W=190
H=14
Text=%1
Postfix="B/s"
NumOfDecimals=1
AutoScale=1k
Hidden=#SNU#

[Upload-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Net-Out
X=10
Y=#SNUB#
W=190
H=1
Hidden=#SNU#

;	Download

[Download-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SNDY#
W=190
H=14
Text=#SS_S_N_Download#
Hidden=#SND#

[Download-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Net-In
X=200
Y=0r
W=190
H=14
Text=%1
Postfix="B/s"
NumOfDecimals=1
AutoScale=1k
Hidden=#SND#

[Download-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Net-In
X=10
Y=#SNDB#
W=190
H=1
Hidden=#SND#

;	Speed

[Speed-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SNSY#
W=190
H=14
Text=#SS_S_N_Speed#
Hidden=#SNS#

[Speed-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Net-Traffic
X=200
Y=0r
W=190
H=14
Text=%1
Postfix="B/s"
NumOfDecimals=1
AutoScale=1k
Hidden=#SNS#

[Speed-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Net-Traffic
X=10
Y=#SNSB#
W=190
H=1
Hidden=#SNS#

;	Traffic

[Traffic-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#SNTY#
W=190
H=14
Text=#SS_S_N_Traffic#
Hidden=#SNT#

[Traffic-Value-Limited]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Net-Total-Limit-Scale-Shown
X=140
Y=0r
W=190
H=14
Text=%1
Postfix="B /"
NumOfDecimals=1
AutoScale=2k
Hidden=#SNT##SNTLA#

[Traffic-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Net-Total
X=200
Y=0r
W=190
H=14
Text=%1
Postfix="B"
NumOfDecimals=1
AutoScale=1k
Hidden=#SNT#

[Traffic-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Net-Total2
X=10
Y=#SNTB#
W=190
H=1
Hidden=#SNT#