;	Ashuramaru Bundle Settings\Skins\Elegant Clock Page

;	This is additional file for panel

;	Last edit date: 20.06.2022

;------------
;	Meters
;------------

;	Elegant Clock Time Type

[Settings-Elegant-Clock-Time-Type]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Elegant_Clock_Time_Type#
X=70
Y=60

[Settings-Elegant-Clock-Time-Type-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=24h
X=70
Y=40r
Hidden=#CTOUA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TMA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TMA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTOUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]

[Settings-Elegant-Clock-Time-Type-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=24h
X=0r
Y=0r
Hidden=#CTO#

[Settings-Elegant-Clock-Time-Type-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=12h
X=70r
Y=0r
Hidden=#CTOUA2#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables TMA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TMA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CTOUA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]

[Settings-Elegant-Clock-Time-Type-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=12h
X=0r
Y=0r
Hidden=#CTO2#

;	Elegant Clock Day Info

[Settings-Elegant-Clock-Day-Info]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Elegant_Clock_Day_Info#
X=70
Y=50r
W=350

[Settings-Elegant-Clock-Day-Info-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=400r
Y=0r
Hidden=#CPOUA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CDIA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CDIY "35r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPOUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]

[Settings-Elegant-Clock-Day-Info-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#CPO#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CDIA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CDIY "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPOUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]

;	Elegant Clock Year Info

[Settings-Elegant-Clock-Year-Info]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Elegant_Clock_Year_Info#
X=70
Y=50r
W=370

[Settings-Elegant-Clock-Year-Info-Switch]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,255,255
Text=#SK_OFF#
W=60
X=420r
Y=0r
Hidden=#CPOUA2#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CYIA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CYIY "15r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPOUA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]

[Settings-Elegant-Clock-Year-Info-Switch-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
StringAlign=Center
FontColor=255,0,0
Text=#SK_ON#
W=60
X=0r
Y=0r
Hidden=#CPO2#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables CYIA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CYIY "-10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CPOUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Clock"]