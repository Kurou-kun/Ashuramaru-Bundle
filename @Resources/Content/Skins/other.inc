;	Ashuramaru Bundle Skins\Other Page

;	This is additional file for panel

;	Last edit date: 19.06.2022

;------------
;	Meters
;------------

;	Translucent Taskbar

[MeasureState-Translucent-Taskbar]
Measure=Calc
Formula=#State-Translucent-Taskbar#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Translucent-Taskbar Text "#SK_ON#"][!SetOption MeterCheckBox-Translucent-Taskbar FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Taskbar" "taskbar.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Translucent-Taskbar Text "#SK_OFF#"][!SetOption MeterCheckBox-Translucent-Taskbar FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Taskbar" "taskbar.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Translucent-Taskbar]
Meter=String
MeterStyle=H2
FontSize=20
Text=Translucent Taskbar
X=80
Y=60

[MeterCheckBox-Translucent-Taskbar]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Translucent-Taskbar]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Translucent-Taskbar "(1-#State-Translucent-Taskbar#)" "#@#\Addons\variables.inc"][!SetVariable State-Translucent-Taskbar "(1-#State-Translucent-Taskbar#)"][!UpdateMeasure MeasureState-Translucent-Taskbar]

[MeterState-Translucent-Taskbar]
Meter=String
X=([MeterCheckBox-Translucent-Taskbar:X]+[MeterCheckBox-Translucent-Taskbar:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	CyberSearch

[MeasureState-CyberSearch]
Measure=Calc
Formula=#State-CyberSearch#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-CyberSearch Text "#SK_ON#"][!SetOption MeterCheckBox-CyberSearch FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\CyberSearch" "search.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-CyberSearch Text "#SK_OFF#"][!SetOption MeterCheckBox-CyberSearch FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\CyberSearch" "search.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-CyberSearch]
Meter=String
MeterStyle=H2
FontSize=20
Text=CyberSearch
X=80
Y=10r

[MeterCheckBox-CyberSearch]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-CyberSearch]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-CyberSearch "(1-#State-CyberSearch#)" "#@#\Addons\variables.inc"][!SetVariable State-CyberSearch "(1-#State-CyberSearch#)"][!UpdateMeasure MeasureState-CyberSearch]

[MeterState-CyberSearch]
Meter=String
X=([MeterCheckBox-CyberSearch:X]+[MeterCheckBox-CyberSearch:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	TaskbarX

[MeasureState-TaskbarX]
Measure=Calc
Formula=#State-TaskbarX#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-TaskbarX Text "#SK_ON#"][!SetOption MeterCheckBox-TaskbarX FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\TaskbarX" "taskbarX.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-TaskbarX Text "#SK_OFF#"][!SetOption MeterCheckBox-TaskbarX FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\TaskbarX" "taskbarX.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-TaskbarX]
Meter=String
MeterStyle=H2
FontSize=20
Text=TaskbarX
X=80
Y=10r

[MeterCheckBox-TaskbarX]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-TaskbarX]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-TaskbarX "(1-#State-TaskbarX#)" "#@#\Addons\variables.inc"][!SetVariable State-TaskbarX "(1-#State-TaskbarX#)"][!UpdateMeasure MeasureState-TaskbarX]

[MeterState-TaskbarX]
Meter=String
X=([MeterCheckBox-TaskbarX:X]+[MeterCheckBox-TaskbarX:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	Volume Control

[MeasureState-Volume-Control]
Measure=Calc
Formula=#State-Volume-Control#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Volume-Control Text "#SK_ON#"][!SetOption MeterCheckBox-Volume-Control FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\VolumeControl" "VolumeControl.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Volume-Control Text "#SK_OFF#"][!SetOption MeterCheckBox-Volume-Control FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\VolumeControl" "VolumeControl.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Volume-Control]
Meter=String
MeterStyle=H2
FontSize=20
Text=Volume Control
X=80
Y=10r

[MeterCheckBox-Volume-Control]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Volume-Control]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Volume-Control "(1-#State-Volume-Control#)" "#@#\Addons\variables.inc"][!SetVariable State-Volume-Control "(1-#State-Volume-Control#)"][!UpdateMeasure MeasureState-Volume-Control]

[MeterState-Volume-Control]
Meter=String
X=([MeterCheckBox-Volume-Control:X]+[MeterCheckBox-Volume-Control:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	Clipboard

[MeasureState-Clipboard]
Measure=Calc
Formula=#State-Clipboard#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Clipboard Text "#SK_ON#"][!SetOption MeterCheckBox-Clipboard FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Clipboard" "clipboard.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Clipboard Text "#SK_OFF#"][!SetOption MeterCheckBox-Clipboard FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Clipboard" "clipboard.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Clipboard]
Meter=String
MeterStyle=H2
FontSize=20
Text=Clipboard
X=80
Y=10r

[MeterCheckBox-Clipboard]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Clipboard]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Clipboard "(1-#State-Clipboard#)" "#@#\Addons\variables.inc"][!SetVariable State-Clipboard "(1-#State-Clipboard#)"][!UpdateMeasure MeasureState-Clipboard]

[MeterState-Clipboard]
Meter=String
X=([MeterCheckBox-Clipboard:X]+[MeterCheckBox-Clipboard:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	VectorCopy

[MeasureState-VectorCopy]
Measure=Calc
Formula=#State-VectorCopy#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-VectorCopy Text "#SK_ON#"][!SetOption MeterCheckBox-VectorCopy FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\VectorCopy" "visualizer.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-VectorCopy Text "#SK_OFF#"][!SetOption MeterCheckBox-VectorCopy FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\VectorCopy" "visualizer.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-VectorCopy]
Meter=String
MeterStyle=H2
FontSize=20
Text=VectorCopy
X=80
Y=10r

[MeterCheckBox-VectorCopy]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-VectorCopy]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-VectorCopy "(1-#State-VectorCopy#)" "#@#\Addons\variables.inc"][!SetVariable State-VectorCopy "(1-#State-VectorCopy#)"][!UpdateMeasure MeasureState-VectorCopy]

[MeterState-VectorCopy]
Meter=String
X=([MeterCheckBox-VectorCopy:X]+[MeterCheckBox-VectorCopy:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1