[Rainmeter]
Update=50
Group=Ashuramaru-Bundle-Visualizers Group
RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=Calibrate Fast (5s)
ContextAction=[!CommandMeasure Processor calibrate(5)][!SetOption Rainmeter ContextTitle "Cancel Calibration"][!SetOption Rainmeter ContextAction "[!CommandMeasure Processor calibrate(0)]"][!SetOption Rainmeter ContextTitle2 ""][!SkinCustomMenu]
ContextTitle2=Calibrate Accurate (30s)
ContextAction2=[!CommandMeasure Processor calibrate(30)][!SetOption Rainmeter ContextTitle "Cancel Calibration"][!SetOption Rainmeter ContextAction "[!CommandMeasure Processor calibrate(0)]"][!SetOption Rainmeter ContextTitle2 ""][!SkinCustomMenu]
ContextTitle3=Calibrate Manual
ContextAction3=[!CommandMeasure Processor calibrate(-1)][!SetOption Rainmeter ContextTitle "Finish Calibration"][!SetOption Rainmeter ContextAction "[!CommandMeasure Processor calibrate(-1)]"][!SetOption Rainmeter ContextTitle2 "Cancel Calibration"][!SetOption Rainmeter ContextAction2 "[!CommandMeasure Processor calibrate(0)]"][!SetOption Rainmeter ContextTitle3 ""][!SkinCustomMenu]
ContextTitle4=---
ContextTitle5=Panel
ContextAction5=[!ActivateConfig "#ROOTCONFIG#\Panel" "panel.ini"][!Redraw]
ContextTitle6=---
ContextTitle7=Rainmeter Settings
ContextAction7=[!SkinMenu]
@IncludeDefaultVariables=#@#\Addons\VectorCopy-Resources\defaultvariables.inc
@IncludeVariables=#CURRENTPATH#variables.inc
@IncludeType=#@#\Addons\VectorCopy-Resources\#Type#.inc
@IncludeParent=#CURRENTPATH#parent.inc
@IncludeBands=#CURRENTPATH#bands.inc

[Update]
Measure=Calc
OnUpdateAction=[!Delay 0][!Update]
UpdateDivider=-1
Disabled=1

[Desktop]
Measure=Plugin
Plugin=Chameleon
Type=Desktop
OnChangeAction=[!UpdateMeasure C1][!UpdateMeasure C2][!UpdateMeasure C3]
ContextAwareColors=0

[C1]
Measure=Plugin
Plugin=Chameleon
Parent=Desktop
Color=#Chameleon#
Format=Dec
UpdateDivider=-1
RegExpSubstitute=1
Substitute="(.*),.*,.*":"\1"
[C2]
Measure=Plugin
Plugin=Chameleon
Parent=Desktop
Color=#Chameleon#
Format=Dec
UpdateDivider=-1
RegExpSubstitute=1
Substitute=".*,(.*),.*":"\1"
[C3]
Measure=Plugin
Plugin=Chameleon
Parent=Desktop
Color=#Chameleon#
Format=Dec
UpdateDivider=-1
RegExpSubstitute=1
Substitute=".*,.*,(.*)":"\1"

[Volume]
Measure=Plugin
Plugin=Win7AudioPlugin
UpdateDivider=-1
Disabled=1

[Processor]
Measure=Script
ScriptFile=#@#\Addons\VectorCopy-Resources\visualizer.lua
Disabled=1
