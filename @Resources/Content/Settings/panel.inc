;	Ashuramaru Bundle Settings\Panel Page

;	This is additional file for panel

;	Last edit date: 20.06.2022

;------------
;	Meters
;------------

;	Language

[Settings-Language]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Panel_Language#
X=70
Y=60
W=150

[Settings-Language-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=English
X=0r
Y=40r
Hidden=#LOUA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables MainLanguage "EN" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Date-Format "en-US" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LOUA2 "0" "#@#\Addons\variables.inc"]#Refreshes#

[Settings-Language-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=English
X=0r
Y=0r
Hidden=#LO#

[Settings-Language-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Polish
X=110r
Y=0r
Hidden=#LOUA2#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables MainLanguage "PL" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Date-Format "pl-PL" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LOUA "0" "#@#\Addons\variables.inc"]#Refreshes#

[Settings-Language-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=Polish
X=0r
Y=0r
Hidden=#LO2#

;	Quality

[Settings-Quality]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Panel_Quality#
W=230
X=70
Y=50r

[Settings-Quality-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Panel_Quality_Low#
X=0r
Y=40r
W=60
Hidden=#QOUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables QOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables AntiAliasingPM "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringEffectPM "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringStylePM "Normal" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerSmoothing "Flat" "#@#\Addons\variables.inc"]#Refreshes#
[Settings-Quality-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Panel_Quality_Low#
FontColor=255,0,0
X=0r
Y=0r
W=60
Hidden=#QOA#

[Settings-Quality-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Panel_Quality_Medium#
X=80r
Y=0r
W=110
Hidden=#QOUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables QOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables AntiAliasingPM "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringEffectPM "Shadow" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringStylePM "Bold" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerSmoothing "Linear" "#@#\Addons\variables.inc"]#Refreshes#

[Settings-Quality-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Panel_Quality_Medium#
FontColor=255,0,0
X=0r
Y=0r
W=110
Hidden=#QOA2#

[Settings-Quality-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Panel_Quality_High#
X=130r
Y=0r
W=65
Hidden=#QOUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables QOUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables AntiAliasingPM "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringEffectPM "Shadow" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringStylePM "Bold" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerSmoothing "Exponential" "#@#\Addons\variables.inc"]#Refreshes#

[Settings-Quality-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Panel_Quality_High#
FontColor=255,0,0
X=0r
Y=0r
W=65
Hidden=#QOA3#

;	Notyfications

[Settings-Notyfications]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Panel_Notyfications#
X=70
Y=50r
W=220

[Settings-Notyfications-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=270r
Y=0r
Hidden=#NFOFF#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables BackgroundNotyfications "0" "#@#\Addons\variables.inc"][!Delay 500][!WriteKeyValue Variables NotificationsContent "notifyon" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"][!WriteKeyValue Variables NFMO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NFOFF "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Settings-Notyfications-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#NFMO#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables BackgroundNotyfications "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NFMO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NFOFF "0" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"][!Refresh #CURRENTCONFIG#]

;	Tray Icon

[Settings-Tray-Icon]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Panel_Tray_Icon#
X=70
Y=50r
W=150

[Settings-Tray-Icon-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=200r
Y=0r
Hidden=#TOUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BackgroundTrayIcon "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]#Refreshes#

[Settings-Tray-Icon-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#TO#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BackgroundTrayIcon "1" "#@#\Addons\variables.inc"][Taskkill /IM ashuramaru-tray.exe /F][!Refresh #CURRENTCONFIG#]#Refreshes#
