;	Panel > Settings > Statistics

;------------
;	Meters
;------------

;	Description

[Panel-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_CL_Desc#
W=410
X=180
Y=40

;	Settings

[Clock-Timer]
Meter=String
MeterStyle=TEXT
Text=#S_CL_Title#
W=110
X=180
Y=30r

[Clock-Timer-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=24-#S_CL_Hour#
W=60
X=180
Y=25r
Hidden=#CTOUA#
ToolTipTitle=#S_CL_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_CL_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TMA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TMA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTOUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]

[Clock-Timer-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=24-#S_CL_Hour#
FontColor=#PrimaryColor#
W=60
X=0r
Y=0r
Hidden=#CTO#

[Clock-Timer-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=12-#S_CL_Hour#
W=60
X=70r
Y=0r
Hidden=#CTOUA2#
ToolTipTitle=#S_CL_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_CL_ToolTipText2#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TMA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TMA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTOUA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]

[Clock-Timer-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=12-#S_CL_Hour#
FontColor=#PrimaryColor#
W=60
X=0r
Y=0r
Hidden=#CTO2#

;	Parts

[Clock-Parts]
Meter=String
MeterStyle=TEXT
Text=#S_CL_Title2#
W=130
X=180
Y=30r

[Clock-Parts-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_CL_CF_Date_Info#
W=63
X=180
Y=25r
Hidden=#CPOUA#
ToolTipTitle=#S_CL_Title2#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_CL_CF_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CDIA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CDIY "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPOUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]

[Clock-Parts-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_CL_CF_Date_Info#
FontColor=#PrimaryColor#
W=63
X=0r
Y=0r
Hidden=#CPO#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CDIA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CDIY "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPOUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]

[Clock-Parts-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_CL_CF_Year_Info#
W=63
X=70r
Y=0r
Hidden=#CPOUA2#
ToolTipTitle=#S_CL_Title2#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_CL_CF_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CYIA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CYIY "15r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPOUA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]

[Clock-Parts-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_CL_CF_Year_Info#
FontColor=#PrimaryColor#
W=63
X=0r
Y=0r
Hidden=#CPO2#
ToolTipTitle=#S_CL_Title2#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_CL_CF_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CYIA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CYIY "-10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPOUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]


;	Bottom Buttons

[Language--Seperator]
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