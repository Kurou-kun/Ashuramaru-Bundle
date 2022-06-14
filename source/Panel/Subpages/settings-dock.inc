;	Panel > Settings > Dock

;------------
;	Measures
;------------

[MeasureInput]
Measure=Plugin
Plugin=InputText
FontFace=Manifestp
FontSize=15
FontColor=255,255,255,255
SolidColor=40,40,40,255
DefaultValue=#S_D_NOT_DEFINED#
H=25
W=410
X=180
Y=345

;	Path to exe

Command1=[!WriteKeyValue Variables Dock-Exe-1 "$UserInput$" "#@#\Addons\variables.inc"]
Command2=[!WriteKeyValue Variables Dock-Exe-2 "$UserInput$" "#@#\Addons\variables.inc"]
Command3=[!WriteKeyValue Variables Dock-Exe-3 "$UserInput$" "#@#\Addons\variables.inc"]
Command4=[!WriteKeyValue Variables Dock-Exe-4 "$UserInput$" "#@#\Addons\variables.inc"]
Command5=[!WriteKeyValue Variables Dock-Exe-5 "$UserInput$" "#@#\Addons\variables.inc"]
Command6=[!WriteKeyValue Variables Dock-Exe-6 "$UserInput$" "#@#\Addons\variables.inc"]

;	Path to icon

Command101=[!WriteKeyValue Variables Dock-Icon-1 "$UserInput$" "#@#\Addons\variables.inc"]
Command102=[!WriteKeyValue Variables Dock-Icon-2 "$UserInput$" "#@#\Addons\variables.inc"]
Command103=[!WriteKeyValue Variables Dock-Icon-3 "$UserInput$" "#@#\Addons\variables.inc"]
Command104=[!WriteKeyValue Variables Dock-Icon-4 "$UserInput$" "#@#\Addons\variables.inc"]
Command105=[!WriteKeyValue Variables Dock-Icon-5 "$UserInput$" "#@#\Addons\variables.inc"]
Command106=[!WriteKeyValue Variables Dock-Icon-6 "$UserInput$" "#@#\Addons\variables.inc"]

;------------
;	Meters
;------------

;	Description

[Dock-Settings-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_D_Desc#
W=410
X=180
Y=40

;	Add Programs

[Dock-Settings-Program-1]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title# #1
ToolTipTitle=#S_D_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_ToolTipText#"
X=180
Y=30r

[Dock-Settings-Program-Action-1]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"]

[Dock-Settings-Program-Path-1]
Meter=String
MeterStyl=LEFT-ALIGN
FontSize=9
FontColor=255,255,255,50
SolidColor=100,100,100,80
Text=#Dock-Exe-1#
W=410
X=180
Y=25r

[Dock-Settings-Program-2]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title# #2
ToolTipTitle=#S_D_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_ToolTipText#"
X=180
Y=20r

[Dock-Settings-Program-Action-2]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 2"]

[Dock-Settings-Program-Path-2]
Meter=String
MeterStyl=LEFT-ALIGN
FontSize=9
FontColor=255,255,255,50
SolidColor=100,100,100,80
Text=#Dock-Exe-2#
W=410
X=180
Y=25r

[Dock-Settings-Program-3]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title# #3
ToolTipTitle=#S_D_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_ToolTipText#"
X=180
Y=20r

[Dock-Settings-Program-Action-3]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 3"]

[Dock-Settings-Program-Path-3]
Meter=String
MeterStyl=LEFT-ALIGN
FontSize=9
FontColor=255,255,255,50
SolidColor=100,100,100,80
Text=#Dock-Exe-3#
W=410
X=180
Y=25r

[Dock-Settings-Program-4]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title# #4
ToolTipTitle=#S_D_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_ToolTipText#"
X=180
Y=20r

[Dock-Settings-Program-Action-4]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 4"]

[Dock-Settings-Program-Path-4]
Meter=String
MeterStyl=LEFT-ALIGN
FontSize=9
FontColor=255,255,255,50
SolidColor=100,100,100,80
Text=#Dock-Exe-4#
W=410
X=180
Y=25r

[Dock-Settings-Program-5]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title# #5
ToolTipTitle=#S_D_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_ToolTipText#"
X=180
Y=20r

[Dock-Settings-Program-Action-5]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 5"]

[Dock-Settings-Program-Path-5]
Meter=String
MeterStyl=LEFT-ALIGN
FontSize=9
FontColor=255,255,255,50
SolidColor=100,100,100,80
Text=#Dock-Exe-5#
W=410
X=180
Y=25r

[Dock-Settings-Program-6]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title# #6
ToolTipTitle=#S_D_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_ToolTipText#"
X=180
Y=20r

[Dock-Settings-Program-Action-6]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 6"]

[Dock-Settings-Program-Path-6]
Meter=String
MeterStyl=LEFT-ALIGN
FontSize=9
FontColor=255,255,255,50
SolidColor=100,100,100,80
Text=#Dock-Exe-6#
W=410
X=180
Y=25r

;	Add Icons

[Dock-Settings-Icon-1]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title2# #1
ToolTipTitle=#S_D_I_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_I_A_ToolTipText2#"
X=380
Y=([Dock-Settings-Program-1:Y]+0)

[Dock-Settings-Icon-Action-1]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 101"]

[Dock-Settings-Icon-2]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title2# #2
ToolTipTitle=#S_D_I_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_I_A_ToolTipText2#"
X=380
Y=([Dock-Settings-Program-Action-2:Y]+0)

[Dock-Settings-Icon-Action-2]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 102"]

[Dock-Settings-Icon-3]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title2# #3
ToolTipTitle=#S_D_I_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_I_A_ToolTipText2#"
X=380
Y=([Dock-Settings-Program-Action-3:Y]+0)

[Dock-Settings-Icon-Action-3]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 103"]

[Dock-Settings-Icon-4]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title2# #4
ToolTipTitle=#S_D_I_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_I_A_ToolTipText2#"
X=380
Y=([Dock-Settings-Program-Action-4:Y]+0)

[Dock-Settings-Icon-Action-4]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 104"]

[Dock-Settings-Icon-5]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title2# #5
ToolTipTitle=#S_D_I_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_I_A_ToolTipText2#"
X=380
Y=([Dock-Settings-Program-Action-5:Y]+0)

[Dock-Settings-Icon-Action-5]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 105"]

[Dock-Settings-Icon-6]
Meter=String
MeterStyle=TEXT
Text=#S_D_Title2# #6
ToolTipTitle=#S_D_I_ToolTipTextTitle#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_D_I_A_ToolTipText2#"
X=380
Y=([Dock-Settings-Program-Action-6:Y]+0)

[Dock-Settings-Icon-Action-6]
Meter=String
MeterStyle=BUTTONS
StringAlign=Right
Text=#S_D_Add#
X=185r
Y=0r
LeftMouseDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 106"]

;	Bottom Buttons

[Dock-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Dock-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=#S_D_Apply#
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!RefreshGroup "Ashuramaru-Bundle Dock" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageName "Settings" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive2 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive3 ">" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive4 "" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Dock"]

[Dock-Settings-Icons-Folder]
Meter=String
MeterStyle=BUTTONS
Text=#S_D_I_Folder#
X=100r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][::{450D8FBA-AD25-11D0-98A8-0800361B1103}\Rainmeter\Skins\Ashuramaru-Bundle\@Resources\Images\Icons\Dock]

[Dock-Settings-Next-Page]
Meter=String
MeterStyle=BUTTONS
Text=#P_P# >
StringAlign=Right
X=585
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-dock2" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]