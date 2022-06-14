;	Panel > Appearance page

;------------
;	Meters
;------------

[Appearance-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#A_Desc#
W=410
X=180
Y=40

;	Background Mode

[Background-Mode]
Meter=String
MeterStyle=TEXT
FontColor=#QuaternaryColor#
Text=#A_BG_Title#
X=180
Y=70

[Appearance-Background-Mode-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=Classic
X=180
Y=25r
Hidden=#BTOUA#
ToolTipTitle=#A_BG_Classic#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_BG_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Background-Image "#Classic#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Blank "#Classic-Blank#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header "#Classic-Header#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header-Top "#Classic-Header-Top#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#


[Appearance-Background-Mode-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
Text=Classic
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#BTO#

[Appearance-Background-Mode-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=Modern
X=60r
Y=0r
Hidden=#BTOUA2#
ToolTipTitle=#A_BG_Modern#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_BG_ToolTipText2#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Background-Image "#Modern#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Blank "#Modern-Blank#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header "#Modern-Header#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header-Top "#Modern-Header-Top#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-Mode-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
Text=Modern
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#BTO2#

[Appearance-Background-Mode-Option-6]
Meter=String
MeterStyle=BUTTONS
Text=Rounded
X=60r
Y=0r
Hidden=#BTOUA6#
ToolTipTitle=#A_BG_Rounded#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_BG_ToolTipText3#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Background-Image "#Rounded#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Blank "#Rounded-Blank#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header "#Rounded-Header#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header-Top "#Rounded-Header-Top#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-Mode-Option-6-Active]
Meter=String
MeterStyle=BUTTONS
Text=Rounded
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#BTO6#

[Appearance-Background-Mode-Option-5]
Meter=String
MeterStyle=BUTTONS
Text=Opaque
X=70r
Y=0r
Hidden=#BTOUA5#
ToolTipTitle=#A_BG_Opaque#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_BG_ToolTipText4#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Background-Image "#Opaque#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header-Top "#Opaque-Header-Top#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Blank "#Opaque-Blank#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header "#Opaque-Header#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-Mode-Option-5-Active]
Meter=String
MeterStyle=BUTTONS
Text=Opaque
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#BTO5#

[Appearance-Background-Mode-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=Blurred
X=65r
Y=0r
Hidden=#BTOUA3#
ToolTipTitle=#A_BG_Blurred#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_BG_ToolTipText5#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Background-Image "#Opaque#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Blank "#Opaque-Blank#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header "#Opaque-Header#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header-Top "#Opaque-Header-Top#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "Blur" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-Mode-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
Text=Blurred
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#BTO3#

[Appearance-Background-Mode-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=Acrylic
X=65r
Y=0r
Hidden=#BTOUA4#
ToolTipTitle=#A_BG_Acrylic#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_BG_ToolTipText6#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Background-Image "#Opaque#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Blank "#Opaque-Blank#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header "#Opaque-Header#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header-Top "#Opaque-Header-Top#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "Acrylic" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-Mode-Option-4-Active]
Meter=String
MeterStyle=BUTTONS
Text=Acrylic
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#BTO4#

[Appearance-Background-Mode-Option-7]
Meter=String
MeterStyle=BUTTONS
Text=Definitive
X=180
Y=25r
Hidden=#BTOUA7#
ToolTipTitle=#A_BG_Definitive#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_BG_ToolTipText7#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Background-Image "#Definitive#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Blank "#Definitive-Blank#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header "#Definitive-Header#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header-Top "#Definitive-Header-Top#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-Mode-Option-7-Active]
Meter=String
MeterStyle=BUTTONS
Text=Definitive
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#BTO7#

[Appearance-Background-Mode-Option-8]
Meter=String
MeterStyle=BUTTONS
Text=Light
X=75r
Y=0r
Hidden=#BTOUA8#
ToolTipTitle=#A_BG_Light#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_BG_ToolTipText8#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Background-Image "#Light#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Blank "#Light-Blank#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header "#Light-Header#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header-Top "#Light-Header-Top#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-Mode-Option-8-Active]
Meter=String
MeterStyle=BUTTONS
Text=Light
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#BTO8#

[Appearance-Background-Mode-Option-9]
Meter=String
MeterStyle=BUTTONS
Text=Soilid
X=45r
Y=0r
Hidden=#BTOUA9#
ToolTipTitle=#A_BG_Solid#
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_BG_ToolTipText9#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables Background-Image "#Solid#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Blank "#Solid-Blank#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header "#Solid-Header#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Background-Image-Header-Top "#Solid-Header-Top#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "0" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-Mode-Option-9-Active]
Meter=String
MeterStyle=BUTTONS
Text=Solid
FontColor=#PrimaryColor#
X=0r
Y=0r
Hidden=#BTO9#

;	System Icon

[Appearance-System-Icon]
Meter=String
MeterStyle=TEXT
FontColor=#QuaternaryColor#
Text=System Icon
X=180
Y=30r

[Appearance-System-Icon-Option-1]
Meter=String
MeterStyle=BUTTONS
Text=NVIDIA
X=180
Y=25r
Hidden=#ASIUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SystemIcon "NVIDIA" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI4 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Appearance-System-Icon-Option-1-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=NVIDIA
X=0r
Y=0r
Hidden=#ASI#

[Appearance-System-Icon-Option-2]
Meter=String
MeterStyle=BUTTONS
Text=AMD
X=60r
Y=0r
Hidden=#ASIUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SystemIcon "AMD" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI4 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Appearance-System-Icon-Option-2-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=AMD
X=0r
Y=0r
Hidden=#ASI2#

[Appearance-System-Icon-Option-3]
Meter=String
MeterStyle=BUTTONS
Text=INTEL
X=45r
Y=0r
Hidden=#ASIUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SystemIcon "INTEL" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI4 "1" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Appearance-System-Icon-Option-3-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=INTEL
X=0r
Y=0r
Hidden=#ASI3#

[Appearance-System-Icon-Option-4]
Meter=String
MeterStyle=BUTTONS
Text=NONE
X=55r
Y=0r
Hidden=#ASIUA4#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables SystemIcon "NONE" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASIUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ASI4 "0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!Refresh #CURRENTCONFIG#][!RefreshGroup "Ashuramaru-Bundle Statistics"][!RefreshGroup "Ashuramaru-Bundle Statistics-Detailed"]

[Appearance-System-Icon-Option-4-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=NONE
X=0r
Y=0r
Hidden=#ASI4#

;	Bottom Buttons

[Appearance-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

[Appearance-Colors-Button]
Meter=String
MeterStyle=BUTTONS
Text=#A_Change_Colors#
W=95
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Appearance-Colors" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

[Appearance-Fonts-Button]
Meter=String
MeterStyle=BUTTONS
Text=#A_Change_Fonts#
W=90
X=100r
Y=0r
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Appearance-Fonts" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]