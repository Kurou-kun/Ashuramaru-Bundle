;	Panel > Settings > Panel > 2nd page

;------------
;	Meters
;------------

;	Description

[Panel-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_P_Desc#
W=410
X=180
Y=40

;	Notifications

[Notifications]
Meter=String
MeterStyle=TEXT
Text=#S_P_N#
W=150
X=180
Y=30r

[Notifications-Off]
Meter=String
MeterStyle=BUTTONS
Text=#SK_OFF#
X=200r
Y=0r
Hidden=#NFOFF#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications\backgroundtask" "notifybgtask.ini"][!Delay 500][!WriteKeyValue Variables NotificationsContent "notifyon" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"][!WriteKeyValue Variables NFMO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NFOFF "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Notifications-On]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#SK_ON#
X=0r
Y=0r
Hidden=#NFMO#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Panel\Notifications\backgroundtask" "notifybgtask.ini"][!WriteKeyValue Variables NFMO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NFOFF "0" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"][!Refresh #CURRENTCONFIG#]

;	Bottom Buttons

[Panel-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Panel-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Settings#
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Panel-Next-Page-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #P_P#
W=45
X=540
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Panel" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]