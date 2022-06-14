;	Panel > Settings > CyberSearch

;------------
;	Meters
;------------

;	Description

[CS-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_CS_Desc#
W=410
X=180
Y=40

[CS-Engine]
Meter=String
MeterStyle=TEXT
Text=#S_CS_Title#
X=180
Y=30r

;	Google

[CS-Engine-1]
Meter=String
MeterStyle=BUTTONS
Text=Google
X=180
Y=25r
ToolTipTitle=Google #S_CS_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_CS_Google_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Engine-Icon "#@#\Images\Icons\SearchEngines\google.png" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-Name "Google" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-URL-Query "https://www.google.com/search?q={q}" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle CyberSearch"]
Hidden=#CSEUA#

[CS-Engine-1-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=Google
X=0r
Y=0r
Hidden=#CSE#

;	Reddit

[CS-Engine-2]
Meter=String
MeterStyle=BUTTONS
Text=Reddit
X=55r
Y=0r
ToolTipTitle=Reddit #S_CS_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_CS_Reddit_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Engine-Icon "#@#\Images\Icons\SearchEngines\reddit.png" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-Name "Reddit" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-URL-Query "https://www.reddit.com/search/?q={q}" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle CyberSearch"]
Hidden=#CSEUA2#

[CS-Engine-2-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=Reddit
X=0r
Y=0r
Hidden=#CSE2#

;	YouTube

[CS-Engine-3]
Meter=String
MeterStyle=BUTTONS
Text=YouTube
X=55r
Y=0r
ToolTipTitle=YouTube #S_CS_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_CS_YouTube_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Engine-Icon "#@#\Images\Icons\SearchEngines\youtube.png" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-Name "YouTube" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-URL-Query "https://www.youtube.com/search?q={q}" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle CyberSearch"]
Hidden=#CSEUA3#

[CS-Engine-3-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=YouTube
X=0r
Y=0r
Hidden=#CSE3#

;	DuckDuckGo

[CS-Engine-4]
Meter=String
MeterStyle=BUTTONS
Text=DuckDuckGo
X=65r
Y=0r
ToolTipTitle=DuckDuckGo #S_CS_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_CS_DuckDuckGo_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Engine-Icon "#@#\Images\Icons\SearchEngines\duckduckgo.png" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-Name "DuckDuckGo" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-URL-Query "https://duckduckgo.com/?q={q}&kp=-1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle CyberSearch"]
Hidden=#CSEUA4#

[CS-Engine-4-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=DuckDuckGo
X=0r
Y=0r
Hidden=#CSE4#

;	Bing

[CS-Engine-5]
Meter=String
MeterStyle=BUTTONS
Text=Bing
X=90r
Y=0r
ToolTipTitle=Bing #S_CS_Title#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#S_CS_Bing_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Engine-Icon "#@#\Images\Icons\SearchEngines\bing.png" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-Name "Bing" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Engine-URL-Query "https://www.bing.com/search?q={q}" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSEUA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables CSE5 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle CyberSearch"]
Hidden=#CSEUA5#

[CS-Engine-5-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=Bing
X=0r
Y=0r
Hidden=#CSE5#

[CS-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[CS-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Settings#
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive2 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive3 ">" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive4 "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PageActive5 "" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]