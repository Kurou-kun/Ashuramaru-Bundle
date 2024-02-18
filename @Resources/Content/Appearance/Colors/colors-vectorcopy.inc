;	Ashuramaru Bundle Appearance\Colors\VectorCopy Page

;	This is additional file for panel

;	Last edit date: 19.06.2022

;------------
;	Meters
;------------

;	Primary Color

[VectorCopy-Color-1]
Meter=String
MeterStyle=H2
FontSize=20
SolidColor=150,150,150,30
Text=Primary Color
W=320
X=80
Y=80
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "VCPrimaryColor" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen "#VCPrimaryColor#" "#ROOTCONFIGPATH#\Panel\ColorPicker\colorpicker.ini"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VCPrimaryColor "255,0,0" "#@#\Addons\variables.inc"]#Refreshes#
MouseOverAction=[!SetOption VectorCopy-Color-Description Text "#VectorCopyPrimaryColorDescription#"][!UpdateMeter VectorCopy-Color-Description]
MouseLeaveAction=[!SetOption VectorCopy-Color-Description Text "#ColorDescription#"]

[VectorCopy-Color-Showcase-1]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#VCPrimaryColor#
X=([VectorCopy-Color-1:X]+280)
Y=([VectorCopy-Color-1:Y]-3)
W=40
H=40

[VectorCopy-Color-Info]
Meter=Image
ImageName=#@#\Images\Icons\info.png
W=30
H=30
X=([VectorCopy-Color-Showcase-1:X]+50)
Y=([VectorCopy-Color-Showcase-1:Y]+0)
ToolTipTitle=#Panel_Content_Info_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=2
ToolTipText=#Panel_Content_Appearance_Color_Info#

[VectorCopy-Color-Description]
Meter=String
MeterStyle=H3
FontSize=13
FontColor=200,200,200,100
Text=#ColorDescription#
X=70
Y=560