;	This file containts all styles

[Variables]

;------------
;	Styles
;------------

;	Headers

[H1]
StringCase=Upper
StringStyle=#StringStylePM#
StringEffect=#StringEffectPM#

FontEffectColor=0,0,0,50
FontColor=255,0,0
FontFace=#PanelFont#
FontSize=15

AntiAlias=#AntiAliasingPM#
ClipString=1

[H2]
StringCase=Upper
StringStyle=#StringStylePM#
StringEffect=#StringEffectPM#

FontEffectColor=0,0,0,50
FontColor=255,255,255
FontFace=#PanelFont#
FontSize=14

AntiAlias=#AntiAliasingPM#
ClipString=1

[H3]
StringCase=Upper
StringStyle=#StringStylePM#
StringEffect=#StringEffectPM#

FontEffectColor=0,0,0,50
FontColor=255,255,255
FontFace=#PanelFont#
FontSize=10

AntiAlias=#AntiAliasingPM#
ClipString=1

[H4]
StringAlign=Center
StringCase=Upper
StringStyle=#StringStylePM#
StringEffect=#StringEffectPM#

FontEffectColor=0,0,0,50
FontColor=#IPrimaryColor#
FontFace=#IllustroFont#
FontSize=10

AntiAlias=#AntiAliasingPM#
ClipString=1

;	Texts

[TEXT]
StringCase=None
StringStyle=#StringStylePM#
StringEffect=#StringEffectPM#

FontEffectColor=0,0,0,20
FontColor=255,255,255
FontFace=#PanelFont#
FontSize=12

AntiAlias=#AntiAliasingPM#
ClipString=1

[LEFT-ALIGN]
StringAlign=Left
StringCase=None
StringStyle=#StringStylePM#
StringEffect=#StringEffectPM#

FontEffectColor=0,0,0,20
FontColor=#ISecondaryColor#
FontFace=#IllustroFont#
FontSize=8

AntiAlias=#AntiAliasingPM#
ClipString=1

[RIGHT-ALIGN]
StringAlign=Right
StringCase=None
StringStyle=#StringStylePM#
StringEffect=#StringEffectPM#

FontEffectColor=0,0,0,20
FontColor=#ITertiaryColor#
FontFace=#IllustroFont#
FontSize=8

AntiAlias=#AntiAliasingPM#
ClipString=1
Padding=0,0,3,0

[CENTER-ALIGN]
StringAlign=Center
StringCase=None
StringStyle=#StringStylePM#
StringEffect=#StringEffectPM#

FontEffectColor=0,0,0,20
FontColor=#ITertiaryColor#
FontFace=#IllustroFont#
FontSize=8

AntiAlias=#AntiAliasingPM#
ClipString=1

[DESCRIPTION]
StringCase=None
StringEffect=#StringEffectPM#

FontEffectColor=0,0,0,20
FontColor=255,255,255
FontFace=#PanelFont#
FontSize=15

AntiAlias=#AntiAliasingPM#
ClipString=1

;	Special

[BUTTONS]
StringCase=None
StringStyle=#StringStylePM#
StringEffect=#StringEffectPM#

FontEffectColor=0,0,0,20
FontColor=255,255,255
FontFace=#PanelFont#
SolidColor=150,150,150,20
FontSize=10

AntiAlias=#AntiAliasingPM#
ClipString=1

[BAR]
BarColor=#IQuaternaryColor#
BarOrientation=HORIZONTAL
SolidColor=255,255,255,15

[CORE-BAR]
BarColor=#IQuaternaryColor#
BarOrientation=VERTICAL

[GRAPH]
W=191
H=39
AutoScale=1
AntiAlias=#AntiAliasingPM#
LineColor=#ISenaryColor#
LineColor2=255,255,255,255
LineColor3=0,255,0,255
LineWidth=1
LineCount=1
GraphStart=Right

[SEPERATOR]
SolidColor=#ISeptenaryColor#,50

;	Update Checker

[Style-Update-Checker-Connecting]
StringAlign=Center
FontColor=255,255,255
Text="#Panel_Update_Checking_For_Updates#"

[Style-Update-Checker-Yes]
StringAlign=Center
FontColor=255,255,255
Text="v.[Measure-Current-Release-Version] #Panel_Update_New#"
LeftMouseUpAction=["https://www.deviantart.com/kurou--kun/gallery/81684800/ashuramaru-bundle-releases"]
DynamicVariables=1

[Style-Update-Checker-No]
StringAlign=Center
FontColor=255,255,255
Text="#Panel_Update_Up_To_Date#"

[Style-Update-Checker-Dev]
StringAlign=Center
FontColor=255,255,255
Text="#Panel_Update_Development_Version# [#Build#]"
