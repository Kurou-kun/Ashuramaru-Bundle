;	Panel > Settings > TaskbarX > 2nd page

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

;	Aniamtion Style

[TaskbarX-Animation-Style]
Meter=String
MeterStyle=TEXT
Text=#S_TX_Title6#
X=180
Y=30r

[TaskbarX-Animation-Style-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_TX_AS_None#
W=35
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "none" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "none" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "none" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_TX_AS_Linear#
W=50
X=40r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "linear" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "linear" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "linear" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=Expoeaseout
W=88
X=60r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "expoeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "expoeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "expoeaseout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=Expoeasein
W=78
X=100r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "expoeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "expoeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "expoeasein" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-5]
Meter=String
MeterStyle=BUTTONS
Text=Expoeaseinout
W=95
X=90r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "expoeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "expoeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "expoeaseinout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-6]
Meter=String
MeterStyle=BUTTONS
Text=Expoeaseoutin
W=95
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "expoeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "expoeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "expoeaseoutin" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-7]
Meter=String
MeterStyle=BUTTONS
Text=Circeaseout
W=80
X=100r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "circeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "circeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "circeaseout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-8]
Meter=String
MeterStyle=BUTTONS
Text=Circeasein
W=70
X=85r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "circeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "circeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "circeasein" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-9]
Meter=String
MeterStyle=BUTTONS
Text=Circeaseinout
W=90
X=75r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "circeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "circeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "circeaseinout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-10]
Meter=String
MeterStyle=BUTTONS
Text=Circeaseoutin
W=90
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "circeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "circeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "circeaseoutin" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-11]
Meter=String
MeterStyle=BUTTONS
Text=Quadeaseout
W=90
X=95r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "quadeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "quadeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "quadeaseout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-12]
Meter=String
MeterStyle=BUTTONS
Text=Quadeasein
W=80
X=95r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "quadeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "quadeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "quadeasein" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-13]
Meter=String
MeterStyle=BUTTONS
Text=Quadeaseinout
W=100
X=85r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "quadeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "quadeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "quadeaseinout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-14]
Meter=String
MeterStyle=BUTTONS
Text=Quadeaseoutin
W=100
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "quadeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "quadeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "quadeaseoutin" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-15]
Meter=String
MeterStyle=BUTTONS
Text=Sineeaseout
W=83
X=105r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "sineeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "sineeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "sineeaseout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-16]
Meter=String
MeterStyle=BUTTONS
Text=Sineeasein
W=73
X=85r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "sineeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "sineeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "sineeasein" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-17]
Meter=String
MeterStyle=BUTTONS
Text=Sineeaseinout
W=93
X=75r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "sineeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "sineeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "sineeaseinout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]


[TaskbarX-Animation-Style-Option-18]
Meter=String
MeterStyle=BUTTONS
Text=Sineeaseoutin
W=93
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "sineeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "sineeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "sineeaseoutin" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-19]
Meter=String
MeterStyle=BUTTONS
Text=Cubiceaseout
W=90
X=100r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "cubiceaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "cubiceaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "cubiceaseout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-20]
Meter=String
MeterStyle=BUTTONS
Text=Cubiceasein
W=80
X=95r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "cubiceasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "cubiceasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "cubiceasein" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-21]
Meter=String
MeterStyle=BUTTONS
Text=Cubiceaseinout
W=103
X=85r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "cubiceaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "cubiceaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "cubiceaseinout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-22]
Meter=String
MeterStyle=BUTTONS
Text=Cubiceaseoutin
W=103
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "cubiceaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "cubiceaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "cubiceaseoutin" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-23]
Meter=String
MeterStyle=BUTTONS
Text=Backeaseout
W=85
X=105r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "backeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "backeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "backeaseout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-24]
Meter=String
MeterStyle=BUTTONS
Text=Backeasein
W=75
X=90r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "backeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "backeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "backeasein" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-25]
Meter=String
MeterStyle=BUTTONS
Text=Backeaseinout
W=95
X=80r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "backeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "backeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "backeaseinout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-26]
Meter=String
MeterStyle=BUTTONS
Text=Bounceeaseout
W=103
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "bounceeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "bounceeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "bounceeaseout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-27]
Meter=String
MeterStyle=BUTTONS
Text=Bounceeasein
W=95
X=105r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "bounceeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "bounceeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "bounceeasein" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-28]
Meter=String
MeterStyle=BUTTONS
Text=Bounceeaseinout
W=113
X=100r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "bounceeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "bounceeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "bounceeaseinout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-29]
Meter=String
MeterStyle=BUTTONS
Text=Bounceeaseoutin	
W=113
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "bounceeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "bounceeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "bounceeaseoutin" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]#

[TaskbarX-Animation-Style-Option-30]
Meter=String
MeterStyle=BUTTONS
Text=Elasticeaseout	
W=100
X=115r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "elasticeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "elasticeaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "elasticeaseout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-31]
Meter=String
MeterStyle=BUTTONS
Text=Elasticeasein
W=90
X=105r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "elasticeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "elasticeasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "elasticeasein" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-32]
Meter=String
MeterStyle=BUTTONS
Text=Elasticeaseinout
W=110
X=180
Y=25r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "elasticeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "elasticeaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "elasticeaseinout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-33]
Meter=String
MeterStyle=BUTTONS
Text=Elasticeaseoutin
W=110
X=115r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "elasticeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "elasticeaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "elasticeaseoutin" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-34]
Meter=String
MeterStyle=BUTTONS
Text=Quinteaseout
W=90
X=115r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "quinteaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "quinteaseout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "quinteaseout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-35]
Meter=String
MeterStyle=BUTTONS
Text=Quinteasein
W=80
X=95r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "quinteasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "quinteasein" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "quinteasein" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-36]
Meter=String
MeterStyle=BUTTONS
Text=Quinteaseinout
W=100
X=180
Y=23r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "quinteaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "quinteaseinout" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "quinteaseinout" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

[TaskbarX-Animation-Style-Option-37]
Meter=String
MeterStyle=BUTTONS
Text=Quinteaseoutin
W=100
X=105r
Y=0r
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables as "quinteaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables obas "quinteaseoutin" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Chosen-Animation "quinteaseoutin" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle TaskbarX"]

;	You really think i will double this amount of meters just to make this buttons?!?!??! NOPE! I've thought about better and faster way of showing which you have chosen.

;	Show

[TaskbarX-Animation-Style-Chosen]
Meter=String
MeterStyle=Text
Text=#S_TX_AS_Chosen#: #Chosen-Animation#
FontSize=10
FontColor=#PrimaryColor#
SolidColor=100,100,100,30
X=([TaskbarX-Animation-Style:X]-100)r
Y=([TaskbarX-Animation-Style:Y]+0)

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

[TaskbarX-Back-Page-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #P_P#
W=45
X=540
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-TaskbarX" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]