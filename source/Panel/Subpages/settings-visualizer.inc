;	Panel > Settings > Visualizer

;------------
;	Meters
;------------

[Visualizer-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_V_Desc#
W=410
X=180
Y=40

[Visualizer-Variation]
Meter=String
MeterStyle=TEXT
Text=#S_V_Title#
X=180
Y=30r

[Visualizer-Variation-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=Kitty
X=180
Y=25r
ToolTipTitle=Kitty
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_V_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kitty" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittysmooth" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittyslow" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\vector" "visualizer.ini"][!WriteKeyValue Variables VVO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA4 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Visualizers"]
Hidden=#VVOUA#

[Visualizer-Variation-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=Kitty
X=0r
Y=0r
Hidden=#VVO#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kitty" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittysmooth" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittyslow" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\vector" "visualizer.ini"][!WriteKeyValue Variables VVO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Visualizers"]

[Visualizer-Variation-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=KittySmooth
X=50r
Y=0r
Hidden=#VVOUA2#
ToolTipTitle=KittySmooth
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_V_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittysmooth" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kitty" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittyslow" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\vector" "visualizer.ini"][!WriteKeyValue Variables VVO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA4 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Visualizers"]

[Visualizer-Variation-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=KittySmooth
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#VVO2#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittysmooth" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kitty" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittyslow" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\vector" "visualizer.ini"][!WriteKeyValue Variables VVO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Visualizers"]

[Visualizer-Variation-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=KittySlow
X=95r
Y=0r
Hidden=#VVOUA3#
ToolTipTitle=KittySlow
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_V_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittyslow" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittysmooth" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kitty" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\vector" "visualizer.ini"][!WriteKeyValue Variables VVO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA4 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Visualizers"]

[Visualizer-Variation-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
Text=KittySlow
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#VVO3#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittyslow" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittysmooth" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kitty" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\vector" "visualizer.ini"][!WriteKeyValue Variables VVO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA3 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Visualizers"]

[Visualizer-Variation-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=Vector
X=75r
Y=0r
Hidden=#VVOUA4#
ToolTipTitle=Vector
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_V_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!ActivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\vector" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittysmooth" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittyslow" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kitty" "visualizer.ini"][!WriteKeyValue Variables VVO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVO4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA4 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Visualizers"]

[Visualizer-Variation-Option-4-Active]
Meter=String
MeterStyle=BUTTONS
Text=Vector
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#VVO4#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\vector" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittysmooth" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kittyslow" "visualizer.ini"][!DeactivateConfig "Ashuramaru-Bundle\Supported\VectorCopy\kitty" "visualizer.ini"][!WriteKeyValue Variables VVO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VVOUA4 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Visualizers"]

[Visualizer-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Visualizer-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Settings#
W=70
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive2 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive3 ">" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive4 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive5 "" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Visualizer-Back-Button-Skins]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Skins#
W=50
X=75r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Skins" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive2 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive3 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive4 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive5 ">" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]