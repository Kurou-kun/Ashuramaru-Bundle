;	Ashuramaru Bundle Settings\Skins\Statistics Page

;	This is additional file for panel

;	Last edit date: 23.06.2022

;------------
;	Meters
;------------

;	Statistics Combined Type

[Settings-Statistics-Combined-Type]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Content#
W=370
X=70
Y=60

[Settings-Statistics-Combined-Type-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# A
W=90
X=70
Y=40r
Hidden=#PSSCTUA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PSSCTUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY22 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Network "network-combined" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-System "none" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Disks "none" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#][!Redraw]

[Settings-Statistics-Combined-Type-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# A
W=90
X=0r
Y=0r
Hidden=#PSSCTA#

[Settings-Statistics-Combined-Type-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# B
W=90
X=100r
Y=0r
Hidden=#PSSCTUA2#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PSSCTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY "3r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY22 "28" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Network "network-combined" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-System "system-combined" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Disks "none" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#][!Redraw]

[Settings-Statistics-Combined-Type-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# B
W=90
X=0r
Y=0r
Hidden=#PSSCTA2#

[Settings-Statistics-Combined-Type-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# C
W=90
X=100r
Y=0r
Hidden=#PSSCTUA3#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PSSCTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY "3r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY2 "3r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY2 "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY22 "28" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Network "network-combined" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-System "system-combined" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Disks "disks-combined" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#][!Redraw]

[Settings-Statistics-Combined-Type-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# C
W=90
X=0r
Y=0r
Hidden=#PSSCTA3#

[Settings-Statistics-Combined-Type-4]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# D
W=90
X=100r
Y=0r
Hidden=#PSSCTUA4#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PSSCTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY2 "3r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY2 "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY22 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Network "network-combined" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-System "none" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Disks "disks-combined" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#][!Redraw]

[Settings-Statistics-Combined-Type-4-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# D
W=90
X=0r
Y=0r
Hidden=#PSSCTA4#

[Settings-Statistics-Combined-Type-5]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# E
W=90
X=100r
Y=0r
Hidden=#PSSCTUA5#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PSSCTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY2 "3r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY2 "12r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY22 "28" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Network "none" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-System "system-combined" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Disks "disks-combined" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#][!Redraw]

[Settings-Statistics-Combined-Type-5-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# E
W=90
X=0r
Y=0r
Hidden=#PSSCTA5#

[Settings-Statistics-Combined-Type-6]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# F
W=90
X=100r
Y=0r
Hidden=#PSSCTUA6#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PSSCTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY22 "28" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Network "none" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-System "system-combined" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Disks "none" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#]

[Settings-Statistics-Combined-Type-6-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# F
W=90
X=0r
Y=0r
Hidden=#PSSCTA6#

[Settings-Statistics-Combined-Type-7]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# G
W=90
X=70
Y=40r
Hidden=#PSSCTUA7#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PSSCTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTUA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PSSCTA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOYY2 "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SCTOY22 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Network "none" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-System "none" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Import-Disks "disks-combined" "#@#\Addons\variables.inc"][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#]

[Settings-Statistics-Combined-Type-7-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Type# G
W=90
X=0r
Y=0r
Hidden=#PSSCTA7#

;	Statistics Disks

[Settings-Statistics-Disks]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Disks_Content#
W=250
X=70
Y=50r

[Settings-Statistics-Disks-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #2
W=95
X=70
Y=40r
Hidden=#D2B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D2A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2BA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #2
W=95
X=0r
Y=0r
Hidden=#D2BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D2A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2BA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #3
W=95
X=110r
Y=0r
Hidden=#D3B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D3A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3BA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #3
W=95
X=0r
Y=0r
Hidden=#D3BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D3A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D3BA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #4
W=95
X=110r
Y=0r
Hidden=#D4B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D4A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4BA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #4
W=95
X=0r
Y=0r
Hidden=#D4BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D4A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D4BA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-4]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #5
W=95
X=110r
Y=0r
Hidden=#D5B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D5A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5BA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-4-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #5
W=95
X=0r
Y=0r
Hidden=#D5BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D5A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D5BA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-5]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #6
W=95
X=110r
Y=0r
Hidden=#D6B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D6A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6BA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-5-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #6
W=95
X=0r
Y=0r
Hidden=#D6BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D6A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D6BA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-6]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #7
W=95
X=110r
Y=0r
Hidden=#D7B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D7A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7BA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-6-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #7
W=95
X=0r
Y=0r
Hidden=#D7BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D7A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D7BA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-7]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #8
W=95
X=70
Y=40r
Hidden=#D8B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D8A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8BA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-7-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #8
W=95
X=0r
Y=0r
Hidden=#D8BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D8A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D8BA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-8]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #9
W=95
X=110r
Y=0r
Hidden=#D9B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D9A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9BA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-8-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #9
W=95
X=0r
Y=0r
Hidden=#D9BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D9A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D9BA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-9]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #10
W=110
X=110r
Y=0r
Hidden=#D10B#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D10A "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10Y "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10Y2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10B "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10BA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Disks-9-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Disk# #10
W=110
X=0r
Y=0r
Hidden=#D10BA#
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D10A "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10Y "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10Y2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10B "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D10BA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

;	Statistics Combined Disks Type

[Settings-Statistics-Combined-Disks-Type]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Disk_Type#
W=450
X=70
Y=50r

[Settings-Statistics-Combined-Disk-Type-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Disk_Type_Classic#
W=90
X=70
Y=40r
Hidden=#SDTUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SDTUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Disks-Combined-Path "disks-type" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Combined-Disk-Type-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Disk_Type_Classic#
W=90
X=0r
Y=0r
Hidden=#SDTA#

[Settings-Statistics-Combined-Disk-Type-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Disk_Type_Extended#
W=120
X=100r
Y=0r
Hidden=#SDTUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SDTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDTA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Disks-Combined-Path "disks-type2" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Combined-Disk-Type-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Combined_Disk_Type_Extended#
W=120
X=0r
Y=0r
Hidden=#SDTA2#

;	Statistics Measures Engine

[Settings-Statistics-Measures-Engine]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Measures_Engine#
W=400
X=70
Y=50r

[Settings-Statistics-Measures-Engine-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=MsiAfterburner
X=70
Y=40r
Hidden=#SMEUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables StatisticsMeasureEngine "msiafterburner" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Settings-Statistics-Measures-Engine-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=MsiAfterburner
X=0r
Y=0r
Hidden=#SMEA#

[Settings-Statistics-Measures-Engine-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=HwInfo
X=210r
Y=0r
Hidden=#SMEUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables StatisticsMeasureEngine "hwinfo" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SMEA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Settings-Statistics-Measures-Engine-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=HwInfo
X=0r
Y=0r
Hidden=#SMEA2#

;	Next Page Area

[Settings-Statistics-Next-Page-Area]
Meter=Image
SolidColor=100,100,100,10
W=50
H=542
X=742
Y=49
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,40][!SetOption Settings-Statistics-Next-Page-Icon ImageTint 200,200,200,60][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-Statistics-Next-Page-Icon]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,10][!SetOption Settings-Statistics-Next-Page-Icon ImageTint 200,200,200,30][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-Statistics-Next-Page-Icon]
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\Statistics\page2" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Settings-Statistics-Next-Page-Icon]
Meter=Image
ImageName=#@#\Images\Icons\right-arrow.png
ImageTint=200,200,200,30
W=30
H=30
X=10r
Y=230r

