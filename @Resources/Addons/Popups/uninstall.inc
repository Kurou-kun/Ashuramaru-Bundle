;	Ashuramaru Bundle Uninstall Popup Page

;	This is additional file for panel

;	Last edit date: 22.06.2022

;------------
;	Meters
;------------

;	Disabled Area

[Uninstall-Disabled-Area]
Meter=Image
SolidColor=0,0,0,200
W=783
H=580
X=8
Y=10
LeftMouseDownAction=NULL
Hidden=#PopUpsUninstall#

;	Background

[Uninstall-Background]
Meter=Image
ImageName=#Background-Image-Blank#
ScaleMargins=13,34,13,13
W=500
H=200
X=((#CURRENTCONFIGWIDTH#/2)+165)
Y=((#CURRENTCONFIGHEIGHT#/2)+165)
Hidden=#PopUpsUninstall#

[Uninstall-Header]
Meter=Image
ImageName=#Background-Image-Header#
W=522
H=50
X=-10r
Y=0r
Hidden=#PopUpsUninstall#

;	Title

[Uninstall-Title]
Meter=String
MeterStyle=H1
FontSize=20
Text=#Panel_Content_Uninstall_Title#
X=((#CURRENTCONFIGWIDTH#/2)+275)
Y=([Uninstall-Background:Y]+3)
Hidden=#PopUpsUninstall#

;	Content

[Uninstall-Content]
Meter=String
MeterStyle=H2
FontSize=17
Text=#Panel_Content_Uninstall_Question#
X=([Uninstall-Background:X]+20)
Y=45r
Hidden=#PopUpsUninstall#

;	Confirm Button

[Uninstall-Confirm]
Meter=String
MeterStyle=BUTTONS
FontSize=30
Text=#Panel_Content_Uninstall_Button#
X=([Uninstall-Background:X]+20)
Y=50r
Hidden=#PopUpsUninstall#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"]["#@#\Apps\uninstaller.bat"]#Deactivates#[!DeactivateConfig #CURRENTCONFIG#]

;	Cancel Button

[Uninstall-Cancel]
Meter=String
MeterStyle=BUTTONS
FontSize=30
Text=#Panel_Content_Cancel#
X=([Uninstall-Confirm:X]+315)
Y=0r
Hidden=#PopUpsUninstall#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables PopUpsUninstall "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]