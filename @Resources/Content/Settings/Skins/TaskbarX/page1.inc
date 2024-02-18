;	Ashuramaru Bundle Settings\Skins\TaskbarX Page

;	This is additional file for panel

;	Last edit date: 20.06.2022

;------------
;	Measures
;------------

[Settings-TaskbarX-R-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-TaskbarX-Gradient-1:X]+0)
Y=([Settings-TaskbarX-Gradient-1:Y]+0)
W=75
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=3
DefaultValue=#TaskbarXR#
InputNumber=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables TaskbarXR "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-G-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-TaskbarX-Gradient-2:X]+0)
Y=([Settings-TaskbarX-Gradient-2:Y]+0)
W=75
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=3
DefaultValue=#TaskbarXG#
InputNumber=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables TaskbarXG "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-B-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-TaskbarX-Gradient-3:X]+0)
Y=([Settings-TaskbarX-Gradient-3:Y]+0)
W=75
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=3
DefaultValue=#TaskbarXB#
InputNumber=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables TaskbarXB "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Alpha-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-TaskbarX-Gradient-4:X]+0)
Y=([Settings-TaskbarX-Gradient-4:Y]+0)
W=75
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=3
DefaultValue=#TaskbarXAlpha#
InputNumber=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables TaskbarXAlpha "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Animation-Measure]
Measure=Plugin
Plugin=InputText
X=([Settings-TaskbarX-Animation-1:X]+0)
Y=([Settings-TaskbarX-Animation-1:Y]+0)
W=300
H=35
FontSize=20
FontColor=255,255,255,255
SolidColor=70,70,70,255
AntiAlias=1
InputLimit=3
DefaultValue=#TaskbarXAnimation#
InputNumber=1
FocusDismiss=0
Command1=[!WriteKeyValue Variables TaskbarXAnimation "$UserInput$" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

;------------
;	Meters
;------------

;	TaskbarX Type

[Settings-TaskbarX-Type]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Type#
W=230
X=70
Y=60

[Settings-TaskbarX-Type-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Type_Transparent#
W=150
X=70
Y=40r
Hidden=#TVUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbs "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Type-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_TaskbarX_Type_Transparent#
W=150
X=0r
Y=0r
Hidden=#TV#

[Settings-TaskbarX-Type-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Type_Blured#
W=90
X=175r
Y=0r
Hidden=#TVUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbs "2" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Type-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_TaskbarX_Type_Blured#
W=90
X=0r
Y=0r
Hidden=#TV2#

[Settings-TaskbarX-Type-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Type_Acrylic#
W=90
X=105r
Y=0r
Hidden=#TVUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbs "3" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Type-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_TaskbarX_Type_Acrylic#
W=90
X=0r
Y=0r
Hidden=#TV3#

[Settings-TaskbarX-Type-4]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Type_Gradient#
W=110
X=110r
Y=0r
Hidden=#TVUA4#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbs "4" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Type-4-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_TaskbarX_Type_Gradient#
W=110
X=0r
Y=0r
Hidden=#TV4#

[Settings-TaskbarX-Type-5]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Type_Solid#
W=70
X=135r
Y=0r
Hidden=#TVUA5#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbs "5" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Type-5-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_TaskbarX_Type_Solid#
W=70
X=0r
Y=0r
Hidden=#TV5#

;	TaskbarX Centerd


[Settings-TaskbarX-Centered]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Centered#
X=70
Y=50r
W=290

[Settings-TaskbarX-Centered-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=350r
Y=0r
Hidden=#TCUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables cso "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TCUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TC "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Centered-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#TC#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables cso "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TCUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TC "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

;	TaskbarX Tray Icon

[Settings-TaskbarX-Tray-Icon]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Tray_Icon#
X=70
Y=50r
W=290

[Settings-TaskbarX-Tray-Icon-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=350r
Y=0r
Hidden=#TTIUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables sti "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTI "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTIUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Tray-Icon-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#TTI#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables sti "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTI "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTIUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

;	TaskbarX Segments

[Settings-TaskbarX-Segments]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Segments#
X=70
Y=50r
W=295

[Settings-TaskbarX-Segments-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=350r
Y=0r
Hidden=#TSUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbsg "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TS "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TSUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Segments-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#TS#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbsg "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TS "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TSUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

;	TaskbarX Pause

[Settings-TaskbarX-Pause]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Pause#
X=70
Y=50r
W=235

[Settings-TaskbarX-Pause-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=350r
Y=0r
Hidden=#TPUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables cfsa "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TPUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TP "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Pause-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#TP#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables cfsa "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TPUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TP "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

;	TaskbarX Gradient

[Settings-TaskbarX-Gradient]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Gradient#
W=280
X=70
Y=50r

[Settings-TaskbarX-Info]
Meter=Image
ImageName=#@#\Images\Icons\info.png
W=30
H=30
X=([Settings-TaskbarX-Gradient:X]+320)
Y=([Settings-TaskbarX-Gradient:Y]+0)
ToolTipTitle=#Panel_Content_Info_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=2
ToolTipText=#Panel_Content_Info#

[Settings-TaskbarX-Gradient-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
Text=#TaskbarXR# :
X=110
Y=40r
W=75
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-TaskbarX-R-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables TaskbarXR "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Gradient-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
Text=#TaskbarXG# :
X=80r
Y=0r
W=75
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-TaskbarX-G-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables TaskbarXG "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Gradient-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
Text=#TaskbarXB# :
X=80r
Y=0r
W=75
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-TaskbarX-B-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables TaskbarXB "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[Settings-TaskbarX-Gradient-4]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
Text=#TaskbarXAlpha# :
X=80r
Y=0r
W=75
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-TaskbarX-Alpha-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables TaskbarXAlpha "40" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

;	TaskbarX Animation

[Settings-TaskbarX-Animation]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_TaskbarX_Animation#
W=300
X=70
Y=50r

[Settings-TaskbarX-Animation-Info]
Meter=Image
ImageName=#@#\Images\Icons\info.png
W=30
H=30
X=([Settings-TaskbarX-Animation:X]+320)
Y=([Settings-TaskbarX-Animation:Y]+0)
ToolTipTitle=#Panel_Content_Settings_Skins_TaskbarX_Animation_List#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=2
ToolTipText=#CRLF#none, linear, expoeaseout, expoeasein, expoeaseinout, expoeaseoutin, circeaseout, circeasein,#CRLF#circeaseinout, circeaseoutin, quadeaseout, quadeasein, quadeaseinout, quadeaseoutin,#CRLF#sineeaseout, sineeasein, sineeaseinout, sineeaseoutin, cubiceaseout, cubiceasein, cubiceaseinout,#CRLF#cubiceaseoutin, backeaseout, backeasein, backeaseinout, bounceeaseout, bounceeasein, bounceeaseinout,#CRLF#bounceeaseoutin, elasticeaseout, elasticeasein, elasticeaseinout, elasticeaseoutin, quinteaseout, quinteasein,#CRLF#quinteaseinout, quinteaseoutin.

[Settings-TaskbarX-Animation-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
Text=#TaskbarXAnimation#
X=220
Y=40r
W=300
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!CommandMeasure Settings-TaskbarX-Animation-Measure "ExecuteBatch 1"]
RightMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables TaskbarXAnimation "backeaseout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]