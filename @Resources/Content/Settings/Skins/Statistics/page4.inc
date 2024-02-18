;	Ashuramaru Bundle Settings\Skins\Statistics 3rd Page

;	This is additional file for panel

;	Last edit date: 23.06.2022

;------------
;	Meters
;------------

;	Statistics Network Segment

[Settings-Statistics-Network-Segment]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Network_Segment#
W=430
X=70
Y=60

[Settings-Statistics-Network-Segment-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Network_Segment_Latency#
W=100
X=70
Y=40r
Hidden=#SLNLUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNL "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNLY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNLB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNLUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNLA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]


[Settings-Statistics-Network-Segment-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Network_Segment_Latency#
W=100
X=0r
Y=0r
Hidden=#SLNLA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNL "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNLY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNLB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNLUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNLA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Network-Segment-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Network_Segment_Upload#
W=95
X=120r
Y=0r
Hidden=#SLNUUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNU "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNUY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNUB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNUUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Network-Segment-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Network_Segment_Upload#
W=95
X=0r
Y=0r
Hidden=#SLNUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNU "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNUY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNUB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNUUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Network-Segment-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Network_Segment_Download#
W=130
X=110r
Y=0r
Hidden=#SLNDUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SND "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNDY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNDB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNDUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNDA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Network-Segment-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Network_Segment_Download#
W=130
X=0r
Y=0r
Hidden=#SLNDA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SND "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNDY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNDB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNDUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNDA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Network-Segment-4]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Network_Segment_Speed#
W=80
X=145r
Y=0r
Hidden=#SLNSUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNS "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNSY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNSB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNSUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNSA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Network-Segment-4-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Network_Segment_Speed#
W=80
X=0r
Y=0r
Hidden=#SLNSA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNS "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNSY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNSB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNSUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNSA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Network-Segment-5]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_Network_Segment_Traffic#
W=85
X=100r
Y=0r
Hidden=#SLNTUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNT "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNTUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNTA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-Network-Segment-5-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_Network_Segment_Traffic#
W=85
X=0r
Y=0r
Hidden=#SLNTA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SNT "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SNTB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLNTA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

;	Statistics System CPU Segment

[Settings-Statistics-System-CPU-Segment]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_CPU_Segment#
W=450
X=70
Y=50r

[Settings-Statistics-System-CPU-Segment-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_CPU_Segment_Usage#
W=80
X=70
Y=40r
Hidden=#SLSCUUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSCU "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCUY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCUB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCUUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-CPU-Segment-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_CPU_Segment_Usage#
W=80
X=0r
Y=0r
Hidden=#SLSCUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSCU "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCUY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCUB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCUUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-CPU-Segment-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_CPU_Segment_Clock#
W=75
X=95r
Y=0r
Hidden=#SLSCCUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSCC "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-CPU-Segment-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_CPU_Segment_Clock#
W=75
X=0r
Y=0r
Hidden=#SLSCCA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSCC "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCCA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-CPU-Segment-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_CPU_Segment_Temp#
W=75
X=95r
Y=0r
Hidden=#SLSCTUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSCT "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-CPU-Segment-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_CPU_Segment_Temp#
W=75
X=0r
Y=0r
Hidden=#SLSCTA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSCT "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSCTA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

;	Statistics System GPU Segment

[Settings-Statistics-System-GPU-Segment]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment#
W=450
X=70
Y=50r

[Settings-Statistics-System-GPU-Segment-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Usage#
W=80
X=70
Y=40r
Hidden=#SLSGUUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGU "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Usage#
W=80
X=0r
Y=0r
Hidden=#SLSGUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGU "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Clock#
W=75
X=95r
Y=0r
Hidden=#SLSGCUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGC "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Clock#
W=75
X=0r
Y=0r
Hidden=#SLSGCA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGC "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGCA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Temp#
W=75
X=85r
Y=0r
Hidden=#SLSGTUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGT "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Temp#
W=75
X=0r
Y=0r
Hidden=#SLSGTA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGT "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGTA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-4]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Memory_Clock#
W=190
X=85r
Y=0r
Hidden=#SLSGMCUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-4-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Memory_Clock#
W=190
X=0r
Y=0r
Hidden=#SLSGMCA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-5]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Memory_Usage#
W=195
X=200r
Y=0r
Hidden=#SLSGMCUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY2 "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]


[Settings-Statistics-System-GPU-Segment-5-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Memory_Usage#
W=195
X=0r
Y=0r
Hidden=#SLSGMCA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-6]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Memory_Usage_%#
W=225
X=70
Y=40r
Hidden=#SLSGMCUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY3 "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB3 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA3 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-6-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Memory_Usage_%#
W=225
X=0r
Y=0r
Hidden=#SLSGMCA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGMC3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCY3 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCB3 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGMCA3 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-7]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Fan_Speed#
W=130
X=240r
Y=0r
Hidden=#SLSGFSUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGFS "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-7-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Fan_Speed#
W=130
W=130
X=0r
Y=0r
Hidden=#SLSGFSA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGFS "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]


[Settings-Statistics-System-GPU-Segment-8]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Fan_Speed_RPM#
W=200
X=155r
Y=0r
Hidden=#SLSGFSUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGFS2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSY2 "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSB2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-8-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Fan_Speed_RPM#
W=200
X=0r
Y=0r
Hidden=#SLSGFS2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGFS2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSB2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGFSA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-9]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Voltage#
W=100
X=70
Y=40r
Hidden=#SLSGVUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGV "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]


[Settings-Statistics-System-GPU-Segment-9-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Voltage#
W=100
X=0r
Y=0r
Hidden=#SLSGVA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSGV "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSGVA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-10]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Ram_%#
W=90
X=115r
Y=0r
Hidden=#SLSRUUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSRU "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-10-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Ram_%#
W=90
X=0r
Y=0r
Hidden=#SLSRUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSRU "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-11]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Ram#
W=60
X=105r
Y=0r
Hidden=#SLSRUUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSRU2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUY2 "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUB2 "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUA2 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-11-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Ram#
W=60
X=0r
Y=0r
Hidden=#SLSRUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSRU2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUY2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUB2 "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSRUA2 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-12]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Swap#
W=70
X=80r
Y=0r
Hidden=#SLSSUUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSSU "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-12-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_GPU_Segment_Swap#
W=70
X=0r
Y=0r
Hidden=#SLSSUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSSU "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSSUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-13]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=#Panel_Content_Settings_Skins_Statistics_System_Segment_Framerate#
W=130
X=80r
Y=0r
Hidden=#SLSFUUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSFU "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSFUY "10r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSFUB "16r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSFUUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSFUA "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]

[Settings-Statistics-System-GPU-Segment-13-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
FontColor=255,0,0
Text=#Panel_Content_Settings_Skins_Statistics_System_Segment_Framerate#
W=130
X=0r
Y=0r
Hidden=#SLSFUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SLSFU "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSFUY "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSFUB "0r" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSFUUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SLSFUA "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"]


;	Previous Page Area

[Settings-VectorCopy-Previous-Page-Area]
Meter=Image
SolidColor=100,100,100,10
W=50
H=542
X=742
Y=49
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,40][!SetOption Settings-VectorCopy-Previous-Page-Icon ImageTint 200,200,200,60][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-VectorCopy-Previous-Page-Icon]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor 100,100,100,10][!SetOption Settings-VectorCopy-Previous-Page-Icon ImageTint 200,200,200,30][!UpdateMeter #CURRENTSECTION#][!UpdateMeter Settings-VectorCopy-Previous-Page-Icon]
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables CurrentPage "Settings\Skins\Statistics\page3" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Settings-VectorCopy-Previous-Page-Icon]
Meter=Image
ImageName=#@#\Images\Icons\left-arrow.png
ImageTint=200,200,200,30
W=30
H=30
X=10r
Y=230r