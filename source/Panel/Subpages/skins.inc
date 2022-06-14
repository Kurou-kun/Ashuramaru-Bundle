;	Panel > Skins page

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

;	VectorCopy

[Name-VectorCopy]
Meter=String
MeterStyle=TEXT
Text=VectorCopy
X=180
Y=30r

[Button-VectorCopy]
Meter=String
MeterStyle=BUTTONS
FontSize=12
Text=#SK_View#
FontColor=#SeptenaryColor#
X=400
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Visualizer" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[MeterState-VectorCopy]
Meter=String
MeterStyle=TEXT
StringAlign=Right
X=([Name-VectorCopy:X]+[Button-VectorCopy:W])
Y=R

;	Statistics

[Name-Statistics]
Meter=String
MeterStyle=TEXT
Text=#SK_Statistics#
W=150
X=180
Y=10r

[Button-Statistics]
Meter=String
MeterStyle=BUTTONS
FontSize=12
Text=#SK_View#
FontColor=#SeptenaryColor#
X=400
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Statistics" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[MeterState-Statistics]
Meter=String
MeterStyle=TEXT
StringAlign=Right
X=([Name-Statistics:X]+[Button-Statistics:W])
Y=R

;	Processes

[Name-Processes]
Meter=String
MeterStyle=TEXT
Text=#SK_Processes#
W=150
X=180
Y=10r

[Button-Processes]
Meter=String
MeterStyle=BUTTONS
FontSize=12
Text=#SK_View#
FontColor=#SeptenaryColor#
X=400
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Processes" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Translucent Taskbar

[MeasureState-Taskbar]
Measure=Calc
Formula=#State-Taskbar#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Taskbar Text "#SK_ON#"][!SetOption MeterState-Taskbar FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\Taskbar" "taskbar.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Taskbar Text "#SK_OFF#"][!SetOption MeterState-Taskbar FontColor "255,255,255,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Taskbar" "taskbar.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Taskbar]
Meter=String
MeterStyle=TEXT
Text=Translucent Taskbar
X=180
Y=30r

[MeterCheckBox-Taskbar]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-Taskbar]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Taskbar "(1-#State-Taskbar#)" "#@#\Addons\variables.inc"][!SetVariable State-Taskbar "(1-#State-Taskbar#)"][!UpdateMeasure MeasureState-Taskbar]

[MeterState-Taskbar]
Meter=String
X=([MeterCheckBox-Taskbar:X]+[MeterCheckBox-Taskbar:W])
Y=R
MeterStyle=TEXT
StringAlign=Right
DynamicVariables=1

;	Clock

[MeasureState-Clock]
Measure=Calc
Formula=#State-Clock#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Clock Text "#SK_ON#"][!SetOption MeterState-Clock FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\Clock" "Clock.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Clock Text "#SK_OFF#"][!SetOption MeterState-Clock FontColor "215,252,217,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Clock" "Clock.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Clock]
Meter=String
MeterStyle=TEXT
Text=#SK_Clock#
W=150
X=180
Y=10r

[MeterCheckBox-Clock]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-Clock]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Clock "(1-#State-Clock#)" "#@#\Addons\variables.inc"][!SetVariable State-Clock "(1-#State-Clock#)"][!UpdateMeasure MeasureState-Clock]

[MeterState-Clock]
Meter=String
X=([MeterCheckBox-Clock:X]+[MeterCheckBox-Clock:W])
Y=R
MeterStyle=TEXT
StringAlign=Right
DynamicVariables=1

;	Battery

[MeasureState-Battery]
Measure=Calc
Formula=#State-Battery#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Battery Text "#SK_ON#"][!SetOption MeterState-Battery FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\Battery" "Battery.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Battery Text "#SK_OFF#"][!SetOption MeterState-Battery FontColor "215,252,217,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Battery" "Battery.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Battery]
Meter=String
MeterStyle=TEXT
Text=#SK_Battery#
W=150
X=180
Y=10r

