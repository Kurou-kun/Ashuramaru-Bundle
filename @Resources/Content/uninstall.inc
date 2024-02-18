;	Ashuramaru Bundle Uninstall Page

;	This is additional file for panel

;	Last edit date: 22.06.2022

;------------
;	Meters
;------------

;	Uninstall Button

[Uninstall-Button]
Meter=Image
ImageName=#@#\Images\Icons\uninstall.png
SolidColor=100,100,100,100
W=450
H=450
X=((#CURRENTCONFIGWIDTH#/2)+190)
Y=((#CURRENTCONFIGHEIGHT#/2)+90)
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables PopUpsUninstall "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]