;	Here you can find Statistics System skin measures of HWInfo

;	Thanks to [ LightningSmith ] for helping me out with this.

;------------
;	Measures
;------------

;	Ram Used %

[Measure-RAM]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw3
MinValue=0
MaxValue=100
Disabled=#SLSRU#

;	Ram Used MB

[Measure-RAM2]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw2
MinValue=0
MaxValue=100
Disabled=#SLSRU2#

;	Ram Free

[Measure-RAM-Free]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw2
InvertMeasure=0
MinValue=0
MaxValue=16000
Disabled=#SLSRU#

;	Swap Used

[Measure-SWAP]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw1
MinValue=0
MaxValue=100
Disabled=#SLSSU#

;	Swap Free

[Measure-SWAP-Free]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw0
InvertMeasure=1
MinValue=0
MaxValue=100
Disabled=#SLSSU#

;	CPU Usage

[Measure-CPU]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw4
MinValue=0
MaxValue=100
Disabled=#SLSCU#

;	CPU Core Clock

[Measure-CPU-Core-Clock]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw5
MinValue=0.0
MaxValue=5000
Disabled=#SLSCC#

;	CPU Temperature

[Measure-CPU-Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw6
MinValue=0
MaxValue=100
Disabled=#SLSCT#
IfAboveValue=80
IfAboveAction=[!WriteKeyValue Variables ErrorCode "112" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NotificationsContent "error" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"]

;	GPU Temperature

[Measure-GPU-Temp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw8
MinValue=0
MaxValue=100
Disabled=#SLSGT#
IfAboveValue=80
IfAboveAction=[!WriteKeyValue Variables ErrorCode "113" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NotificationsContent "error" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"]

;	GPU Voltage

[Measure-GPU-Voltage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw9
MinValue=0.000
MaxValue=2.000
Disabled=#SLSGV#

;	GPU Fan Speed RPM

[Measure-GPU-Fan-RPM]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw10
MinValue=0
MaxValue=3000
Disabled=#SLSGFS2#

;	GPU Power

[Measure-GPU-Power]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw11
MinValue=0
MaxValue=100

;	GPU Core Clock

[Measure-GPU-Core-Clock]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw12
MinValue=0.0
MaxValue=3000
Disabled=#SLSGC#

;	GPU Memory Clock

[Measure-GPU-Memory-Clock]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw13
MinValue=0.0
MaxValue=5000
Disabled=#SLSGMC#

;	GPU Usage

[Measure-GPU-Usage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw14
MinValue=0
MaxValue=100
Disabled=#SLSGU#

;	GPU Memory Usage Percentage

[Measure-GPU-Memory-Usage-Percentage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw15
MinValue=0
MaxValue=100
Disabled=#SLSGMC3#

;	GPU Fan Speed

[Measure-GPU-Fan]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw16
MinValue=0
MaxValue=100
Disabled=#SLSGFS#

;	GPU Memory Usage

[Measure-GPU-Memory-Usage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw17
MinValue=0
MaxValue=#GPUMemMax#
Disabled=#SLSGMC2#

;	Framerate
;	It's not supported yet

[Measure-Framerate]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=SOFTWARE\HWiNFO64\VSB
RegValue=ValueRaw
MinValue=0
MaxValue=100
Disabled=#SLSFU#