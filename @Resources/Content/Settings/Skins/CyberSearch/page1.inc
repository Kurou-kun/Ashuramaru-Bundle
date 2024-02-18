;	Ashuramaru Bundle Settings\Skins\CyberSearch Page

;	This is additional file for panel

;	Last edit date: 20.06.2022

;------------
;	Meters
;------------

;	CyberSearch Search Engine

[Settings-CyberSearch-Search-Engine]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_CyberSearch_Engine#
W=300
X=70
Y=60

[Settings-CyberSearch-Search-Engine-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Google
X=70
Y=40r
Hidden=#CSEUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Engine-Icon "google" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-Name "Google" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-URL-Query "https://www.google.com/search?q={q}" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle CyberSearch"]

[Settings-CyberSearch-Search-Engine-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=Google
X=0r
Y=0r
Hidden=#CSE#

[Settings-CyberSearch-Search-Engine-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Reddit
X=105r
Y=0r
Hidden=#CSEUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Engine-Icon "reddit" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-Name "Reddit" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-URL-Query "https://www.reddit.com/search/?q={q}" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle CyberSearch"]

[Settings-CyberSearch-Search-Engine-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=Reddit
X=0r
Y=0r
Hidden=#CSE2#

[Settings-CyberSearch-Search-Engine-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=YouTube
X=105r
Y=0r
Hidden=#CSEUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Engine-Icon "youtube" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-Name "YouTube" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-URL-Query "https://www.youtube.com/search?q={q}" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle CyberSearch"]

[Settings-CyberSearch-Search-Engine-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=YouTube
X=0r
Y=0r
Hidden=#CSE3#

[Settings-CyberSearch-Search-Engine-4]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=DuckDuckGo
X=125r
Y=0r
Hidden=#CSEUA4#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Engine-Icon "duckduckgo" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-Name "DuckDuckGo" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-URL-Query "https://duckduckgo.com/?q={q}&kp=-1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle CyberSearch"]

[Settings-CyberSearch-Search-Engine-4-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=DuckDuckGo
X=0r
Y=0r
Hidden=#CSE4#

[Settings-CyberSearch-Search-Engine-5]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Bing
X=185r
Y=0r
Hidden=#CSEUA5#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Engine-Icon "bing" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-Name "Bing" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-URL-Query "https://www.bing.com/search?q={q}" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE5 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle CyberSearch"]

[Settings-CyberSearch-Search-Engine-5-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=Bing
X=0r
Y=0r
Hidden=#CSE5#