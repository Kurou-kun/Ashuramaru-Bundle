;	Panel > Settings > Processes

;------------
;	Meters
;------------

;	Description

[Processes-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_PR_Desc#
W=410
X=180
Y=40

[Processes-Variation]
Meter=String
MeterStyle=TEXT
Text=#S_PR_Title#
X=180
Y=30r

[Processes-Variation-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_PR_Combined#
X=180
Y=25r
Hidden=#PVOUA#
ToolTipTitle=#S_PR_Combined#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_PR_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\Processes\Combined" "Processes.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\CPU" "cpu-top.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\GPU" "gpu-top.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\RAM" "ram-top.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\IO" "io-top.ini"][!WriteKeyValue Variables PVO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PVOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PVO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PVOUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Top-Processes"]

[Processes-Variation-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_PR_Combined#
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#PVO#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Processes\Combined" "Processes.ini"][!WriteKeyValue Variables PVO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PVOUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Top-Processes"]

[Statistics-Variation-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_PR_Individual#
X=80r
Y=0r
Hidden=#PVOUA2#
ToolTipTitle=#S_PR_Individual#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_PR_ToolTipText2#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Processes\Combined" "Processes.ini"][!ActivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\GPU" "gpu-top.ini"][!ActivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\CPU" "cpu-top.ini"][!ActivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\RAM" "ram-top.ini"][!ActivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\IO" "io-top.ini"][!WriteKeyValue Variables PVO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PVOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PVO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PVOUA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Top-Processes"]

[Statistics-Variation-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_PR_Individual#
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#PVO2#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\CPU" "cpu-top.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\GPU" "gpu-top.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\RAM" "ram-top.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\Processes\Individual\IO" "io-top.ini"][!WriteKeyValue Variables PVO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PVOUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Top-Processes"]

;	Graphs

[Processes-Graphs]
Meter=String
MeterStyle=TEXT
Text=#S_PR_Graph#
X=180
Y=30r

[Processes-Graphs-Option]
Meter=String
MeterStyle=BUTTONS
Text=#SK_OFF#
X=150r
Y=0r
Hidden=#PGOUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables HideGraph "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GraphY "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PGOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PGOA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Top-Processes"]

[Processes-Graphs-Option-Active]
Meter=String
MeterStyle=BUTTONS
Text=#SK_ON#
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#PGOA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables HideGraph "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GraphY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PGOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PGOA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Top-Processes"]

;	Bottom Buttons

[Processes-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Processes-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Settings#
W=70
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive2 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive3 ">" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive4 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive5 "" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Processes-Back-Button-Skins]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Skins#
W=50
X=75r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Skins" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive2 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive3 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive4 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive5 ">" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]