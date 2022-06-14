;	CyberSearch > Search Design

;------------
;	Measures
;------------

[FrostedGlass]
Measure=Plugin
Plugin=FrostedGlass
Type=#OpaqueBG#
Border=None

[Search-Get-URL]
Measure=String
String=#Engine-URL-Query#
Substitute="{q}":"#query#"
DynamicVariables=1

[Search-Run]
Measure=Calc
Formula=0
IfCondition=#Run-Search#=1
IfTrueAction=["[Search-Get-URL]"][!SetVariable Run-Search 0][!Update]
DynamicVariables=1

[Search-Input]
Measure=Plugin
Plugin=InputText
FocusDismiss=1
SolidColor=20,20,20,255
FontColor=255,255,255,255
MeterStyle=LEFT-ALIGN
DynamicVariables=1
FontSize=10
X=([Search-Default-Text:X]+0)
Y=([Search-Default-Text:Y]+0)
W=([Search-Default-Text:W]+0)
OnDismissAction=[!Update]
Command1=[!SetVariable query "$UserInput$"][!SetVariable Run-Search 1][!Update]

;------------
;	Meters
;------------

;	Search Bar

[Search-Bar]
Meter=Image
ImageName=#Background-Image-Blank#
X=0
Y=0
W=400
H=60
ScaleMargins=0,34,0,14
DynamicVariables=1

[Search-Click-Area]
Meter=Image
SolidColor=0,0,0,1
X=60
Y=6
W=325
H=45
DynamicVariables=1
MouseActionCursorName=Text
LeftMouseUpAction=[!SetVariable Show-History 1][!CommandMeasure Search-Input "ExecuteBatch ALL"][!Update]

[Search-Engine-Logo]
Meter=Image
ImageName=#Engine-Icon#
X=20
Y=12
W=30
H=30
MouseActionCursor=0

[Search-Default-Text]
Meter=String
Text=Type here to search #Engine-Name#
MeterStyle=LEFT-ALIGN
FontSize=13
FontColor=200,200,200,100
W=([Search-Bar:W]-[Search-Default-Text:X]-20)
X=([Search-Click-Area:X]+5)
Y=([Search-Click-Area:Y]+12)
DynamicVariables=1