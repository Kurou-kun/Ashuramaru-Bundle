;------------
;	Meters
;------------

;	Disk #1

[Disk-1-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=28r
W=190
H=14
Text=#disk1#\

[Disk-1-Write-Icon]
Meter=Image
ImageName=#@#\Images\Icons\down-arrow.png
ImageTint=#ISecondaryColor#
X=35
Y=0r
W=10
H=10

[Disk-1-Write-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Write-Disk-1
FontColor=#ITertiaryColor#
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1

[Disk-1-Read-Icon]
Meter=Image
ImageName=#@#\Images\Icons\up-arrow.png
ImageTint=#ISecondaryColor#
X=95
Y=0r
W=10
H=10

[Disk-1-Read-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Read-Disk-1
FontColor=#ITertiaryColor#
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1

[Disk-1-Left-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Left-Disk-1
X=200
Y=0r
W=70
H=14
Text=%1B
NumOfDecimals=1
AutoScale=1
LeftMouseUpAction=["#Disk1#\"]

[Disk-1-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Used-Disk-1
X=10
Y=16r
W=190
H=1

;	Disk #2

[Disk-2-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#D2Y#
W=190
H=14
Text=#disk2#\
Hidden=#D2A#

[Disk-2-Write-Icon]
Meter=Image
ImageName=#@#\Images\Icons\down-arrow.png
ImageTint=#ISecondaryColor#
X=35
Y=0r
W=10
H=10
Hidden=#D2A#

[Disk-2-Write-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Write-Disk-2
FontColor=#ITertiaryColor#
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D2A#

[Disk-2-Read-Icon]
Meter=Image
ImageName=#@#\Images\Icons\up-arrow.png
ImageTint=#ISecondaryColor#
X=95
Y=0r
W=10
H=10
Hidden=#D2A#

[Disk-2-Read-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Read-Disk-2
FontColor=#ITertiaryColor#
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D2A#

[Disk-2-Left-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Left-Disk-2
X=200
Y=0r
W=70
H=14
Text=%1B
NumOfDecimals=1
AutoScale=1
LeftMouseUpAction=["#Disk2#\"]
Hidden=#D2A#

[Disk-2-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Used-Disk-2
X=10
Y=#D2Y2#
W=190
H=1
Hidden=#D2A#

;	Disk #3

[Disk-3-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#D3Y#
W=190
H=14
Text=#disk3#\
Hidden=#D3A#

[Disk-3-Write-Icon]
Meter=Image
ImageName=#@#\Images\Icons\down-arrow.png
ImageTint=#ISecondaryColor#
X=35
Y=0r
W=10
H=10
Hidden=#D3A#

[Disk-3-Write-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Write-Disk-3
FontColor=#ITertiaryColor#
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D3A#

[Disk-3-Read-Icon]
Meter=Image
ImageName=#@#\Images\Icons\up-arrow.png
ImageTint=#ISecondaryColor#
X=95
Y=0r
W=10
H=10
Hidden=#D3A#

[Disk-3-Read-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Read-Disk-3
FontColor=#ITertiaryColor#
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D3A#

[Disk-3-Left-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Left-Disk-3
X=200
Y=0r
W=70
H=14
Text=%1B
NumOfDecimals=1
AutoScale=1
LeftMouseUpAction=["#Disk3#\"]
Hidden=#D3A#

[Disk-3-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Used-Disk-3
X=10
Y=#D3Y2#
W=190
H=1
Hidden=#D3A#

;	Disk #4

[Disk-4-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#D4Y#
W=190
H=14
Text=#disk4#\
Hidden=#D4A#

[Disk-4-Write-Icon]
Meter=Image
ImageName=#@#\Images\Icons\down-arrow.png
ImageTint=#ISecondaryColor#
X=35
Y=0r
W=10
H=10
Hidden=#D4A#

[Disk-4-Write-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Write-Disk-4
FontColor=#ITertiaryColor#
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D4A#

[Disk-4-Read-Icon]
Meter=Image
ImageName=#@#\Images\Icons\up-arrow.png
ImageTint=#ISecondaryColor#
X=95
Y=0r
W=10
H=10
Hidden=#D4A#

[Disk-4-Read-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Read-Disk-4
FontColor=#ITertiaryColor#
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D4A#

[Disk-4-Left-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Left-Disk-4
X=200
Y=0r
W=70
H=14
Text=%1B
NumOfDecimals=1
AutoScale=1
LeftMouseUpAction=["#Disk4#\"]
Hidden=#D4A#

[Disk-4-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Used-Disk-4
X=10
Y=#D4Y2#
W=190
H=1
Hidden=#D4A#

;	Disk #5

[Disk-5-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#D5Y#
W=190
H=14
Text=#disk5#\
Hidden=#D5A#

[Disk-5-Write-Icon]
Meter=Image
ImageName=#@#\Images\Icons\down-arrow.png
ImageTint=#ISecondaryColor#
X=35
Y=0r
W=10
H=10
Hidden=#D5A#

[Disk-5-Write-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Write-Disk-5
FontColor=#ITertiaryColor#
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D5A#

[Disk-5-Read-Icon]
Meter=Image
ImageName=#@#\Images\Icons\up-arrow.png
ImageTint=#ISecondaryColor#
X=95
Y=0r
W=10
H=10
Hidden=#D5A#

[Disk-5-Read-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Read-Disk-5
FontColor=#ITertiaryColor#
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D5A#

[Disk-5-Left-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Left-Disk-5
X=200
Y=0r
W=70
H=14
Text=%1B
NumOfDecimals=1
AutoScale=1
LeftMouseUpAction=["#Disk5#\"]
Hidden=#D5A#

[Disk-5-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Used-Disk-5
X=10
Y=#D5Y2#
W=190
H=1
Hidden=#D5A#

;	Disk #6

[Disk-6-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#D6Y#
W=190
H=14
Text=#disk6#\
Hidden=#D6A#

[Disk-6-Write-Icon]
Meter=Image
ImageName=#@#\Images\Icons\down-arrow.png
ImageTint=#ISecondaryColor#
X=35
Y=0r
W=10
H=10
Hidden=#D6A#

[Disk-6-Write-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Write-Disk-6
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D6A#

[Disk-6-Read-Icon]
Meter=Image
ImageName=#@#\Images\Icons\up-arrow.png
ImageTint=#ISecondaryColor#
X=95
Y=0r
W=10
H=10
Hidden=#D6A#

[Disk-6-Read-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Read-Disk-6
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D6A#

[Disk-6-Left-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Left-Disk-6
X=200
Y=0r
W=70
H=14
Text=%1B
NumOfDecimals=1
AutoScale=1
LeftMouseUpAction=["#Disk6#\"]
Hidden=#D6A#

[Disk-6-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Used-Disk-6
X=10
Y=#D6Y2#
W=190
H=1
Hidden=#D6A#

;	Disk #7

[Disk-7-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#D7Y#
W=190
H=14
Text=#disk7#\
Hidden=#D7A#

[Disk-7-Write-Icon]
Meter=Image
ImageName=#@#\Images\Icons\down-arrow.png
ImageTint=#ISecondaryColor#
X=35
Y=0r
W=10
H=10
Hidden=#D7A#

[Disk-7-Write-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Write-Disk-7
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D7A#

[Disk-7-Read-Icon]
Meter=Image
ImageName=#@#\Images\Icons\up-arrow.png
ImageTint=#ISecondaryColor#
X=95
Y=0r
W=10
H=10
Hidden=#D7A#

[Disk-7-Read-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Read-Disk-7
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D7A#

[Disk-7-Left-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Left-Disk-7
X=200
Y=0r
W=70
H=14
Text=%1B
NumOfDecimals=1
AutoScale=1
LeftMouseUpAction=["#Disk7#\"]
Hidden=#D7A#

[Disk-7-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Used-Disk-7
X=10
Y=#D7Y2#
W=190
H=1
Hidden=#D7A#

;	Disk #8

[Disk-8-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#D8Y#
W=190
H=14
Text=#disk8#\
Hidden=#D8A#

[Disk-8-Write-Icon]
Meter=Image
ImageName=#@#\Images\Icons\down-arrow.png
ImageTint=#ISecondaryColor#
X=35
Y=0r
W=10
H=10
Hidden=#D8A#

[Disk-8-Write-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Write-Disk-8
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D8A#

[Disk-8-Read-Icon]
Meter=Image
ImageName=#@#\Images\Icons\up-arrow.png
ImageTint=#ISecondaryColor#
X=95
Y=0r
W=10
H=10
Hidden=#D8A#

[Disk-8-Read-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Read-Disk-8
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D8A#

[Disk-8-Left-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Left-Disk-8
X=200
Y=0r
W=70
H=14
Text=%1B
NumOfDecimals=1
AutoScale=1
LeftMouseUpAction=["#Disk8#\"]
Hidden=#D8A#

[Disk-8-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Used-Disk-8
X=10
Y=#D8Y2#
W=190
H=1
Hidden=#D8A#

;	Disk #9

[Disk-9-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#D9Y#
W=190
H=14
Text=#disk9#\
Hidden=#D9A#

[Disk-9-Write-Icon]
Meter=Image
ImageName=#@#\Images\Icons\down-arrow.png
ImageTint=#ISecondaryColor#
X=35
Y=0r
W=10
H=10
Hidden=#D9A#

[Disk-9-Write-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Write-Disk-9
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D9A#

[Disk-9-Read-Icon]
Meter=Image
ImageName=#@#\Images\Icons\up-arrow.png
ImageTint=#ISecondaryColor#
X=95
Y=0r
W=10
H=10
Hidden=#D9A#

[Disk-9-Read-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Read-Disk-9
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D9A#

[Disk-9-Left-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Left-Disk-9
X=200
Y=0r
W=70
H=14
Text=%1B
NumOfDecimals=1
AutoScale=1
LeftMouseUpAction=["#Disk9#\"]
Hidden=#D9A#

[Disk-9-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Used-Disk-9
X=10
Y=#D9Y2#
W=190
H=1
Hidden=#D9A#

;	Disk #10

[Disk-10-Label]
Meter=String
MeterStyle=LEFT-ALIGN
X=10
Y=#D10Y#
W=190
H=14
Text=#disk10#\
Hidden=#D10A#

[Disk-10-Write-Icon]
Meter=Image
ImageName=#@#\Images\Icons\down-arrow.png
ImageTint=#ISecondaryColor#
X=35
Y=0r
W=10
H=10
Hidden=#D10A#

[Disk-10-Write-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Write-Disk-10
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D10A#

[Disk-10-Read-Icon]
Meter=Image
ImageName=#@#\Images\Icons\up-arrow.png
ImageTint=#ISecondaryColor#
X=95
Y=0r
W=10
H=10
Hidden=#D10A#

[Disk-10-Read-Value]
Meter=String
MeterStyle=LEFT-ALIGN
MeasureName=Measure-Read-Disk-10
X=8r
Y=0r
W=55
H=14
Text=%1B/s
NumOfDecimals=0
AutoScale=1
Hidden=#D10A#

[Disk-10-Left-Value]
Meter=String
MeterStyle=RIGHT-ALIGN
MeasureName=Measure-Left-Disk-10
X=200
Y=0r
W=70
H=14
Text=%1B
NumOfDecimals=1
AutoScale=1
LeftMouseUpAction=["#Disk10#\"]
Hidden=#D10A#

[Disk-10-Bar]
Meter=Bar
MeterStyle=BAR
MeasureName=Measure-Used-Disk-10
X=10
Y=#D10Y2#
W=190
H=1
Hidden=#D10A#