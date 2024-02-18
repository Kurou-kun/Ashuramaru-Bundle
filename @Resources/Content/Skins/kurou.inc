;	Ashuramaru Bundle Skins\Kurou Page

;	This is additional file for panel

;	Last edit date: 19.06.2022

;------------
;	Meters
;------------

;	Statistics - Combined

[MeasureState-Statistics-Combined]
Measure=Calc
Formula=#State-Statistics-Combined#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Statistics-Combined Text "#SK_ON#"][!SetOption MeterCheckBox-Statistics-Combined FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Statistics\Combined" "statistics.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Statistics-Combined Text "#SK_OFF#"][!SetOption MeterCheckBox-Statistics-Combined FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Statistics\Combined" "statistics.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Statistics-Combined]
Meter=String
MeterStyle=H2
FontSize=20
Text=Statistics - Combined
X=80
Y=60

[MeterCheckBox-Statistics-Combined]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Statistics-Combined]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Statistics-Combined "(1-#State-Statistics-Combined#)" "#@#\Addons\variables.inc"][!SetVariable State-Statistics-Combined "(1-#State-Statistics-Combined#)"][!UpdateMeasure MeasureState-Statistics-Combined]

[MeterState-Statistics-Combined]
Meter=String
X=([MeterCheckBox-Statistics-Combined:X]+[MeterCheckBox-Statistics-Combined:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	Statistics - Individual

[MeasureState-Statistics-Individual]
Measure=Calc
Formula=#State-Statistics-Individual#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Statistics-Individual Text "#SK_ON#"][!SetOption MeterCheckBox-Statistics-Individual FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Statistics\Individual\Disks" "disks.ini"][!ActivateConfig "#ROOTCONFIG#\Supported\Statistics\Individual\Network" "network.ini"][!ActivateConfig "#ROOTCONFIG#\Supported\Statistics\Individual\System" "system.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Statistics-Individual Text "#SK_OFF#"][!SetOption MeterCheckBox-Statistics-Individual FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Statistics\Individual\Disks" "disks.ini"][!DeactivateConfig "#ROOTCONFIG#\Supported\Statistics\Individual\Network" "network.ini"][!DeactivateConfig "#ROOTCONFIG#\Supported\Statistics\Individual\System" "system.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Statistics-Individual]
Meter=String
MeterStyle=H2
FontSize=20
Text=Statistics - Individual
X=80
Y=10r

[MeterCheckBox-Statistics-Individual]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Statistics-Individual]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Statistics-Individual "(1-#State-Statistics-Individual#)" "#@#\Addons\variables.inc"][!SetVariable State-Statistics-Individual "(1-#State-Statistics-Individual#)"][!UpdateMeasure MeasureState-Statistics-Individual]

[MeterState-Statistics-Individual]
Meter=String
X=([MeterCheckBox-Statistics-Individual:X]+[MeterCheckBox-Statistics-Individual:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	Statistics - Minimal

[MeasureState-Statistics-Minimal]
Measure=Calc
Formula=#State-Statistics-Minimal#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Statistics-Minimal Text "#SK_ON#"][!SetOption MeterCheckBox-Statistics-Minimal FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Statistics\Minimal" "statistics-minimal.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Statistics-Minimal Text "#SK_OFF#"][!SetOption MeterCheckBox-Statistics-Minimal FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Statistics\Minimal" "statistics-minimal.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Statistics-Minimal]
Meter=String
MeterStyle=H2
FontSize=20
Text=Statistics - Minimal
X=80
Y=10r

[MeterCheckBox-Statistics-Minimal]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Statistics-Minimal]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Statistics-Minimal "(1-#State-Statistics-Minimal#)" "#@#\Addons\variables.inc"][!SetVariable State-Statistics-Minimal "(1-#State-Statistics-Minimal#)"][!UpdateMeasure MeasureState-Statistics-Minimal]

