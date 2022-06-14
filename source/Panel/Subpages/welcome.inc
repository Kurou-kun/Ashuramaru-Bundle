;	Panel > Welcome page

;------------
;	Meters
;------------

;	Title

[Welcome-Title]
Meter=String
MeterStyle=H2
Text=#W_Title#
X=280
Y=50

[Welcome-Description]
Meter=String
MeterStyle=DESCRIPTION
ClipString=2
ClipStringW=400
Text=#W_Desc#
X=180
Y=50r

;	Links Bar

[LB-DeviantArt]
Meter=String
MeterStyle=LINKS-BAR
X=(170 + 30)
Y=([Welcome-Description:H] + 10)r
Text="DeviantArt"
ToolTipText="https://www.deviantart.com/kurou--kun"
LeftMouseUpAction=["https://www.deviantart.com/kurou--kun"]

[LB-Deviantart-Separator]
Meter=String
MeterStyle=LINKS-BAR
FontColor=255,255,255,200
X=([LB-DeviantArt:W] + 5)r
Text="|"

[LB-Github]
Meter=String
MeterStyle=LINKS-BAR
Text="GitHub"
ToolTipText="https://github.com/Kurou-kun/Ashuramaru-Bundle"
LeftMouseUpAction=["https://github.com/Kurou-kun/Ashuramaru-Bundle"]

[LB-Github-Separator]
Meter=String
MeterStyle=LINKS-BAR
FontColor=255,255,255,200
X=([LB-Github:W] + 5)r
Text="|"

[LB-Website]
Meter=String
MeterStyle=LINKS-BAR
Text="#W_LB_3#"
ToolTipText="https://kurou-kun.github.io"
LeftMouseUpAction=["https://kurou-kun.github.io"]

[LB-Website-Separator]
Meter=String
MeterStyle=LINKS-BAR
FontColor=255,255,255,200
X=([LB-Website:W] + 5)r
Text="|"

[LB-Survey]
Meter=String
MeterStyle=LINKS-BAR
Text="#W_LB_4#"
ToolTipText="https://forum.rainmeter.net/viewtopic.php?t=39820"
LeftMouseUpAction=["https://forum.rainmeter.net/viewtopic.php?t=39820"]