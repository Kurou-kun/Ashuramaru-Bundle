;	Panel > Appearance > Colors page

;------------
;	Meters
;------------

[Appearance-Colors-Description]
Meter=String
MeterStyle=DESCRIPTION
Text=#A_C_Desc#
ClipString=2
ClipStringW=400
W=410
X=180
Y=40

[Appearance-Colors-Panel-Title]
Meter=String
MeterStyle=H2
FontSize=11
Text=#A_C_Panel_Title#
W=110
X=180
Y=45r

[Appearance-Colors-Illustro-Title]
Meter=String
MeterStyle=H2
FontSize=11
Text=#A_C_Illustro_Title#
W=130
X=115r
Y=0r

[Appearance-Colors-Other-Title]
Meter=String
MeterStyle=H2
FontSize=11
Text=#A_C_Other_Title#
W=120
X=135r
Y=0r

;	Panel Primary Color

[Appearance-Colors-Primary]
Meter=String
MeterStyle=H3
Text=Primary
X=180
Y=30r

[Appearance-Colors-Primary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#PrimaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Primary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Primary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_P_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "PrimaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables PrimaryColor "255,0,0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Panel Secondary Color

[Appearance-Colors-Secondary]
Meter=String
MeterStyle=H3
Text=Secondary
X=180
Y=35r

[Appearance-Colors-Secondary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#SecondaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Secondary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Secondary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_S_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "SecondaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SecondaryColor "255,255,255" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]


;	Panel Tertiary Color

[Appearance-Colors-Tertiary]
Meter=String
MeterStyle=H3
Text=Tertiary
X=180
Y=35r

[Appearance-Colors-Tertiary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#TertiaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Tertiary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Tertiary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_T_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "TertiaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables TertiaryColor "255,255,255" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Panel Quaternary Color

[Appearance-Colors-Quaternary]
Meter=String
MeterStyle=H3
Text=Quaternary
X=180
Y=35r

[Appearance-Colors-Quaternary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#QuaternaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Quaternary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Quaternary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_Q_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "QuaternaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables QuaternaryColor "255,255,255" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Panel Quinary Color

[Appearance-Colors-Quinary]
Meter=String
MeterStyle=H3
Text=Quinary
X=180
Y=35r

[Appearance-Colors-Quinary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#QuinaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Quinary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Quinary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_Qu_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "QuinaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables QuinaryColor "255,0,0" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Panel Senary Color

[Appearance-Colors-Senary]
Meter=String
MeterStyle=H3
Text=Senary
X=180
Y=35r

[Appearance-Colors-Senary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#SenaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Senary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Senary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_Sr_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "SenaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SenaryColor "255,255,255" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]

;	Panel Septenary Color

[Appearance-Colors-Septenary]
Meter=String
MeterStyle=H3
Text=Septenary
X=180
Y=35r

[Appearance-Colors-Septenary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#SeptenaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Septenary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Septenary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_Se_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "SeptenaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables SeptenaryColor "255,255,255" "#@#\Addons\variables.inc"][!Refresh #CURRENTCONFIG#]


;	Illustro Primary Color

[Appearance-Colors-Illustro-Primary]
Meter=String
MeterStyle=H3
Text=Primary
X=125r
Y=115

[Appearance-Colors-Illustro-Primary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#IPrimaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Illustro-Primary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Primary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_IP_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "IPrimaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables IPrimaryColor "255,255,255" "#@#\Addons\variables.inc"]#Refreshes#

;	Illustro Secondary Color

[Appearance-Colors-Illustro-Secondary]
Meter=String
MeterStyle=H3
Text=Secondary
X=0r
Y=35r

[Appearance-Colors-Illustro-Secondary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#ISecondaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Illustro-Secondary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Secondary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_IS_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "ISecondaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables ISecondaryColor "255,255,255" "#@#\Addons\variables.inc"]#Refreshes#

;	Illustro Tertiary Color

[Appearance-Colors-Illustro-Tertiary]
Meter=String
MeterStyle=H3
Text=Tertiary
X=0r
Y=35r

[Appearance-Colors-Illustro-Tertiary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#ITertiaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Illustro-Tertiary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Tertiary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_IT_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "ITertiaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables ITertiaryColor "255,255,255" "#@#\Addons\variables.inc"]#Refreshes#

;	Illustro Quaternary Color

[Appearance-Colors-Illustro-Quaternary]
Meter=String
MeterStyle=H3
Text=Quaternary
X=0r
Y=35r

[Appearance-Colors-Illustro-Quaternary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#IQuaternaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Illustro-Quaternary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Quaternary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_IQ_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "IQuaternaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables IQuaternaryColor "255,0,0" "#@#\Addons\variables.inc"]#Refreshes#

;	Illustro Quinary Color

[Appearance-Colors-Illustro-Quinary]
Meter=String
MeterStyle=H3
Text=Quinary
X=0r
Y=35r

[Appearance-Colors-Illustro-Quinary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#IQuinaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Illustro-Quinary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Quinary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_IQu_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "IQuinaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables IQuinaryColor "255,255,255" "#@#\Addons\variables.inc"]#Refreshes#

;	Illustro Senary Color

[Appearance-Colors-Illustro-Senary]
Meter=String
MeterStyle=H3
Text=Senary
X=0r
Y=35r

[Appearance-Colors-Illustro-Senary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#ISenaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Illustro-Senary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Senary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_ISr_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "ISenaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables ISenaryColor "255,0,0" "#@#\Addons\variables.inc"]#Refreshes#

;	Illustro Septenary Color

[Appearance-Colors-Illustro-Septenary]
Meter=String
MeterStyle=H3
Text=Septenary
X=0r
Y=35r

[Appearance-Colors-Illustro-Septenary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#ISeptenaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Illustro-Septenary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Septenary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_ISe_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "ISeptenaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables ISeptenaryColor "255,255,255" "#@#\Addons\variables.inc"]#Refreshes#

;	Other Primary Color

[Appearance-Colors-Other-Primary]
Meter=String
MeterStyle=H3
Text=Primary
X=125r
Y=115

[Appearance-Colors-Other-Primary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#OPrimaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Other-Primary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Primary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_OP_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "OPrimaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables OPrimaryColor "255,0,0" "#@#\Addons\variables.inc"]#Refreshes#

;	Other Secondary Color

[Appearance-Colors-Other-Secondary]
Meter=String
MeterStyle=H3
Text=Secondary
X=0r
Y=35r

[Appearance-Colors-Other-Secondary-Image]
Meter=Image
ImageName=#@#\Images\Pictures\Color-Preview.png
ImageTint=#OSecondaryColor#
X=90r
Y=-5r
W=25
H=25

[Appearance-Colors-Other-Secondary-Pick]
Meter=Image
SolidColor=50,50,50,50
X=-90r
Y=0r
W=115
H=25
ToolTipTitle=Secondary Color
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="- #A_C_OS_ToolTipText#"
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Color-To-Paint "OSecondaryColor" "#@#\Addons\variables.inc"][!DeactivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!ActivateConfig "Ashuramaru-Bundle\Panel\ColorPicker" "ColorPicker.ini"][!Redraw]
RightMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables OSecondaryColor "" "#@#\Addons\variables.inc"]#Refreshes#

[Appearance-Seperator]
Meter=Image
SolidColor=255,255,255,30
X=175
Y=338
W=413
H=1

;	Bottom

[Panel-Back-Button]
Meter=String
MeterStyle=BUTTONS
Text=< #SB_Appearance#
X=180
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\Click.wav"][!WriteKeyValue Variables PageName "Appearance" "#@#\Addons\variables.inc"]#Refreshes#

[Default-Settings]
Meter=String
MeterStyle=BUTTONS
FontSize=10
FontColor=#SenaryColor#
Text=#A_C_Default_Colors#
W=95
X=140r
Y=345
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables PrimaryColor "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SecondaryColor "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TertiaryColor "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QuaternaryColor "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QuinaryColor "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SenaryColor "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SeptenaryColor "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IPrimaryColor "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISecondaryColor "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ITertiaryColor "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IQuaternaryColor "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IQuinaryColor "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISenaryColor "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISeptenaryColor "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OPrimaryColor "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OSecondaryColor "" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-2-No-Active "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-2-Is-Active "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-1-No-Active "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-1-Is-Active "1" "#@#\Addons\variables.inc"]#Refreshes#

;	Presets

[Preset-1]
Meter=String
MeterStyle=BUTTONS
Text=#A_C_Presets# 1
W=57
X=140r
Y=0r
Hidden=#Preset-1-No-Active#
ToolTipTitle=#A_C_Presets# 1
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_C_Presets_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Preset-1-No-Active "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-1-Is-Active "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-2-No-Active "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-2-Is-Active "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Primary "#PrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Secondary "#SecondaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Tertiary "#TertiaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Quaternary "#QuaternaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Quinary "#QuinaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Senary "#SenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Septenary "#SeptenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-IPrimary "#IPrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-ISecondary "#ISecondaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-ITertiary "#ITertiaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-IQuaternary "#IQuaternaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-IQuinary "#IQuinaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-ISenary "#ISenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-ISeptenary "#ISeptenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-OPrimary "#OPrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-OSecondary "#OSecondaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PrimaryColor "#Preset1-Primary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SecondaryColor "#Preset1-Secondary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TertiaryColor "#Preset1-Tertiary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QuaternaryColor "#Preset1-Quaternary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QuinaryColor "#Preset1-Quinary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SenaryColor "#Preset1-Senary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SeptenaryColor "#Preset1-Septenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IPrimaryColor "#Preset1-IPrimary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISecondaryColor "#Preset1-ISecondary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ITertiaryColor "#Preset1-ITertiary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IQuaternaryColor "#Preset1-IQuaternary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IQuinaryColor "#Preset1-IQuinary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISenaryColor "#Preset1-ISenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISeptenaryColor "#Preset1-ISeptenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OPrimaryColor "#Preset1-OPrimary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OSecondaryColor "#Preset1-OSecondary#" "#@#\Addons\variables.inc"]#Refreshes#
RightMouseUpAction=[!WriteKeyValue Variables Preset1-Primary "#PrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Secondary "#SecondaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Tertiary "#TertiaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Quaternary "#QuaternaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Quinary "#QuinaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Senary "#SenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Septenary "#SeptenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-IPrimary "#IPrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-ISecondary "#ISecondaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-ITertiary "#ITertiaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-IQuaternary "#IQuaternaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-IQuinary "#IQuinaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-ISenary "#ISenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-ISeptenary "#ISeptenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-OPrimary "#OPrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-OSecondary "#OSecondaryColor#" "#@#\Addons\variables.inc"]#Refreshes#
MiddleMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Preset1-Primary "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Secondary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Tertiary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Quaternary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Quinary "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Senary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-Septenary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-IPrimary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-ISecondary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-ITertiary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-IQuaternary "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-IQuinary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-ISenary "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-ISeptenary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-OPrimary "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset1-OSecondary "" "#@#\Addons\variables.inc"]#Refreshes#

[Preset-1-Active]
Meter=String
MeterStyle=BUTTONS
FontSize=10
FontColor=#PrimaryColor#
Text=#A_C_Presets# 1
W=57
X=0r
Y=0r
Hidden=#Preset-1-Is-Active#
ToolTipTitle=#A_C_Presets# 1
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_C_Presets_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Preset-1-No-Active "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-1-Is-Active "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-2-No-Active "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-2-Is-Active "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PrimaryColor "#PresetSaved-Primary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SecondaryColor "#PresetSaved-Secondary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TertiaryColor "#PresetSaved-Tertiary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QuaternaryColor "#PresetSaved-Quaternary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QuinaryColor "#PresetSaved-Quinary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SenaryColor "#PresetSaved-Senary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SeptenaryColor "#PresetSaved-Septenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IPrimaryColor "#PresetSaved-IPrimary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISecondaryColor "#PresetSaved-ISecondary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ITertiaryColor "#PresetSaved-ITertiary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IQuaternaryColor "#PresetSaved-IQuaternary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IQuinaryColor "#PresetSaved-IQuinary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISenaryColor "#PresetSaved-ISenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISeptenaryColor "#PresetSaved-ISeptenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OPrimaryColor "#PresetSaved-OPrimary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OSecondaryColor "#PresetSaved-OSecondary#" "#@#\Addons\variables.inc"]#Refreshes#

[Preset-2]
Meter=String
MeterStyle=BUTTONS
FontSize=10
Text=#A_C_Presets# 2
Hidden=#Preset-2-No-Active#
W=57
X=65r
Y=0r
ToolTipTitle=#A_C_Presets# 2
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_C_Presets_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Preset-2-No-Active "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-2-Is-Active "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-1-No-Active "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-1-Is-Active "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Primary "#PrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Secondary "#SecondaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Tertiary "#TertiaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Quaternary "#QuaternaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Quinary "#QuinaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Senary "#SenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-Septenary "#SeptenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-IPrimary "#IPrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-ISecondary "#ISecondaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-ITertiary "#ITertiaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-IQuaternary "#IQuaternaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-IQuinary "#IQuinaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-ISenary "#ISenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-ISeptenary "#ISeptenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-OPrimary "#OPrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PresetSaved-OSecondary "#OSecondaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PrimaryColor "#Preset2-Primary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SecondaryColor "#Preset2-Secondary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TertiaryColor "#Preset2-Tertiary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QuaternaryColor "#Preset2-Quaternary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QuinaryColor "#Preset2-Quinary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SenaryColor "#Preset2-Senary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SeptenaryColor "#Preset2-Septenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IPrimaryColor "#Preset2-IPrimary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISecondaryColor "#Preset2-ISecondary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ITertiaryColor "#Preset2-ITertiary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IQuaternaryColor "#Preset2-IQuaternary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IQuinaryColor "#Preset2-IQuinary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISenaryColor "#Preset2-ISenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISeptenaryColor "#Preset2-ISeptenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OPrimaryColor "#Preset2-OPrimary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OSecondaryColor "#Preset2-OSecondary#" "#@#\Addons\variables.inc"]#Refreshes#
RightMouseUpAction=[!WriteKeyValue Variables Preset2-Primary "#PrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Secondary "#SecondaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Tertiary "#TertiaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Quaternary "#QuaternaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Quinary "#QuinaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Senary "#SenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Septenary "#SeptenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-IPrimary "#IPrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-ISecondary "#ISecondaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-ITertiary "#ITertiaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-IQuaternary "#IQuaternaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-IQuinary "#IQuinaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-ISenary "#ISenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-ISeptenary "#ISeptenaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-OPrimary "#OPrimaryColor#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-OSecondary "#OSecondaryColor#" "#@#\Addons\variables.inc"][!Refresh "*"][!Redraw]
MiddleMouseDownAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Preset2-Primary "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Secondary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Tertiary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Quaternary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Quinary "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Senary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-Septenary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-IPrimary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-ISecondary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-ITertiary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-IQuaternary "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-IQuinary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-ISenary "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-ISeptenary "255,255,255" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-OPrimary "255,0,0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset2-OSecondary "" "#@#\Addons\variables.inc"]#Refreshes#

[Preset-2-Active]
Meter=String
MeterStyle=BUTTONS
FontColor=#PrimaryColor#
Text=#A_C_Presets# 2
Hidden=#Preset-2-Is-Active#
W=57
X=0r
Y=0r
ToolTipTitle=#A_C_Presets# 2
ToolTipIcon=#@#\Images\Icons\Ashuramaru-Bundle.ico
ToolTipType=1
ToolTipText="#A_C_Presets_ToolTipText#"
LeftMouseUpAction=[Play "#@#\Sounds\Buttons\click.wav"][!WriteKeyValue Variables Preset-2-No-Active "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-2-Is-Active "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-1-No-Active "0" "#@#\Addons\variables.inc"][!WriteKeyValue Variables Preset-1-Is-Active "1" "#@#\Addons\variables.inc"][!WriteKeyValue Variables PrimaryColor "#PresetSaved-Primary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SecondaryColor "#PresetSaved-Secondary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables TertiaryColor "#PresetSaved-Tertiary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QuaternaryColor "#PresetSaved-Quaternary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables QuinaryColor "#PresetSaved-Quinary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SenaryColor "#PresetSaved-Senary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables SeptenaryColor "#PresetSaved-Septenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IPrimaryColor "#PresetSaved-IPrimary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISecondaryColor "#PresetSaved-ISecondary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ITertiaryColor "#PresetSaved-ITertiary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IQuaternaryColor "#PresetSaved-IQuaternary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables IQuinaryColor "#PresetSaved-IQuinary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISenaryColor "#PresetSaved-ISenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables ISeptenaryColor "#PresetSaved-ISeptenary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OPrimaryColor "#PresetSaved-OPrimary#" "#@#\Addons\variables.inc"][!WriteKeyValue Variables OSecondaryColor "#PresetSaved-OSecondary#" "#@#\Addons\variables.inc"]#Refreshes#