[MeterState-Statistics-Minimal]
Meter=String
X=([MeterCheckBox-Statistics-Minimal:X]+[MeterCheckBox-Statistics-Minimal:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	Statistics - Detailed

[MeasureState-Statistics-Detailed]
Measure=Calc
Formula=#State-Statistics-Detailed#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Statistics-Detailed Text "#SK_ON#"][!SetOption MeterCheckBox-Statistics-Detailed FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Statistics\Detailed\Drives" "drives.ini"][!ActivateConfig "#ROOTCONFIG#\Supported\Statistics\Detailed\Graphics" "graphics.ini"][!ActivateConfig "#ROOTCONFIG#\Supported\Statistics\Detailed\Memory" "memory.ini"][!ActivateConfig "#ROOTCONFIG#\Supported\Statistics\Detailed\Network" "network.ini"][!ActivateConfig "#ROOTCONFIG#\Supported\Statistics\Detailed\Processor" "processor.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Statistics-Detailed Text "#SK_OFF#"][!SetOption MeterCheckBox-Statistics-Detailed FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Statistics\Detailed\Drives" "drives.ini"][!DeactivateConfig "#ROOTCONFIG#\Supported\Statistics\Detailed\Graphics" "graphics.ini"][!DeactivateConfig "#ROOTCONFIG#\Supported\Statistics\Detailed\Memory" "memory.ini"][!DeactivateConfig "#ROOTCONFIG#\Supported\Statistics\Detailed\Network" "network.ini"][!DeactivateConfig "#ROOTCONFIG#\Supported\Statistics\Detailed\Processor" "processor.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Statistics-Detailed]
Meter=String
MeterStyle=H2
FontSize=20
Text=Statistics - Detailed
X=80
Y=10r

[MeterCheckBox-Statistics-Detailed]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Statistics-Detailed]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Statistics-Detailed "(1-#State-Statistics-Detailed#)" "#@#\Addons\variables.inc"][!SetVariable State-Statistics-Detailed "(1-#State-Statistics-Detailed#)"][!UpdateMeasure MeasureState-Statistics-Detailed]

[MeterState-Statistics-Detailed]
Meter=String
X=([MeterCheckBox-Statistics-Detailed:X]+[MeterCheckBox-Statistics-Detailed:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1


;	Processes - Combined

[MeasureState-Processes-Combined]
Measure=Calc
Formula=#State-Processes-Combined#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Processes-Combined Text "#SK_ON#"][!SetOption MeterCheckBox-Processes-Combined FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Processes\Combined" "processes.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Processes-Combined Text "#SK_OFF#"][!SetOption MeterCheckBox-Processes-Combined FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Processes\Combined" "processes.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Processes-Combined]
Meter=String
MeterStyle=H2
FontSize=20
Text=Processes - Combined
X=80
Y=10r

[MeterCheckBox-Processes-Combined]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Processes-Combined]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Processes-Combined "(1-#State-Processes-Combined#)" "#@#\Addons\variables.inc"][!SetVariable State-Processes-Combined "(1-#State-Processes-Combined#)"][!UpdateMeasure MeasureState-Processes-Combined]

[MeterState-Processes-Combined]
Meter=String
X=([MeterCheckBox-Processes-Combined:X]+[MeterCheckBox-Processes-Combined:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	Processes - Individual

[MeasureState-Processes-Individual]
Measure=Calc
Formula=#State-Processes-Individual#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Processes-Individual Text "#SK_ON#"][!SetOption MeterCheckBox-Processes-Individual FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Processes\Individual\CPU" "cpu-top.ini"][!ActivateConfig "#ROOTCONFIG#\Supported\Processes\Individual\GPU" "gpu-top.ini"][!ActivateConfig "#ROOTCONFIG#\Supported\Processes\Individual\IO" "io-top.ini"][!ActivateConfig "#ROOTCONFIG#\Supported\Processes\Individual\RAM" "ram-top.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Processes-Individual Text "#SK_OFF#"][!SetOption MeterCheckBox-Processes-Individual FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Processes\Individual\CPU" "cpu-top.ini"][!DeactivateConfig "#ROOTCONFIG#\Supported\Processes\Individual\GPU" "gpu-top.ini"][!DeactivateConfig "#ROOTCONFIG#\Supported\Processes\Individual\IO" "io-top.ini"][!DeactivateConfig "#ROOTCONFIG#\Supported\Processes\Individual\RAM" "ram-top.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Processes-Individual]
Meter=String
MeterStyle=H2
FontSize=20
Text=Processes - Individual
X=80
Y=10r

[MeterCheckBox-Processes-Individual]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Processes-Individual]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Processes-Individual "(1-#State-Processes-Individual#)" "#@#\Addons\variables.inc"][!SetVariable State-Processes-Individual "(1-#State-Processes-Individual#)"][!UpdateMeasure MeasureState-Processes-Individual]

[MeterState-Processes-Individual]
Meter=String
X=([MeterCheckBox-Processes-Individual:X]+[MeterCheckBox-Processes-Individual:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	Elegant Clock

[MeasureState-Elegant-Clock]
Measure=Calc
Formula=#State-Elegant-Clock#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Elegant-Clock Text "#SK_ON#"][!SetOption MeterCheckBox-Elegant-Clock FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Clock" "clock.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Elegant-Clock Text "#SK_OFF#"][!SetOption MeterCheckBox-Elegant-Clock FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Clock" "clock.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Elegant-Clock]
Meter=String
MeterStyle=H2
FontSize=20
Text=Elegant Clock
X=80
Y=10r

[MeterCheckBox-Elegant-Clock]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Elegant-Clock]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Elegant-Clock "(1-#State-Elegant-Clock#)" "#@#\Addons\variables.inc"][!SetVariable State-Elegant-Clock "(1-#State-Elegant-Clock#)"][!UpdateMeasure MeasureState-Elegant-Clock]

