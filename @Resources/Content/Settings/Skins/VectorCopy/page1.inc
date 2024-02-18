;	Ashuramaru Bundle Settings\Skins\VectorCopy Page

;	This is additional file for panel

;	Last edit date: 20.06.2022

;------------
;	Meters
;------------

;	Visualizer Type

[Settings-VectorCopy-Type]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Type#
W=230
X=70
Y=60

[Settings-VectorCopy-Type-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Type_Bars#
W=60
X=70
Y=40r
Hidden=#SVCTUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCTUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCTA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCTUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCTA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerType "Bar" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Type-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Type_Bars#
W=60
X=0r
Y=0r
Hidden=#SVCTA#

[Settings-VectorCopy-Type-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Type_Vector#
W=85
X=80r
Y=0r
Hidden=#SVCTUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCTA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCTUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCTA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerType "Poly" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Type-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Type_Vector#
W=85
X=0r
Y=0r
Hidden=#SVCTA2#

;	Visualizer Color Type

[Settings-VectorCopy-Color-Type]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Color_Type#
W=350
X=70
Y=50r

[Settings-VectorCopy-Color-Type-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Color_Type_Color#
W=70
X=70
Y=40r
Hidden=#SVCCTUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCCTUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerColorType "Custome" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Color-Type-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Color_Type_Color#
W=70
X=0r
Y=0r
Hidden=#SVCCTA#

[Settings-VectorCopy-Color-Type-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Color_Type_Wallpaper#
W=130
X=90r
Y=0r
Hidden=#SVCCTUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCCTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerColorType "Chameleon" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Color-Type-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Color_Type_Wallpaper#
W=130
X=0r
Y=0r
Hidden=#SVCCTA2#

;	Visualizer Inverted

[Settings-VectorCopy-Inverted]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Inverted#
W=300
X=70
Y=50r

[Settings-VectorCopy-Inverted-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Yes#
W=45
X=70
Y=40r
Hidden=#SVCIUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerInverted "Yes" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCIUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCIA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCIUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCIA2 "1" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Inverted-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Yes#
W=45
X=0r
Y=0r
Hidden=#SVCIA#

[Settings-VectorCopy-Inverted-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_No#
W=40
X=70r
Y=0r
Hidden=#SVCIUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerInverted "No" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCIUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCIA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCIUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCIA2 "0" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Inverted-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_No#
W=40
X=0r
Y=0r
Hidden=#SVCIA2#

;	Visualizer Scale

[Settings-VectorCopy-Scale]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Scale#
W=280
X=70
Y=50r

[Settings-VectorCopy-Scale-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Scale_Small#
W=75
X=70
Y=40r
Hidden=#SVCSUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerScale "0.5" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSA3 "1" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Scale-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Scale_Small#
W=75
X=0r
Y=0r
Hidden=#SVCSA#

[Settings-VectorCopy-Scale-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Scale_Normal#
W=100
X=90r
Y=0r
Hidden=#SVCSUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerScale "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSA3 "1" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Scale-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Scale_Normal#
W=100
X=0r
Y=0r
Hidden=#SVCSA2#

[Settings-VectorCopy-Scale-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Scale_Big#
W=45
X=110r
Y=0r
Hidden=#SVCSUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerScale "1.5" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCSA3 "0" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Scale-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Scale_Big#
W=45
X=0r
Y=0r
Hidden=#SVCSA3#

;	Visualizer Chameleon Type

[Settings-VectorCopy-Chameleon-Type]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Wallpaper_Type#
W=380
X=70
Y=50r

[Settings-VectorCopy-Chameleon-Type-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Wallpaper_Type_Foreground#
W=150
X=70
Y=40r
Hidden=#SVCCTVUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerChameleonType "Foreground1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA5 "1" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Chameleon-Type-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Wallpaper_Type_Foreground#
W=150
X=0r
Y=0r
Hidden=#SVCCTVA#

[Settings-VectorCopy-Chameleon-Type-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Wallpaper_Type_Background#
W=155
X=165r
Y=0r
Hidden=#SVCCTVUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerChameleonType "Background1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA5 "1" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Chameleon-Type-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Wallpaper_Type_Background#
W=155
X=0r
Y=0r
Hidden=#SVCCTVA2#

[Settings-VectorCopy-Chameleon-Type-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Wallpaper_Type_Light#
W=70
X=165r
Y=0r
Hidden=#SVCCTVUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerChameleonType "Light1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA5 "1" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Chameleon-Type-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Wallpaper_Type_Light#
W=70
X=0r
Y=0r
Hidden=#SVCCTVA3#

[Settings-VectorCopy-Chameleon-Type-4]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Wallpaper_Type_Dark#
W=65
X=80r
Y=0r
Hidden=#SVCCTVUA4#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerChameleonType "Dark1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA5 "1" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Chameleon-Type-4-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Wallpaper_Type_Dark#
W=65
X=0r
Y=0r
Hidden=#SVCCTVA4#

[Settings-VectorCopy-Chameleon-Type-5]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Wallpaper_Type_Average#
W=110
X=75r
Y=0r
Hidden=#SVCCTVUA5#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables VisualizerChameleonType "Average" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVUA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCCTVA5 "0" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Chameleon-Type-5-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_VectorCopy_Wallpaper_Type_Average#
W=110
X=0r
Y=0r
Hidden=#SVCCTVA5#

;	Visualizer Alpha

[Settings-VectorCopy-Alpha]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_VectorCopy_Alpha#
W=250
X=70
Y=50r

[Settings-VectorCopy-Alpha-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=20%
X=70
Y=40r
Hidden=#SVCAUA1#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCAUA1 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA1 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerAlpha "51" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Alpha-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=20%
X=0r
Y=0r
Hidden=#SVCA1#

[Settings-VectorCopy-Alpha-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=30%
X=70r
Y=0r
Hidden=#SVCAUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCAUA1 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA1 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerAlpha "76" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Alpha-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=30%
X=0r
Y=0r
Hidden=#SVCA2#

[Settings-VectorCopy-Alpha-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=40%
X=70r
Y=0r
Hidden=#SVCAUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCAUA1 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA1 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerAlpha "102" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Alpha-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=40%
X=0r
Y=0r
Hidden=#SVCA3#

[Settings-VectorCopy-Alpha-4]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=50%
X=70r
Y=0r
Hidden=#SVCAUA4#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCAUA1 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA1 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerAlpha "127" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Alpha-4-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=50%
X=0r
Y=0r
Hidden=#SVCA4#

[Settings-VectorCopy-Alpha-5]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=60%
X=70r
Y=0r
Hidden=#SVCAUA5#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCAUA1 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA1 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerAlpha "153" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Alpha-5-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=60%
X=0r
Y=0r
Hidden=#SVCA5#

[Settings-VectorCopy-Alpha-6]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=70%
X=70r
Y=0r
Hidden=#SVCAUA6#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCAUA1 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA1 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerAlpha "178" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Alpha-6-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=70%
X=0r
Y=0r
Hidden=#SVCA6#

[Settings-VectorCopy-Alpha-7]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=80%
X=70r
Y=0r
Hidden=#SVCAUA7#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCAUA1 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA1 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerAlpha "204" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Alpha-7-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=80%
X=0r
Y=0r
Hidden=#SVCA7#

[Settings-VectorCopy-Alpha-8]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=90%
X=70r
Y=0r
Hidden=#SVCAUA8#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCAUA1 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA1 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerAlpha "229" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Alpha-8-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=90%
X=0r
Y=0r
Hidden=#SVCA8#

[Settings-VectorCopy-Alpha-9]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=100%
X=70r
Y=0r
Hidden=#SVCAUA9#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SVCAUA1 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA1 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCAUA9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SVCA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables VisualizerAlpha "255" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle-Visualizers Group"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Alpha-9-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=100%
X=0r
Y=0r
Hidden=#SVCA9#

;	Next Page Area

[Settings-VectorCopy-Next-Page-Area]
Meter=Image
SolidColor=100,100,100,10
W=50
H=542
X=742
Y=49
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,40][!SetOption Settings-VectorCopy-Next-Page-Icon ImageTint 200,200,200,60][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-VectorCopy-Next-Page-Icon]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,10][!SetOption Settings-VectorCopy-Next-Page-Icon ImageTint 200,200,200,30][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-VectorCopy-Next-Page-Icon]
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\VectorCopy\page2" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Next-Page-Icon]
Meter=Image
ImageName=#@#\Images\Icons\right-arrow.png
ImageTint=200,200,200,30
W=30
H=30
X=10r
Y=230r
