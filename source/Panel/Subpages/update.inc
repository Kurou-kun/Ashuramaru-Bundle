;	Panel > Update page

;------------
;	Styles
;------------

;	Update Checker-Styles

[Style-Update-Checker-Connecting]
StringAlign=Center
FontColor=#QuaternaryColor#
Text="#U_Connecting#"

[Style-Update-Checker-Yes]
StringAlign=Center
FontColor=#QuaternaryColor#
Text="v.[Measure-Current-Release-Version] #U_Update#"
LeftMouseUpAction=["https://www.deviantart.com/kurou--kun/gallery/81684800/ashuramaru-bundle-releases"]
DynamicVariables=1

[Style-Update-Checker-No]
StringAlign=Center
FontColor=#QuaternaryColor#
Text="#U_UpToDate#"

[Style-Update-Checker-Dev]
StringAlign=Center
FontColor=#QuaternaryColor#
Text="#U_Dev#"

;------------
;	Measures
;------------

[Measure-Version-Absolute]
Measure=String
String=#version#
Substitute=".":"","-d":""

[Measure-IP-Address]
Measure=Plugin
Plugin=WebParser
UpdateRate=1000
Url="https://github.com/Kurou-kun/Ashuramaru-Bundle/blob/main/CurrentReleaseVer.txt"
RegExp="(?siU)<td id="LC1" class="blob-code blob-code-inner js-file-line">(.*)</td>.*"
FinishAction=[!EnableMeasure Measure-Version-Check]
OnConnectErrorAction=[!WriteKeyValue Variables ErrorCode "100" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NotificationsContent "error" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"]
OnRegExpErrorAction=[!WriteKeyValue Variables ErrorCode "101" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NotificationsContent "error" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"]
OnDownloadErrorAction=[!WriteKeyValue Variables ErrorCode "102" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NotificationsContent "error" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"]

[Measure-Current-Release-Version]
Measure=Plugin
Plugin=WebParser
Url=[Measure-IP-Address]
StringIndex=1

[Measure-Current-Release-Version-Absolute]
Measure=Plugin
Plugin=WebParser
Url=[Measure-IP-Address]
StringIndex=1
Substitute=".":"","-d":""

[Measure-Version-Check]
Measure=Calc
Formula=[Measure-Current-Release-Version-Absolute] - [Measure-Version-Absolute]
IfAboveValue=0
IfAboveAction=[!SetOption Update-Checker-String MeterStyle "TEXT | Style-Update-Checker-Yes"][!SetOption Update-Download-Button Hidden "0"][!Redraw]
IfEqualValue=0
IfEqualAction=[!SetOption Update-Checker-String MeterStyle "TEXT | Style-Update-Checker-No"][!SetOption Update-Download-Button Hidden "1"][!Redraw]
IfBelowValue=0
IfBelowAction=[!SetOption Update-Checker-String MeterStyle "TEXT | Style-Update-Checker-Dev"][!SetOption Update-Download-Button Hidden "1"][!Redraw]
DynamicVariables=1
Disabled=1

;------------
;	Meters
;------------

;	Content

[Update-Current-Version-Label]
Meter=String
MeterStyle=H3
FontSize=12
StringAlign=Center
Text=#U_Current_Version#
X=375
Y=50

[Update-Current-Version-Value]
Meter=String
MeterStyle=H3
FontSize=15
Text=#Version#
X=-30r
Y=30r

;	Download latest

[Update-Download-Button]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
FontSize=40
Text=#U_Download#
X=370
Y=100r
Hidden=1
LeftMouseDownAction=[Play "#@#\Sounds\Buttons\Click.wav"]["https://github.com/Kurou-kun/Ashuramaru-Bundle/releases/latest"]

;	Update Checker

[Update-Checker-String]
Meter=String
MeterStyle=TEXT | Style-Update-Checker-Connecting
FontSize=13
X=375
Y=110r
DynamicVariables=1

;	Check for updates

[Update-CFU-Button]
Meter=String
MeterStyle=BUTTONS
StringAlign=Center
Text=#U_CFU#
FontSize=15
X=375
Y=30r
LeftMouseDownAction=[!Refresh #CURRENTCONFIG#]