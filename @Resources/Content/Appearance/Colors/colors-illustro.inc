;	Ashuramaru Bundle Appearance\Colors\Illustro Page

;	This is additional file for panel

;	Last edit date: 19.06.2022

;------------
;	Meters
;------------

;	Primary Color

[Illustro-Color-1]
Meter=String
MeterStyle=H2
FontSize=20
SolidColor=150,150,150,30
Text=Primary Color
W=320
X=80
Y=80
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Chosen "#IPrimaryColor#" "#ROOTCONFIGPATH#\Panel\ColorPicker\colorpicker.ini"][!WriteKeyValue Variables Color-To-Paint "IPrimaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables IPrimaryColor "255,255,255" "#@#\Addons\variables.inc"]#Refreshes#
MouseOverAction=[!SetOption Illustro-Color-Description Text "#IllustroPrimaryColorDescription#"][!UpdateMeter Illustro-Color-Description]
MouseLeaveAction=[!SetOption Illustro-Color-Description Text "#ColorDescription#"]

[Illustro-Color-Showcase-1]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#IPrimaryColor#
X=([Illustro-Color-1:X]+280)
Y=([Illustro-Color-1:Y]-3)
W=40
H=40

[Illustro-Color-Info]
Meter=Image
ImageName=#@#\Images\Icons\info.png
W=30
H=30
X=([Illustro-Color-Showcase-1:X]+50)
Y=([Illustro-Color-Showcase-1:Y]+0)
ToolTipTitle=#Panel_Content_Info_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=2
ToolTipText=#Panel_Content_Appearance_Color_Info#

;	Secondary Color

[Illustro-Color-2]
Meter=String
MeterStyle=H2
FontSize=20
SolidColor=150,150,150,30
Text=Secondary Color
W=320
X=80
Y=50r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Chosen "#ISecondaryColor#" "#ROOTCONFIGPATH#\Panel\ColorPicker\colorpicker.ini"][!WriteKeyValue Variables Color-To-Paint "ISecondaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables ISecondaryColor "255,255,255" "#@#\Addons\variables.inc"]#Refreshes#
MouseOverAction=[!SetOption Illustro-Color-Description Text "#IllustroSecondaryColorDescription#"][!UpdateMeter Illustro-Color-Description]
MouseLeaveAction=[!SetOption Illustro-Color-Description Text "#ColorDescription#"]

[Illustro-Color-Showcase-2]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#ISecondaryColor#
X=([Illustro-Color-2:X]+280)
Y=([Illustro-Color-2:Y]-3)
W=40
H=40

;	Tertiary Color

[Illustro-Color-3]
Meter=String
MeterStyle=H2
FontSize=20
SolidColor=150,150,150,30
Text=Tertiary Color
W=320
X=80
Y=50r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Chosen "#ITertiaryColor#" "#ROOTCONFIGPATH#\Panel\ColorPicker\colorpicker.ini"][!WriteKeyValue Variables Color-To-Paint "ITertiaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables ITertiaryColor "255,255,255" "#@#\Addons\variables.inc"]#Refreshes#
MouseOverAction=[!SetOption Illustro-Color-Description Text "#IllustroTertiaryColorDescription#"][!UpdateMeter Illustro-Color-Description]
MouseLeaveAction=[!SetOption Illustro-Color-Description Text "#ColorDescription#"]

[Illustro-Color-Showcase-3]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#ITertiaryColor#
X=([Illustro-Color-3:X]+280)
Y=([Illustro-Color-3:Y]-3)
W=40
H=40

;	Quaternary Color

[Illustro-Color-4]
Meter=String
MeterStyle=H2
FontSize=20
SolidColor=150,150,150,30
Text=Quaternary Color
W=320
X=80
Y=50r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Chosen "#IQuaternaryColor#" "#ROOTCONFIGPATH#\Panel\ColorPicker\colorpicker.ini"][!WriteKeyValue Variables Color-To-Paint "IQuaternaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables IQuaternaryColor "255,0,0" "#@#\Addons\variables.inc"]#Refreshes#
MouseOverAction=[!SetOption Illustro-Color-Description Text "#IllustroQuaternaryColorDescription#"][!UpdateMeter Illustro-Color-Description]
MouseLeaveAction=[!SetOption Illustro-Color-Description Text "#ColorDescription#"]

[Illustro-Color-Showcase-4]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#IQuaternaryColor#
X=([Illustro-Color-4:X]+280)
Y=([Illustro-Color-4:Y]-3)
W=40
H=40

;	Quinary Color

[Illustro-Color-5]
Meter=String
MeterStyle=H2
FontSize=20
SolidColor=150,150,150,30
Text=Quinary Color
W=320
X=80
Y=50r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Chosen "#IQuinaryColor#" "#ROOTCONFIGPATH#\Panel\ColorPicker\colorpicker.ini"][!WriteKeyValue Variables Color-To-Paint "IQuinaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables IQuinaryColor "255,0,0" "#@#\Addons\variables.inc"]#Refreshes#
MouseOverAction=[!SetOption Illustro-Color-Description Text "#IllustroQuinaryColorDescription#"][!UpdateMeter Illustro-Color-Description]
MouseLeaveAction=[!SetOption Illustro-Color-Description Text "#ColorDescription#"]

[Illustro-Color-Showcase-5]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#IQuinaryColor#
X=([Illustro-Color-5:X]+280)
Y=([Illustro-Color-5:Y]-3)
W=40
H=40

;	Senary Color

[Illustro-Color-6]
Meter=String
MeterStyle=H2
FontSize=20
SolidColor=150,150,150,30
Text=Senary Color
W=320
X=80
Y=50r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Chosen "#ISenaryColor#" "#ROOTCONFIGPATH#\Panel\ColorPicker\colorpicker.ini"][!WriteKeyValue Variables Color-To-Paint "ISenaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables ISenaryColor "255,0,0" "#@#\Addons\variables.inc"]#Refreshes#
MouseOverAction=[!SetOption Illustro-Color-Description Text "#IllustroSenaryColorDescription#"][!UpdateMeter Illustro-Color-Description]
MouseLeaveAction=[!SetOption Illustro-Color-Description Text "#ColorDescription#"]

[Illustro-Color-Showcase-6]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#ISenaryColor#
X=([Illustro-Color-6:X]+280)
Y=([Illustro-Color-6:Y]-3)
W=40
H=40

;	Septenary Color

[Illustro-Color-7]
Meter=String
MeterStyle=H2
FontSize=20
SolidColor=150,150,150,30
Text=Septenary Color
W=320
X=80
Y=50r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Chosen "#ISeptenaryColor#" "#ROOTCONFIGPATH#\Panel\ColorPicker\colorpicker.ini"][!WriteKeyValue Variables Color-To-Paint "ISeptenaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables ISeptenaryColor "255,255,255" "#@#\Addons\variables.inc"]#Refreshes#
MouseOverAction=[!SetOption Illustro-Color-Description Text "#IllustroSeptenaryColorDescription#"][!UpdateMeter Illustro-Color-Description]
MouseLeaveAction=[!SetOption Illustro-Color-Description Text "#IllustroDescription#"]

[Illustro-Color-Showcase-7]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#ISeptenaryColor#
X=([Illustro-Color-7:X]+280)
Y=([Illustro-Color-7:Y]-3)
W=40
H=40

[Illustro-Color-Description]
Meter=String
MeterStyle=H3
FontSize=13
FontColor=200,200,200,100
Text=#ColorDescription#
X=70
Y=560