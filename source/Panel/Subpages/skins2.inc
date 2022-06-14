;	Panel > Skins > 2nd page

;------------
;	Meters
;------------

[Skins-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#SK_Desc#
W=410
X=180
Y=40

;------------
;	Skins
;------------

;	Notes

[MeasureState-Notes]
Measure=Calc
Formula=#State-Notes#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Notes Text "#SK_ON#"][!SetOption MeterState-Notes FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\Notes" "notes.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Notes Text "#SK_OFF#"][!SetOption MeterState-Notes FontColor "215,252,217,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Notes" "notes.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Notes]
Meter=String
MeterStyle=TEXT
Text=#SK_Notes#
W=150
X=180
Y=30r

[MeterCheckBox-Notes]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-Notes]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Notes "(1-#State-Notes#)" "#@#\Addons\variables.inc"][!SetVariable State-Notes "(1-#State-Notes#)"][!UpdateMeasure MeasureState-Notes]

[MeterState-Notes]
Meter=String
X=([MeterCheckBox-Notes:X]+[MeterCheckBox-Notes:W])
Y=R
MeterStyle=TEXT
StringAlign=Right
DynamicVariables=1

;	CyberSearch

[MeasureState-CyberSearch]
Measure=Calc
Formula=#State-CyberSearch#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-CyberSearch Text "#SK_ON#"][!SetOption MeterState-CyberSearch FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\CyberSearch" "search.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-CyberSearch Text "#SK_OFF#"][!SetOption MeterState-CyberSearch FontColor "215,252,217,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\CyberSearch" "search.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-CyberSearch]
Meter=String
MeterStyle=TEXT
Text=CyberSearch
X=180
Y=10r

[MeterCheckBox-CyberSearch]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-CyberSearch]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-CyberSearch "(1-#State-CyberSearch#)" "#@#\Addons\variables.inc"][!SetVariable State-CyberSearch "(1-#State-CyberSearch#)"][!UpdateMeasure MeasureState-CyberSearch]

[MeterState-CyberSearch]
Meter=String
X=([MeterCheckBox-CyberSearch:X]+[MeterCheckBox-CyberSearch:W])
Y=R
MeterStyle=TEXT
StringAlign=Right
DynamicVariables=1

;	TaskbarX

[MeasureState-TaskbarX]
Measure=Calc
Formula=#State-TaskbarX#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-TaskbarX Text "#SK_ON#"][!SetOption MeterState-TaskbarX FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\TaskbarX" "TaskbarX.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-TaskbarX Text "#SK_OFF#"][!SetOption MeterState-TaskbarX FontColor "255,255,255,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\TaskbarX" "TaskbarX.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-TaskbarX]
Meter=String
MeterStyle=TEXT
Text=TaskbarX
X=180
Y=10r

[MeterCheckBox-TaskbarX]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-TaskbarX]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-TaskbarX "(1-#State-TaskbarX#)" "#@#\Addons\variables.inc"][!SetVariable State-TaskbarX "(1-#State-TaskbarX#)"][!UpdateMeasure MeasureState-TaskbarX]

[MeterState-TaskbarX]
Meter=String
X=([MeterCheckBox-TaskbarX:X]+[MeterCheckBox-TaskbarX:W])
Y=R
MeterStyle=TEXT
StringAlign=Right
DynamicVariables=1

;	Volume Control

[MeasureState-Volume-Control]
Measure=Calc
Formula=#State-Volume-Control#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Volume-Control Text "#SK_ON#"][!SetOption MeterState-Volume-Control FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\VolumeControl" "VolumeControl.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Volume-Control Text "#SK_OFF#"][!SetOption MeterState-Volume-Control FontColor "255,255,255,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VolumeControl" "VolumeControl.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Volume-Control]
Meter=String
MeterStyle=TEXT
Text=#SK_VolumeControl#
X=180
Y=10r

[MeterCheckBox-Volume-Control]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-Volume-Control]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Volume-Control "(1-#State-Volume-Control#)" "#@#\Addons\variables.inc"][!SetVariable State-Volume-Control "(1-#State-Volume-Control#)"][!UpdateMeasure MeasureState-Volume-Control]

[MeterState-Volume-Control]
Meter=String
X=([MeterCheckBox-Volume-Control:X]+[MeterCheckBox-Volume-Control:W])
Y=R
MeterStyle=TEXT
StringAlign=Right
DynamicVariables=1

;	System Control

[MeasureState-System-Control]
Measure=Calc
Formula=#State-System-Control#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-System-Control Text "#SK_ON#"][!SetOption MeterState-System-Control FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\SystemControl" "SystemControl.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-System-Control Text "#SK_OFF#"][!SetOption MeterState-System-Control FontColor "255,255,255,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\SystemControl" "SystemControl.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-System-Control]
Meter=String
MeterStyle=TEXT
Text=#SK_SystemControl#
X=180
Y=10r

[MeterCheckBox-System-Control]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-System-Control]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-System-Control "(1-#State-System-Control#)" "#@#\Addons\variables.inc"][!SetVariable State-System-Control "(1-#State-System-Control#)"][!UpdateMeasure MeasureState-System-Control]

[MeterState-System-Control]
Meter=String
X=([MeterCheckBox-System-Control:X]+[MeterCheckBox-System-Control:W])
Y=R
MeterStyle=TEXT
StringAlign=Right
DynamicVariables=1

;	Clipboard

[MeasureState-Clipboard]
Measure=Calc
Formula=#State-Clipboard#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Clipboard Text "#SK_ON#"][!SetOption MeterState-Clipboard FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\Clipboard" "Clipboard.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Clipboard Text "#SK_OFF#"][!SetOption MeterState-Clipboard FontColor "255,255,255,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Clipboard" "Clipboard.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Clipboard]
Meter=String
MeterStyle=TEXT
Text=#SK_Clipboard#
X=180
Y=10r

[MeterCheckBox-Clipboard]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-Clipboard]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Clipboard "(1-#State-Clipboard#)" "#@#\Addons\variables.inc"][!SetVariable State-Clipboard "(1-#State-Clipboard#)"][!UpdateMeasure MeasureState-Clipboard]

[MeterState-Clipboard]
Meter=String
X=([MeterCheckBox-Clipboard:X]+[MeterCheckBox-Clipboard:W])
Y=R
MeterStyle=TEXT
StringAlign=Right
DynamicVariables=1

;	Bottom Buttons

[Skins-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Skins-Previous-Page]
Meter=String
MeterStyle=BUTTONS
Text=< #P_P#
StringAlign=Right
X=585
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Skins" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]