[MeterState-Elegant-Clock]
Meter=String
X=([MeterCheckBox-Elegant-Clock:X]+[MeterCheckBox-Elegant-Clock:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	Battery

[MeasureState-Battery]
Measure=Calc
Formula=#State-Battery#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Battery Text "#SK_ON#"][!SetOption MeterCheckBox-Battery FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Battery" "battery.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Battery Text "#SK_OFF#"][!SetOption MeterCheckBox-Battery FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Battery" "battery.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Battery]
Meter=String
MeterStyle=H2
FontSize=20
Text=Battery
X=80
Y=10r

[MeterCheckBox-Battery]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Battery]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Battery "(1-#State-Battery#)" "#@#\Addons\variables.inc"][!SetVariable State-Battery "(1-#State-Battery#)"][!UpdateMeasure MeasureState-Battery]

[MeterState-Battery]
Meter=String
X=([MeterCheckBox-Battery:X]+[MeterCheckBox-Battery:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	Hardware Info

[MeasureState-Hardware-Info]
Measure=Calc
Formula=#State-Hardware-Info#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Hardware-Info Text "#SK_ON#"][!SetOption MeterCheckBox-Hardware-Info FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Statistics" "hardware-info.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Hardware-Info Text "#SK_OFF#"][!SetOption MeterCheckBox-Hardware-Info FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Statistics" "hardware-info.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Hardware-Info]
Meter=String
MeterStyle=H2
FontSize=20
Text=Hardware Info
X=80
Y=10r

[MeterCheckBox-Hardware-Info]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Hardware-Info]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Hardware-Info "(1-#State-Hardware-Info#)" "#@#\Addons\variables.inc"][!SetVariable State-Hardware-Info "(1-#State-Hardware-Info#)"][!UpdateMeasure MeasureState-Hardware-Info]

[MeterState-Hardware-Info]
Meter=String
X=([MeterCheckBox-Hardware-Info:X]+[MeterCheckBox-Hardware-Info:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	Dock

[MeasureState-Dock]
Measure=Calc
Formula=#State-Dock#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-Dock Text "#SK_ON#"][!SetOption MeterCheckBox-Dock FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\Dock" "Dock.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-Dock Text "#SK_OFF#"][!SetOption MeterCheckBox-Dock FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\Dock" "Dock.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-Dock]
Meter=String
MeterStyle=H2
FontSize=20
Text=Dock
X=80
Y=10r

[MeterCheckBox-Dock]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-Dock]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-Dock "(1-#State-Dock#)" "#@#\Addons\variables.inc"][!SetVariable State-Dock "(1-#State-Dock#)"][!UpdateMeasure MeasureState-Dock]

[MeterState-Dock]
Meter=String
X=([MeterCheckBox-Dock:X]+[MeterCheckBox-Dock:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1

;	System Control

[MeasureState-System-Control]
Measure=Calc
Formula=#State-System-Control#
DynamicVariables=1
IfEqualValue=0
IfEqualAction=[!SetOption MeterCheckBox-System-Control Text "#SK_ON#"][!SetOption MeterCheckBox-System-Control FontColor "255,0,0"][!ActivateConfig "#ROOTCONFIG#\Supported\SystemControl" "SystemControl.ini"][!UpdateMeter *][!Redraw]
IfAboveValue=0
IfAboveAction=[!SetOption MeterCheckBox-System-Control Text "#SK_OFF#"][!SetOption MeterCheckBox-System-Control FontColor "255,255,255"][!DeactivateConfig "#ROOTCONFIG#\Supported\SystemControl" "SystemControl.ini"][!UpdateMeter *][!Redraw]

[MeterToggle-System-Control]
Meter=String
MeterStyle=H2
FontSize=20
Text=System Control
X=80
Y=10r

[MeterCheckBox-System-Control]
Meter=String
X=550
Y=0r
W=60
StringAlign=Center
MeterStyle=BUTTONS
FontSize=20
Text=[MeasureState-System-Control]
FontColor=255,255,255
DynamicVariables=1
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables State-System-Control "(1-#State-System-Control#)" "#@#\Addons\variables.inc"][!SetVariable State-System-Control "(1-#State-System-Control#)"][!UpdateMeasure MeasureState-System-Control]

[MeterState-System-Control]
Meter=String
X=([MeterCheckBox-System-Control:X]+[MeterCheckBox-System-Control:W])
Y=R
MeterStyle=H2
FontSize=20
StringAlign=Right
DynamicVariables=1