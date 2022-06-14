;	Panel > Settings > Statistics > Page 2

;------------
;	Meters
;------------

;	Description

[Statistics-Page2-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#S_S_Desc#
W=410
X=180
Y=40

[Statistics-Labels]
Meter=String
MeterStyle=TEXT
Text=#S_S_L_Title#
X=180
Y=30r

;	Network

[Statistics-Labels-Network]
Meter=String
MeterStyle=H3
Text=#S_S_L_Network_Label#
W=80
X=180
Y=25r

[Statistics-Labels-Network-Latency]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_Network#
FontColor=255,255,255,50
W=55
X=180
Y=25r

[Statistics-Labels-Network-Upload]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_Network2#
W=48
X=60r
Y=0r
Hidden=#SLNUUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNU "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNUY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNUB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNUUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-Network-Upload-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_Network2#
FontColor=#PrimaryColor#
W=48
X=0r
Y=0r
Hidden=#SLNUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNU "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNUY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNUB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNUUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]


[Statistics-Labels-Network-Download]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_Network3#
W=67
X=55r
Y=0r
Hidden=#SLNDUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SND "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNDY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNDB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNDUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNDA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-Network-Download-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_Network3#
FontColor=#PrimaryColor#
W=67
X=0r
Y=0r
Hidden=#SLNDA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SND "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNDY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNDB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNDUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNDA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-Network-Traffic]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_Network4#
W=45
X=75r
Y=0r
Hidden=#SLNTUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNT "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNTUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNTA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-Network-Traffic-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_Network4#
FontColor=#PrimaryColor#
W=45
X=0r
Y=0r
Hidden=#SLNTA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNT "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNTA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-Speed-Traffic]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_Network5#
W=45
X=50r
Y=0r
Hidden=#SLNSUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNS "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNSY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNSB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNSUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNSA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-Network-Speed-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_Network5#
FontColor=#PrimaryColor#
W=45
X=0r
Y=0r
Hidden=#SLNSA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNS "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNSY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNSB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNSUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNSA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

;	System

[Statistics-Labels-System]
Meter=String
MeterStyle=H3
Text=#S_S_L_System_Label#
W=80
X=180
Y=30r

[Statistics-Labels-System-CPU-Usage]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System#
FontColor=255,255,255,50
W=70
X=180
Y=25r

[Statistics-Labels-System-CPU-Clock]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System2#
W=68
X=75r
Y=0r
Hidden=#SLSCCUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSCC "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-CPU-Clock-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System2#
FontColor=#PrimaryColor#
W=68
X=0r
Y=0r
Hidden=#SLSCCA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSCC "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-CPU-Temp]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System3#
W=115
X=70r
Y=0r
Hidden=#SLSCTUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSCT "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-CPU-Temp-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System3#
FontColor=#PrimaryColor#
W=115
X=0r
Y=0r
Hidden=#SLSCTA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSCT "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Usage]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System4#
W=70
X=120r
Y=0r
Hidden=#SLSGUUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGU "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Usage-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System4#
FontColor=#PrimaryColor#
W=70
X=0r
Y=0r
Hidden=#SLSGUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGU "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Clock]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System5#
W=70
X=75r
Y=0r
Hidden=#SLSGCUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGC "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Clock-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System5#
FontColor=#PrimaryColor#
W=70
X=0r
Y=0r
Hidden=#SLSGCA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGC "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Memory-Clock]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System6#
W=125
X=180
Y=25r
Hidden=#SLSGMCUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Memory-Clock-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System6#
FontColor=#PrimaryColor#
W=125
X=0r
Y=0r
Hidden=#SLSGMCA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Memory-Usage]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System12#
W=127
X=130r
Y=0r
Hidden=#SLSGMCUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY2 "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Memory-Usage-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System12#
FontColor=#PrimaryColor#
W=127
X=0r
Y=0r
Hidden=#SLSGMCA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Voltage]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System7#
W=82
X=130r
Y=0r
Hidden=#SLSGVUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGV "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Voltage-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System7#
FontColor=#PrimaryColor#
W=82
X=0r
Y=0r
Hidden=#SLSGVA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGV "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Memory-Usage-Percentage]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System12.5#
W=200
X=180
Y=25r
Hidden=#SLSGMCUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY3 "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB3 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA3 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Memory-Usage-Percentage-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System12.5#
FontColor=#PrimaryColor#
W=200
X=0r
Y=0r
Hidden=#SLSGMCA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY3 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB3 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA3 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Temp]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System8#
W=118
X=205r
Y=0r
Hidden=#SLSGTUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGT "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Temp-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System8#
FontColor=#PrimaryColor#
W=118
X=0r
Y=0r
Hidden=#SLSGTA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGT "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Fan-Speed]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System9#
W=100
X=180
Y=25r
Hidden=#SLSGFSUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGFS "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Fan-Speed-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System9#
FontColor=#PrimaryColor#
W=100
X=0r
Y=0r
Hidden=#SLSGFSA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGFS "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Fan-Speed-RPM]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System13#
W=130
X=105r
Y=0r
Hidden=#SLSGFSUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGFS2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSY2 "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSB2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-GPU-Fan-Speed-RPM-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System13#
FontColor=#PrimaryColor#
W=130
X=0r
Y=0r
Hidden=#SLSGFS2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGFS2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSB2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-RAM-Usage]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System10#
W=73
X=135r
Y=0r
Hidden=#SLSRUUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSRU "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-RAM-Usage-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System10#
FontColor=#PrimaryColor#
W=73
X=0r
Y=0r
Hidden=#SLSRUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSRU "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-SWAP-Usage]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System11#
W=80
X=80r
Y=0r
Hidden=#SLSSUUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSSU "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Statistics-Labels-System-SWAP-Usage-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_L_System11#
FontColor=#PrimaryColor#
W=80
X=0r
Y=0r
Hidden=#SLSSUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSSU "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

;	Detailed Graphs

[Statistics-Detailed-Graphs]
Meter=String
MeterStyle=TEXT
Text=#S_S_S_Title2# #A_C_ISr_ToolTipText#
W=200
X=180
Y=30r

[Statistics-Detailed-Graphs-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_CPU#
W=65
X=180
Y=25r
Hidden=#STGOUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DPGY "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDPHG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDPHG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Detailed-Graphs-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_CPU#
FontColor=#PrimaryColor#
W=65
X=0r
Y=0r
Hidden=#STGO#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DPGY "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDPHG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Detailed-Graphs-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_GPU#
W=60
X=70r
Y=0r
Hidden=#STGOUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DGGY04 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY203 "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY03 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY2 "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDGHG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Detailed-Graphs-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_GPU#
FontColor=#PrimaryColor#
W=60
X=0r
Y=0r
Hidden=#STGO2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DGGY04 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY203 "165r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY03 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY2 "145r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DGGY "-90r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDGHG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Detailed-Graphs-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_WEB#
W=58
X=65r
Y=0r
Hidden=#STGOUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables NDLY "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DNGYY "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DNGY "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDNHG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO3 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Detailed-Graphs-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_WEB#
FontColor=#PrimaryColor#
W=58
X=0r
Y=0r
Hidden=#STGO3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables NDLY "180r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DNGYY "165r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DNGY "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDNHG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO3 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Detailed-Graphs-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_RAM#
W=55
X=65r
Y=0r
Hidden=#STGOUA4#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DMGYY "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DMGY "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDMHG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO4 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Detailed-Graphs-Option-4-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_RAM#
FontColor=#PrimaryColor#
W=55
X=0r
Y=0r
Hidden=#STGO4#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables DMGYY "80r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables DMGY "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDMHG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO4 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Detailed-Graphs-Option-5]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_DISK#
W=45
X=65r
Y=0r
Hidden=#STGOUA5#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D2DYY0 "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DYY4 "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY04 "1r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY03 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY02 "8r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY01 "15r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY0 "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY5 "1r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY4 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY3 "8r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY2 "15r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY "50r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDDHG "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO5 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Statistics-Detailed-Graphs-Option-5-Active]
Meter=String
MeterStyle=BUTTONS
Text=#S_S_S_DISK#
FontColor=#PrimaryColor#
W=45
X=0r
Y=0r
Hidden=#STGO5#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables D2DYY0 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DYY4 -5r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY04 "-105r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY03 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY02 "8r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY01 "15r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY0 "105r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY5 "-105r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY4 "20r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY3 "8r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY2 "15r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables D2DY "105r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SDDHG "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables STGO5 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

;	Bottom Buttons

[Statistics-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Statistics-Back-Page-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #P_P#
StringAlign=Right
X=530
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Statistics" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Statistics-Next-Page-Button]
Meter=String
MeterStyle=BUTTONS
Text=#P_P# >
StringAlign=Right
X=585
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Settings-Statistics3" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]