[MeterCheckBox-Battery]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-Battery]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Battery "(1-#State-Battery#)" "#@#\Addons\variables.inc"][!SetVariable State-Battery "(1-#State-Battery#)"][!UpdateMeasure MeasureState-Battery]

[MeterState-Battery]
Meter=String
X=([MeterCheckBox-Battery:X]+[MeterCheckBox-Battery:W])
Y=R
MeterStyle=TEXT
StringAlign=Right
DynamicVariables=1

;	Recycle Bin

[MeasureState-Recycle-Bin]
Measure=Calc
Formula=#State-Recycle-Bin#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Recycle-Bin Text "#SK_ON#"][!SetOption MeterState-Recycle-Bin FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\Recycle-Bin" "Recycle-Bin.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Recycle-Bin Text "#SK_OFF#"][!SetOption MeterState-Recycle-Bin FontColor "215,252,217,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Recycle-Bin" "Recycle-Bin.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Recycle-Bin]
Meter=String
MeterStyle=TEXT
Text=#SK_Recycle_Bin#
W=150
X=180
Y=10r

[MeterCheckBox-Recycle-Bin]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-Recycle-Bin]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Recycle-Bin "(1-#State-Recycle-Bin#)" "#@#\Addons\variables.inc"][!SetVariable State-Recycle-Bin "(1-#State-Recycle-Bin#)"][!UpdateMeasure MeasureState-Recycle-Bin]

[MeterState-Recycle-Bin]
Meter=String
X=([MeterCheckBox-Recycle-Bin:X]+[MeterCheckBox-Recycle-Bin:W])
Y=R
MeterStyle=TEXT
StringAlign=Right
DynamicVariables=1

;	Hardware Info

[MeasureState-Hardware-Info]
Measure=Calc
Formula=#State-Hardware-Info#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Hardware-Info Text "#SK_ON#"][!SetOption MeterState-Hardware-Info FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\Statistics" "Hardware-Info.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Hardware-Info Text "#SK_OFF#"][!SetOption MeterState-Hardware-Info FontColor "215,252,217,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Statistics" "Hardware-Info.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Hardware-Info]
Meter=String
MeterStyle=TEXT
Text=#SK_Hardware_Info#
W=150
X=180
Y=10r

[MeterCheckBox-Hardware-Info]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-Hardware-Info]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Hardware-Info "(1-#State-Hardware-Info#)" "#@#\Addons\variables.inc"][!SetVariable State-Hardware-Info "(1-#State-Hardware-Info#)"][!UpdateMeasure MeasureState-Hardware-Info]

[MeterState-Hardware-Info]
Meter=String
X=([MeterCheckBox-Hardware-Info:X]+[MeterCheckBox-Hardware-Info:W])
Y=R
MeterStyle=TEXT
StringAlign=Right
DynamicVariables=1

;	Dock

[MeasureState-Dock]
Measure=Calc
Formula=#State-Dock#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Dock Text "#SK_ON#"][!SetOption MeterState-Dock FontColor "200,200,200,255"][!ActivateConfig "Ashuramaru-Bundle\Supported\Dock" "dock.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Dock Text "#SK_OFF#"][!SetOption MeterState-Dock FontColor "215,252,217,255"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Dock" "dock.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Dock]
Meter=String
MeterStyle=TEXT
Text=#SK_Dock#
W=150
X=180
Y=10r

[MeterCheckBox-Dock]
Meter=String
X=400
Y=0r
MeterStyle=BUTTONS
FontSize=12
Text=[MeasureState-Dock]
FontColor=#SeptenaryColor#
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Dock "(1-#State-Dock#)" "#@#\Addons\variables.inc"][!SetVariable State-Dock "(1-#State-Dock#)"0][!UpdateMeasure MeasureState-Dock]

[MeterState-Dock]
Meter=String
X=([MeterCheckBox-Dock:X]+[MeterCheckBox-Dock:W])
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

[Skins-Next-Page]
Meter=String
MeterStyle=BUTTONS
Text=#P_P# >
StringAlign=Right
X=585
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Skins2" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]