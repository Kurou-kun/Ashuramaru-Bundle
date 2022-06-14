;	Here you can find Statistics System skin measures of MSI Afterburner

;------------
;	Measures
;------------

[Measure-MSI-Afterburner-Running]
Measure=Process
ProcessName=MSIAfterburner.exe
Substitute="-1":"not running","1":"running"
IfBelowValue=0
IfBelowAction=[!ActivateConfig "Ashuramaru-Bundle\Panel\Popups\MSI" "msiafterburner.ini"][!DeactivateConfig "Ashuramaru-Bundle\Panel\Popups\HWInfo" "hwinfo.ini"]
IfAboveValue=0
IfAboveAction=[!DeactivateConfig "Ashuramaru-Bundle\Panel\Popups\MSI" "msiafterburner.ini"][!DeactivateConfig "Ashuramaru-Bundle\Panel\Popups\HWInfo" "hwinfo.ini"]
[Measure-CPU-Core-Clock]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=CPU clock
MinValue=0.0
MaxValue=5000

[Measure-CPU-Temp]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=CPU temperature
MinValue=0
MaxValue=100

[Measure-GPU-Power]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=Power percent
MinValue=0
MaxValue=100

[Measure-GPU-Usage]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=GPU usage
MinValue=0
MaxValue=100

[Measure-GPU-Core-Clock]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=Core clock
MinValue=0.0
MaxValue=3000

[Measure-GPU-Memory-Clock]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=Memory clock
MinValue=0.0
MaxValue=5000

[Measure-GPU-Memory-Usage]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=Memory usage
MinValue=0
MaxValue=#GPUMemMax#

[Measure-GPU-Voltage]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=GPU voltage
MinValue=0.000
MaxValue=2.000

[Measure-GPU-Temp]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=GPU temperature
MinValue=0
MaxValue=100

[Measure-GPU-Fan]
Measure=Plugin
Plugin=Plugins\MSIAfterburner.dll
DataSource=Fan speed
MinValue=0
MaxValue=100

[Measure-GPU-Fan-RPM]
Measure=Plugin
Plugin=MSIAfterburner.dll
DataSource=Fan tachometer
MinValue=0
MaxValue=3000