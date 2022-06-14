;	Notifications > New Update

;------------
;	Meters
;------------

[Content-Title]
Meter=String
MeterStyle=TEXT
FontSize=13
Text=#N_Title3#
ClipString=2
ClipStringW=270
X=-30r
Y=30r

[Content-Seperator]
Meter=Image
SolidColor=255,255,255,30
W=200
H=1
X=0r
Y=25r

[Content-Description]
Meter=String
MeterStyle=TEXT
FontSize=9
Text=#N_Desc3#: #ErrorCode#
ClipString=2
ClipStringW=220
X=0r
Y=10r

[Content-Link]
Meter=String
MeterStyle=TEXT
FontSize=9
SolidColor=0,0,0,1
Text=Learn what this code means
FontColor=#PrimaryColor#
LeftMouseDownAction=["https://github.com/Kurou-kun/Ashuramaru-Bundle/wiki/Ashuramaru-Bundle---ERROR-CODES"]
X=0r
Y=20r

[Content-Icon]
Meter=Image
ImageName=#@#\Images\Icons\error.png
X=220r
Y=-25r
W=55
H=55