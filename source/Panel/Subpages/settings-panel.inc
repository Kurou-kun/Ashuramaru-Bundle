;	Panel > Settings > Panel page

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

;	Settings

[Language]
Meter=String
MeterStyle=TEXT
Text=#S_P_Language_Title#
W=110
X=180
Y=30r

[Language-Disclaimer]
Meter=String
MeterStyle=TEXT
FontColor=#PrimaryColor#
FontSize=9
Text=< BETA
X=100r
Y=0r
Hidden=1

[Language-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_L_EN#
W=50
X=180
Y=25r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables MainLanguage "#@#\Addons\Languages\EN.inc" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Date-Format "en-US" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LOUA2 "0" "#@#\Addons\variables.inc"]#Refreshes#
Hidden=#LOUA#

[Language-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_L_EN#
FontColor=#PrimaryColor#
W=50
X=0r
Y=0r
Hidden=#LO#

[Language-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_L_PL#
W=45
X=70r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables MainLanguage "#@#\Addons\Languages\PL.inc" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Date-Format "pl-PL" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables LOUA "0" "#@#\Addons\variables.inc"]#Refreshes#
Hidden=#LOUA2#

[Language-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_L_PL#
FontColor=#PrimaryColor#
W=45
X=0r
Y=0r
Hidden=#LO2#

;	Game Mode

[Game-Mode]
Meter=String
MeterStyle=TEXT
Text=#S_P_Automatic_Game_Mode#
W=185
X=180
Y=30r

[Game-Mode-Off]
Meter=String
MeterStyle=BUTTONS
Text=OFF
X=200r
Y=0r
Hidden=#GMOFF#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Panel\GameMode" "gamemode.ini"][!WriteKeyValue Variables GMO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMOFF "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Game-Mode-On]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=ON
X=0r
Y=0r
Hidden=#GMO#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Panel\GameMode" "gamemode.ini"][!WriteKeyValue Variables GMO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMOFF "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Game-Mode-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=TaskbarX
W=63
X=180
Y=25r
Hidden=#GMO1UA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMTaskbarX "TaskbarX" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO1UA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO1 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=TaskbarX
FontColor=#PrimaryColor#
W=63
X=0r
Y=0r
Hidden=#GMO1#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMTaskbarX "" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Supported\TaskbarX" "TaskbarX.ini"][!WriteKeyValue Variables GMO1UA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO1 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=Taskbar
W=53
X=70r
Y=0r
Hidden=#GMO2UA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMTaskbar "Taskbar" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO2UA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=Taskbar
W=53
X=0r
Y=0r
Hidden=#GMO2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMTaskbar "" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Supported\Taskbar" "Taskbar.ini"][!WriteKeyValue Variables GMO2UA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]


[Game-Mode-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_AGM_Clock#
W=40
X=60r
Y=0r
Hidden=#GMO3UA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMClock "Clock" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO3UA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO3 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_P_AGM_Clock#
W=40
X=0r
Y=0r
Hidden=#GMO3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMClock "" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Supported\Clock" "Clock.ini"][!WriteKeyValue Variables GMO3UA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO3 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_AGM_Battery#
W=53
X=45r
Y=0r
Hidden=#GMO4UA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMBattery "Battery" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO4UA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO4 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-4-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_P_AGM_Battery#
W=53
X=0r
Y=0r
Hidden=#GMO4#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMBattery "" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Supported\Battery" "Battery.ini"][!WriteKeyValue Variables GMO4UA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO4 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-5]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_AGM_Recycle_Bin#
W=80
X=60r
Y=0r
Hidden=#GMO5UA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMRecycleBin "Recycle-Bin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO5UA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO5 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-5-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_P_AGM_Recycle_Bin#
W=80
X=0r
Y=0r
Hidden=#GMO5#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMRecycleBin "" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Supported\Recycle-Bin" "Recycle-Bin.ini"][!WriteKeyValue Variables GMO5UA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-6]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_AGM_Dock#
W=38
X=85r
Y=0r
Hidden=#GMO6UA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMDock "Dock" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO6UA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO6 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-6-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_P_AGM_Dock#
W=38
X=0r
Y=0r
Hidden=#GMO6#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMDock "" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Supported\Dock" "Dock.ini"][!WriteKeyValue Variables GMO6UA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO6 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-7]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_AGM_Notes#
W=40
X=45r
Y=0r
Hidden=#GMO7UA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMNotes "Notes" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO7UA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO7 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-7-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#S_P_AGM_Notes#
W=40
X=0r
Y=0r
Hidden=#GMO7#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMNotes "" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Supported\Notes" "Notes.ini"][!WriteKeyValue Variables GMO7UA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO7 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-8]
Meter=String
MeterStyle=BUTTONS
Text=CyberSearch
W=85
X=180
Y=25r
Hidden=#GMO8UA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMCyberSearch "CyberSearch" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO8UA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO8 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

[Game-Mode-Option-8-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=CyberSearch
W=85
X=0r
Y=0r
Hidden=#GMO8#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables GMCyberSearch "" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Supported\CyberSearch" "CyberSearch.ini"][!WriteKeyValue Variables GMO8UA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables GMO8 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Game-Mode"]

;	Tray

[Tray]
Meter=String
MeterStyle=TEXT
Text=#S_P_Tray#
W=110
X=180
Y=30r

[Tray-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#SK_OFF#
X=100r
Y=0r
Hidden=#TOUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TO "0" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Tray" "tray.ini"][!Refresh #CURRENTCONFIG#]

[Tray-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#SK_ON#
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#TO#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TO "1" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\Tray" "tray.ini"][!Refresh #CURRENTCONFIG#]

;	Performance Monitor

[Performance-Monitor]
Meter=String
MeterStyle=TEXT
Text=#S_P_PM#
W=250
X=180
Y=30r

[Performance-Monitor-Off]
Meter=String
MeterStyle=BUTTONS
Text=#SK_OFF#
X=280r
Y=0r
Hidden=#PMOFF#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables QOUAG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUAG2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUAG3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PMOFF "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PMON "0" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\PerformanceMonitor" "perfmonitor.ini"][!Refresh #CURRENTCONFIG#]

[Performance-Monitor-On]
Meter=String
MeterStyle=BUTTONS
Text=#SK_ON#
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#PMON#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables QOUAG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUAG2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUAG3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PMOFF "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PMON "1" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\PerformanceMonitor" "perfmonitor.ini"][!Refresh #CURRENTCONFIG#]

;	Quality

[Quality]
Meter=String
MeterStyle=TEXT
Text=#S_P_Q#
W=150
X=180
Y=30r

[Quality-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_Q_L#
W=31
X=180
Y=30r
Hidden=#QOUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables QOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables AntiAliasingPM "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringEffectPM "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringStylePM "Normal" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Group"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Clock"][!RefreshGroup "Ashuramaru-Bundle Top-Processes"][!RefreshGroup "Ashuramaru-Bundle CyberSearch"][!RefreshGroup "Ashuramaru-Bundle Dock"][!RefreshGroup "Ashuramaru-Bundle Dock-Single"][!RefreshGroup "Ashuramaru-Bundle-Visualizers-Group"][!RefreshGroup "Ashuramaru-Bundle Setup"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Quality-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_Q_L#
FontColor=#PrimaryColor#
W=31
X=0r
Y=0r
Hidden=#QOA#

[Quality-Option-1-UnActive]
Meter=String
MeterStyle=BUTTONS
FontColor=255,255,255,100
Text=#S_P_Q_L#
W=31
X=0r
Y=0r
Hidden=#QOUAG#

[Quality-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_Q_M#
W=53
X=40r
Y=0r
Hidden=#QOUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables QOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables AntiAliasingPM "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringEffectPM "Shadow" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringStylePM "Bold" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Group"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Clock"][!RefreshGroup "Ashuramaru-Bundle Top-Processes"][!RefreshGroup "Ashuramaru-Bundle CyberSearch"][!RefreshGroup "Ashuramaru-Bundle Dock"][!RefreshGroup "Ashuramaru-Bundle Dock-Single"][!RefreshGroup "Ashuramaru-Bundle-Visualizers-Group"][!RefreshGroup "Ashuramaru-Bundle Setup"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Quality-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_Q_M#
FontColor=#PrimaryColor#
W=53
X=0r
Y=0r
Hidden=#QOA2#

[Quality-Option-2-UnActive]
Meter=String
MeterStyle=BUTTONS
FontColor=255,255,255,100
Text=#S_P_Q_M#
W=53
X=0r
Y=0r
Hidden=#QOUAG2#

[Quality-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_Q_H#
W=35
X=60r
Y=0r
Hidden=#QOUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables QOUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QOA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables AntiAliasingPM "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringEffectPM "Shadow" "#@#\Addons\variables.inc"][!WriteKeyValue Variables StringStylePM "Bold" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Group"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Clock"][!RefreshGroup "Ashuramaru-Bundle Top-Processes"][!RefreshGroup "Ashuramaru-Bundle CyberSearch"][!RefreshGroup "Ashuramaru-Bundle Dock"][!RefreshGroup "Ashuramaru-Bundle Dock-Single"][!RefreshGroup "Ashuramaru-Bundle-Visualizers-Group"][!RefreshGroup "Ashuramaru-Bundle Setup"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Quality-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_P_Q_H#
FontColor=#PrimaryColor#
W=35
X=0r
Y=0r
Hidden=#QOA3#

[Quality-Option-3-UnActive]
Meter=String
MeterStyle=BUTTONS
FontColor=255,255,255,100
Text=#S_P_Q_H#
W=35
X=0r
Y=0r
Hidden=#QOUAG3#

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

[Panel-Next-Page-Button]
Meter=String
MeterStyle=BUTTONS
Text=#P_P# >
W=45
X=540
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Panel2" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]