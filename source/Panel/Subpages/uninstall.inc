;	Panel > Uninstall page

;------------
;	Meters
;------------

[Uninstall-Title]
Meter=String
MeterStyle=H2
Text=#S_U_Title#
W=410
X=200
Y=60

[Uninstall-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_U_Desc#
X=370
Y=40r
StringAlign=Center
ClipString=2
ClipStringW=400

[Uninstall-Prompt]
Meter=String
MeterStyle=BUTTONS
Text=Uninstall Skin
StringAlign=Center
FontSize=20
X=365
Y=100r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"]#Deactivates#[!DeactivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"][!DeactivateConfig "Ashuramaru-Bundle\Panel\Notifications\backgroundtask" "notifybg.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\Popups\Uninstall" "uninstall-warning.ini"]

[Uninstall-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Uninstall-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Settings#
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]