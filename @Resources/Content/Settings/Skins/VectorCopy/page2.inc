;	Ashuramaru Bundle Settings\Skins\VectorCopy 2nd Page

;	This is additional file for panel

;	Last edit date: 20.06.2022

;------------
;	Measures
;------------

[Settings-VectorCopy-Height-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-VectorCopy-Height-1:X]+0)
Y=([Settings-VectorCopy-Height-1:Y]+0)
W=75
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=4
InputNumber=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables VisualizerHeight "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

[Settings-VectorCopy-Width-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-VectorCopy-Width-1:X]+0)
Y=([Settings-VectorCopy-Width-1:Y]+0)
W=75
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=4
InputNumber=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables VisualizerWidth "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

[Settings-VectorCopy-Bar-Width-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-VectorCopy-Bar-Width-1:X]+0)
Y=([Settings-VectorCopy-Bar-Width-1:Y]+0)
W=75
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=4
InputNumber=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables VisualizerBarWidth "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

[Settings-VectorCopy-Bar-Roundess-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-VectorCopy-Bar-Roundess-1:X]+0)
Y=([Settings-VectorCopy-Bar-Roundess-1:Y]+0)
W=75
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=4
InputNumber=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables VisualizerBarRoundess "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

[Settings-VectorCopy-Bar-Spacing-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-VectorCopy-Bar-Spacing-1:X]+0)
Y=([Settings-VectorCopy-Bar-Spacing-1:Y]+0)
W=75
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=4
InputNumber=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables VisualizerBarSpacing "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

[Settings-VectorCopy-Angle-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-VectorCopy-Angle-1:X]+0)
Y=([Settings-VectorCopy-Angle-1:Y]+0)
W=75
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=4
InputNumber=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables VisualizerAngle "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

;------------
;	Meters
;------------

;	Visualizer Bar Width

[Settings-VectorCopy-Bar-Width]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Bar_Width#
W=310
X=70
Y=60

[Settings-VectorCopy-Info]
Meter=Image
ImageName=#@#\Images\Icons\info.png
W=30
H=30
X=([Settings-VectorCopy-Bar-Width:X]+320)
Y=([Settings-VectorCopy-Bar-Width:Y]+0)
ToolTipTitle=#Panel_Content_Info_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=2
ToolTipText=#Panel_Content_Info#

[Settings-VectorCopy-Bar-Width-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#VisualizerBarWidth#
X=70
Y=40r
W=70
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-VectorCopy-Bar-Width-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerBarWidth "16.7" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

[Settings-VectorCopy-Bar-Width-Prefix-1]
Meter=String
MeterStyle=TEXT
FontSize=20
Text=PX
X=70r
Y=0r

;	Visualizer Bar Spacing

[Settings-VectorCopy-Bar-Spacing]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Bar_Spacing#
W=350
X=70
Y=50r

[Settings-VectorCopy-Bar-Spacing-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#VisualizerBarSpacing#
X=70
Y=40r
W=70
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-VectorCopy-Bar-Spacing-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerBarSpacing "10" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

[Settings-VectorCopy-Bar-Spacing-Prefix-1]
Meter=String
MeterStyle=TEXT
FontSize=20
Text=PX
X=70r
Y=0r

;	Visualizer Bar Roundess

[Settings-VectorCopy-Bar-Roundess]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Bar_Roundess#
W=380
X=70
Y=50r

[Settings-VectorCopy-Bar-Roundess-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#VisualizerBarRoundess#
X=70
Y=40r
W=70
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-VectorCopy-Bar-Roundess-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerBarRoundess "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

[Settings-VectorCopy-Bar-Roundess-Prefix-1]
Meter=String
MeterStyle=TEXT
FontSize=20
Text=PX
X=70r
Y=0r

;	Visualizer Height

[Settings-VectorCopy-Height]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Height#
W=300
X=70
Y=50r

[Settings-VectorCopy-Height-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#VisualizerHeight#
X=70
Y=40r
W=70
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-VectorCopy-Height-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerHeight "300" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

[Settings-VectorCopy-Height-Prefix-1]
Meter=String
MeterStyle=TEXT
FontSize=20
Text=PX
X=70r
Y=0r

;	Visualizer Width

[Settings-VectorCopy-Width]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Vector_Width#
W=380
X=70
Y=50r

[Settings-VectorCopy-Width-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#VisualizerWidth#
X=70
Y=40r
W=70
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-VectorCopy-Width-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerWidth "1680" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

[Settings-VectorCopy-Width-Prefix-1]
Meter=String
MeterStyle=TEXT
FontSize=20
Text=PX
X=70r
Y=0r

;	Visualizer Angle

[Settings-VectorCopy-Angle]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Rotation#
W=300
X=70
Y=50r

[Settings-VectorCopy-Angle-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#VisualizerAngle#
X=70
Y=40r
W=70
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-VectorCopy-Angle-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerAngle "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"]

[Settings-VectorCopy-Angle-Prefix-1]
Meter=String
MeterStyle=TEXT
FontSize=20
Text=PX
X=70r
Y=0r

;	Previous Page Area

[Settings-VectorCopy-Previous-Page-Area]
Meter=Image
SolidColor=100,100,100,10
W=50
H=542
X=742
Y=49
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,40][!SetOption Settings-VectorCopy-Previous-Page-Icon ImageTint 200,200,200,60][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-VectorCopy-Previous-Page-Icon]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,10][!SetOption Settings-VectorCopy-Previous-Page-Icon ImageTint 200,200,200,30][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-VectorCopy-Previous-Page-Icon]
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\VectorCopy\page1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Previous-Page-Icon]
Meter=Image
ImageName=#@#\Images\Icons\left-arrow.png
ImageTint=200,200,200,30
W=30
H=30
X=10r
Y=230r