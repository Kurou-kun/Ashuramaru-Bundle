;	Here you can find Statistics System skin measures of MSI Afterburner

;------------
;	Measures
;------------

;	CPU Usage

[Measure-CPU]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=CPU usage
MinValue=0
MaxValue=100
Disabled=#SLSCU#

;	CPU Core Clock

[Measure-CPU-Core-Clock]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=CPU clock
MinValue=0.0
MaxValue=5000
Disabled=#SLSCC#

;	CPU Temperature

[Measure-CPU-Temp]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=CPU temperature
MinValue=0
MaxValue=100
Disabled=#SLSCT#
IfAboveValue=80
IfAboveAction=[!WriteKeyValue Variables ErrorCode "112" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NotificationsContent "error" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"]

;	GPU Power

[Measure-GPU-Power]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=Power percent
MinValue=0
MaxValue=100

;	GPU Usage

[Measure-GPU-Usage]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=GPU usage
MinValue=0
MaxValue=100
Disabled=#SLSGU#

;	GPU Core Clock

[Measure-GPU-Core-Clock]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=Core clock
MinValue=0.0
MaxValue=3000
Disabled=#SLSGC#

;	GPU Memory Clock

[Measure-GPU-Memory-Clock]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=Memory clock
MinValue=0.0
MaxValue=5000
Disabled=#SLSGMC#

;	GPU Memory Usage Percentage

[Measure-GPU-Memory-Usage-Percentage]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=Memory usage
MinValue=0
MaxValue=#GPUMemMax#
Disabled=#SLSGMC3#

;	GPU Memory Usage

[Measure-GPU-Memory-Usage]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=Memory usage
MinValue=0
MaxValue=#GPUMemMax#
Disabled=#SLSGMC2#

;	GPU Voltage

[Measure-GPU-Voltage]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=GPU voltage
MinValue=0.000
MaxValue=2.000
Disabled=#SLSGV#

;	GPU Temperature

[Measure-GPU-Temp]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=GPU temperature
MinValue=0
MaxValue=100
Disabled=#SLSGT#
IfAboveValue=80
IfAboveAction=[!WriteKeyValue Variables ErrorCode "113" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NotificationsContent "error" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"]

;	GPU Fan Speed

[Measure-GPU-Fan]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=Fan speed
MinValue=0
MaxValue=100
Disabled=#SLSGFS#

;	GPU Fan Speed RPM

[Measure-GPU-Fan-RPM]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=Fan tachometer
MinValue=0
MaxValue=3000
Disabled=#SLSGFS2#

;	Ram Used %

[Measure-RAM]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=RAM usage
MinValue=0
MaxValue=16000
Disabled=#SLSRU#

;	Ram Used MB

[Measure-RAM2]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=RAM usage
MinValue=0
MaxValue=16000
Disabled=#SLSRU2#

;	Ram Free

[Measure-RAM-Free]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=RAM usage
InvertMeasure=0
MinValue=0
MaxValue=16000
Disabled=#SLSRU#

;	Swap Used

[Measure-SWAP]
Measure=SwapMemory
UpdateDivider=20
Disabled=#SLSSU#

;	Swap Free

[Measure-SWAP-Free]
Measure=SwapMemory
InvertMeasure=1
UpdateDivider=20
Disabled=#SLSSU#

;	Framerate

[Measure-Framerate]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=Framerate
MinValue=0
MaxValue=100
Disabled=#SLSFU#