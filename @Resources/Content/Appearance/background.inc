;	Ashuramaru Bundle Appearance\Background Page

;	This is additional file for panel

;	Last edit date: 19.06.2022

;------------
;	Meters
;------------

[Appearance-Title]
Meter=String
MeterStyle=H2
FontSize=20
Text=#Panel_Appearance_Adjust_Background_Title#:
W=420
X=80
Y=70

;	Classic

[Appearance-Background-A-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Classic
X=90
Y=50r
Hidden=#BTOUA#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables BackgroundImageToChange "Classic" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-A-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Classic
FontColor=255,0,0
X=0r
Y=0r
Hidden=#BTO#

;	Definitive

[Appearance-Background-A-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Definitive
X=100r
Y=0r
Hidden=#BTOUA7#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables BackgroundImageToChange "Definitive" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-A-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Definitive
FontColor=255,0,0
X=0r
Y=0r
Hidden=#BTO7#

;	Modern

[Appearance-Background-B-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Modern
X=90
Y=50r
Hidden=#BTOUA2#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables BackgroundImageToChange "Modern" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-B-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Modern
FontColor=255,0,0
X=0r
Y=0r
Hidden=#BTO2#

;	Rounded

[Appearance-Background-B-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Rounded
X=110r
Y=0r
Hidden=#BTOUA6#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables BackgroundImageToChange "Rounded" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-B-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Rounded
FontColor=255,0,0
X=0r
Y=0r
Hidden=#BTO6#

;	Solid

[Appearance-Background-B-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Solid
X=125r
Y=0r
Hidden=#BTOUA9#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables BackgroundImageToChange "Solid" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "0" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-B-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Solid
FontColor=255,0,0
X=0r
Y=0r
Hidden=#BTO9#

;	Opaque

[Appearance-Background-C-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Opaque
X=90
Y=50r
Hidden=#BTOUA5#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables BackgroundImageToChange "Opaque" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-C-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Opaque
FontColor=255,0,0
X=0r
Y=0r
Hidden=#BTO5#

;	Blurred

[Appearance-Background-C-2]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Blurred
X=112r
Y=0r
Hidden=#BTOUA3#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables BackgroundImageToChange "Opaque" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "Blur" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-C-2-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Blurred
FontColor=255,0,0
X=0r
Y=0r
Hidden=#BTO3#

;	Acrylic

[Appearance-Background-C-3]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Acrylic
X=110r
Y=0r
Hidden=#BTOUA4#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables BackgroundImageToChange "Opaque" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "Acrylic" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-C-3-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Acrylic
FontColor=255,0,0
X=0r
Y=0r
Hidden=#BTO4#

;	Light

[Appearance-Background-D-1]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Light
X=90
Y=50r
Hidden=#BTOUA8#
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables BackgroundImageToChange "Light" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OpaqueBG "None" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA2 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO2 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA3 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO3 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA4 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO4 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA5 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO5 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA6 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO6 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA7 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO7 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA8 "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO8 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTOUA9 "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables BTO9 "1" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Background-D-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=20
Text=Light
FontColor=255,0,0
X=0r
Y=0r
Hidden=#BTO8#