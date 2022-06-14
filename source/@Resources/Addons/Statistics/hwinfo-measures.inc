;	Here you can find Statistics System skin measures of HWInfo

;	Thanks to [ LightningSmith ] for helping me out with this.

;------------
;	Measures
;------------

[Measure-HWInfo-Running]
Measure=Process
ProcessName=HWiNFO64.exe
Substitute="-1":"not running","1":"running"
IfBelowValue=0
IfBelowAction=[!ActivateConfig "Ashuramaru-Bundle\Panel\Popups\HWInfo" "hwinfo.ini"][!DeactivateConfig "Ashuramaru-Bundle\Panel\Popups\MSI" "msiafterburner.ini"]
IfAboveValue=0
IfAboveAction=[!DeactivateConfig "Ashuramaru-Bundle\Panel\Popups\HWInfo" "hwinfo.ini"][!DeactivateConfig "Ashuramaru-Bundle\Panel\Popups\MSI" "msiafterburner.ini"]

[Measure-CPU-Core-Clock]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw0
MinValue=0.0
MaxValue=5000

[Measure-CPU-Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw1
MinValue=0
MaxValue=100

[Measure-GPU-Power]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw6
MinValue=0
MaxValue=100

[Measure-GPU-Usage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw10
MinValue=0
MaxValue=100

[Measure-GPU-Core-Clock]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw7
MinValue=0.0
MaxValue=3000

[Measure-GPU-Memory-Clock]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw8
MinValue=0.0
MaxValue=5000

[Measure-GPU-Memory-Usage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw9
MinValue=0
MaxValue=#GPUMemMax#

[Measure-GPU-Voltage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw4
MinValue=0.000
MaxValue=2.000

[Measure-GPU-Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw3
MinValue=0
MaxValue=100

[Measure-GPU-Fan]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw11
MinValue=0
MaxValue=100

[Measure-GPU-Fan-RPM]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw5
MinValue=0
MaxValue=3000