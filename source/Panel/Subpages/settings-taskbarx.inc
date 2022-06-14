;	Panel > Settings > TaskbarX

;------------
;	Meters
;------------

[TaskbarX-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_TX_Desc#
W=410
X=180
Y=40

;	Settings

[TaskbarX-Variation]
Meter=String
MeterStyle=TEXT
Text=#S_TX_Title#
X=180
Y=30r

[TaskbarX-Variation-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_TX_Transparent#
W=80
X=180
Y=25r
Hidden=#TVUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbs "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Variation-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_TX_Transparent#
FontColor=#PrimaryColor#
W=80
X=0r
Y=0r
Hidden=#TV#

[TaskbarX-Variation-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_TX_Blurred#
W=53
X=90r
Y=0r
Hidden=#TVUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbs "2" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Variation-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_TX_Blurred#
W=53
X=0r
Y=0r
Hidden=#TV2#

[TaskbarX-Variation-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=#S_TX_Acrylic#
W=50
X=60r
Y=0r
Hidden=#TVUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbs "3" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Variation-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_TX_Acrylic#
FontColor=#PrimaryColor#
W=50
X=0r
Y=0r
Hidden=#TV3#

[TaskbarX-Variation-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=#S_TX_Transparent_Gradient#
W=143
X=60r
Y=0r
Hidden=#TVUA4#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbs "4" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Variation-Option-4-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_TX_Transparent_Gradient#
FontColor=#PrimaryColor#
W=143
X=0r
Y=0r
Hidden=#TV4#

[TaskbarX-Variation-Option-5]
Meter=String
MeterStyle=BUTTONS
Text=#S_TX_Opaque#
W=50
X=180
Y=25r
Hidden=#TVUA5#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbs "5" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TV "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Variation-Option-5-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_TX_Opaque#
FontColor=#PrimaryColor#
W=50
X=0r
Y=0r
Hidden=#TV5#

;	Pause

[TaskbarX-Pause]
Meter=String
MeterStyle=TEXT
Text=#S_TX_Title2#
W=205
X=180
Y=30r

[TaskbarX-Pause-Option]
Meter=String
MeterStyle=BUTTONS
Text=#SK_OFF#
X=210r
Y=0r
Hidden=#TPUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables cfsa "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TPUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TP "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Pause-Option-Active]
Meter=String
MeterStyle=BUTTONS
Text=#SK_ON#
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#TP#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables cfsa "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TPUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TP "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

;	Centering

[TaskbarX-Centering]
Meter=String
MeterStyle=TEXT
Text=#S_TX_Title3#
W=205
X=180
Y=30r

[TaskbarX-Centering-Option]
Meter=String
MeterStyle=BUTTONS
Text=#SK_OFF#
X=210r
Y=0r
Hidden=#TCUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables cso "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TCUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TC "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Centering-Option-Active]
Meter=String
MeterStyle=BUTTONS
Text=#SK_ON#
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#TC#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables cso "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TCUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TC "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

;	Tray-Icon

[TaskbarX-Tray-Icon]
Meter=String
MeterStyle=TEXT
Text=#S_TX_Title4#
W=205
X=180
Y=30r

[TaskbarX-Tray-Icon-Option]
Meter=String
MeterStyle=BUTTONS
Text=#SK_OFF#
X=210r
Y=0r
Hidden=#TTIUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables sti "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTI "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTIUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Tray-Icon-Option-Active]
Meter=String
MeterStyle=BUTTONS
Text=#SK_ON#
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#TTI#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables sti "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTI "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TTIUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

;	Segments

[TaskbarX-Segments]
Meter=String
MeterStyle=TEXT
Text=#S_TX_Title5#
W=205
X=180
Y=30r

[TaskbarX-Segments-Option]
Meter=String
MeterStyle=BUTTONS
Text=#SK_OFF#
X=210r
Y=0r
Hidden=#TSUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbsg "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TS "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TSUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Segments-Option-Active]
Meter=String
MeterStyle=BUTTONS
Text=#SK_ON#
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#TS#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables tbsg "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TS "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TSUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

;	Color Gradient

[TaskbarX-Gradient]
Meter=String
MeterStyle=TEXT
Text=#S_TX_Title7#
W=205
X=180
Y=30r

[TaskbarX-Gradient-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=0%
X=180
Y=25r
Hidden=#TXGUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables color "0;0;0;0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Gradient-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=0%
X=0r
Y=0r
Hidden=#TXG#

[TaskbarX-Gradient-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=25%
X=50r
Y=0r
Hidden=#TXGUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables color "0;0;0;20" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Gradient-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=25%
X=0r
Y=0r
Hidden=#TXG2#

[TaskbarX-Gradient-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=50%
X=50r
Y=0r
Hidden=#TXGUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables color "0;0;0;30" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Gradient-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=50%
X=0r
Y=0r
Hidden=#TXG3#

[TaskbarX-Gradient-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=75%
X=50r
Y=0r
Hidden=#TXGUA4#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables color "0;0;0;40" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Gradient-Option-4-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=75%
X=0r
Y=0r
Hidden=#TXG4#

[TaskbarX-Gradient-Option-5]
Meter=String
MeterStyle=BUTTONS
Text=100%
X=50r
Y=0r
Hidden=#TXGUA5#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables color "0;0;0;50" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXGUA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TXG5 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Gradient-Option-5-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=100%
X=0r
Y=0r
Hidden=#TXG5#

;	Bottom Buttons

[TaskbarX-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[TaskbarX-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Settings#
W=70
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive2 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive3 ">" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive4 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive5 "" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[TaskbarX-Next-Page-Button]
Meter=String
MeterStyle=BUTTONS
Text=#P_P# >
W=45
X=540
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-TaskbarX2" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]