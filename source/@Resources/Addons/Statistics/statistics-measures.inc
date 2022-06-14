;	Statistics Measures for Statistics

;------------
;	Measures
;------------

;	Ping

[Measure-Ping]
Measure=Plugin
Plugin=PingPlugin
UpdateRate=1
MaxValue=1000
DestAddress=#Host#
Substitute="30000":"X"

;	Download

[Measure-Net-In]
Measure=NetIn
NetInSpeed=#MaxDownload#
Interface=Best
DynamicVariables=1

;	Upload

[Measure-Net-Out]
Measure=NetOut
NetOutSpeed=#MaxUpload#
Interface=Best
DynamicVariables=1

;	Download Total

[Measure-Net-In-Total]
Measure=NetIn
NetInSpeed=#MaxDownload#
Interface=Best
DynamicVariables=1
Cumulative=1

;	Upload Total

[Measure-Net-Out-Total]
Measure=NetOut
NetOutSpeed=#MaxDownload#
Interface=Best
DynamicVariables=1
Cumulative=1

;	Net Total

[Measure-Net-Total]
Measure=NetTotal
Interface=Best
Cumulative=1

[Measure-Net-Total2]
Measure=NetTotal
Interface=Best
Cumulative=1
MinValue=0
MaxValue=#NetTotalLimit#0000000

;	Net Total Limit

[Measure-Net-Total-Limit]
Measure=NetTotal
Cumulative=1
Interface=Best
IfAboveValue=#NetTotalLimit#000000
IfAboveAction=[!WriteKeyValue Variables NotificationsContent "nettotal" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"]
DynamicVariables=1
Disabled=#SNTLA#

;[Measure-Net-Total-Limit-Scale]
;Measure=Calc
;Formula=(#NetTotalLimit# * 8000000)
;DynamicVariables=1
;Disabled=#SNTLA#

[Measure-Net-Total-Limit-Scale-Shown]
Measure=Calc
Formula=(#NetTotalLimit# * 1000 * 1000)
DynamicVariables=1
Disabled=#SNTLA#

[Measure-Net-Total-Reset]
Measure=Time
Format=%d
IfEqualValue=1
IfEqualAction=[!ResetStats][!DisableMeasure #CURRENTSECTION#]

[Measure-Net-Total-Reset-2]
Measure=Time
Format=%d
IfEqualValue=2
IfEqualAction=[!EnableMeasure Measure-Net-Total-Reset]
IfAboveValue=2
IfAboveAction=[!EnableMeasure Measure-Net-Total-Reset]

;	Traffic

[Measure-Net-Traffic]
Measure=NetTotal
NetInSpeed=#MaxDownload#
NetOutSpeed=#MaxUpload#
Interface=Best
DynamicVariables=1
MinValue=0
MaxValue=15000000

;	Online IP 

[Measure-IP]
Measure=Plugin
Plugin=WebParser.dll
Url=http://checkip.dyndns.org
UpdateRate=14400
RegExp="(?siU)Address: (.*)</body>"
StringIndex=1
Substitute="":"0.0.0.0"
OnConnectErrorAction=[!WriteKeyValue Variables ErrorCode "100" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NotificationsContent "error" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"]
OnRegExpErrorAction=[!WriteKeyValue Variables ErrorCode "101" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NotificationsContent "error" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"]
OnDownloadErrorAction=[!WriteKeyValue Variables ErrorCode "102" "#@#\Addons\variables.inc"][!WriteKeyValue Variables NotificationsContent "error" "#@#\Addons\variables.inc"][!ActivateConfig "Ashuramaru-Bundle\Panel\Notifications" "notifications.ini"]

;	Local IP

[Measure-IP-Local]
Measure=Plugin
Plugin=SysInfo
SysInfoType=IP_ADDRESS
SysInfoData=Best
DynamicVariables=1

;	Network Card

[Measure-Network-Adapter]
Measure=Plugin
Plugin=SysInfo
SysInfoType=ADAPTER_DESCRIPTION
SysInfoData=Best
DynamicVariables=1

;	Uptime

[Measure-Uptime]
Measure=Uptime
Format="%4!i!D %3!i!H %2!i!M %1!i!S"
AddDaysToHours=1

;	Cpu Name

[Measure-CPU-Name]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=ProcessorNameString

;	Gpu Name

[Measure-GPU-Name]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SOFTWARE\Microsoft\Windows NT\CurrentVersion\WinSat
RegValue=PrimaryAdapterString

;	Cpu

[Measure-CPU]
Measure=CPU
Processor=0

;	Cpu Handle Count

[Measure-CPU-Handle-Count]
Measure=Plugin
Plugin=UsageMonitor
Category=Process
Counter=Handle Count

;	Cpu Thread Count

[Measure-CPU-Thread-Count]
Measure=Plugin
Plugin=UsageMonitor
Category=Process
Counter=Thread Count

;	Gpu Measures

@IncludeStatisticsMeasureEngine=#@#\Addons\Statistics\#StatisticsMeasureEngine#-measures.inc

;	Ram Used
[Measure-RAM]
Measure=PhysicalMemory
UpdateDivider=20

;	Ram Free

[Measure-RAM-Free]
Measure=PhysicalMemory
InvertMeasure=1
UpdateDivider=20

;	Swap Used

[Measure-SWAP]
Measure=SwapMemory
UpdateDivider=20

;	Swap Free

[Measure-SWAP-Free]
Measure=SwapMemory
InvertMeasure=1
UpdateDivider=20

;	Disks

;	Disk #1

[Measure-Read-Disk-1]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Disk1#

[Measure-Write-Disk-1]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Disk1#

;	dirty trick i know
[Measure-Idle-Disk-1]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Idle Time
PerfMonInstance=#Disk1#
InvertMeasure=1
MinValue=0
MaxValue=100

[Measure-Used-Disk-1]
Measure=FreeDiskSpace
Drive=#Disk1#
InvertMeasure=1
UpdateDivider=120

[Measure-Total-Disk-1]
Measure=FreeDiskSpace
Drive=#Disk1#
Total=1
UpdateDivider=120

[Measure-Left-Disk-1]
Measure=FreeDiskSpace
Drive=#Disk1#

;	Disk #2

[Measure-Total-Disk-2]
Measure=FreeDiskSpace
Drive=#Disk2#
Total=1
UpdateDivider=120

[Measure-Read-Disk-2]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Disk2#

[Measure-Write-Disk-2]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Disk2#

[Measure-Idle-Disk-2]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Idle Time
PerfMonInstance=#Disk2#
InvertMeasure=1
MinValue=0
MaxValue=100

[Measure-Used-Disk-2]
Measure=FreeDiskSpace
Drive=#Disk2#
InvertMeasure=1
UpdateDivider=120

[Measure-Left-Disk-2]
Measure=FreeDiskSpace
Drive=#Disk2#

;	Disk #3

[Measure-Total-Disk-3]
Measure=FreeDiskSpace
Drive=#Disk3#
Total=1
UpdateDivider=120

[Measure-Read-Disk-3]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Disk3#

[Measure-Write-Disk-3]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Disk3#

[Measure-Idle-Disk-3]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Idle Time
PerfMonInstance=#Disk3#
InvertMeasure=1
MinValue=0
MaxValue=100

[Measure-Used-Disk-3]
Measure=FreeDiskSpace
Drive=#Disk3#
InvertMeasure=1
UpdateDivider=120

[Measure-Left-Disk-3]
Measure=FreeDiskSpace
Drive=#Disk3#

;	Disk #4

[Measure-Total-Disk-4]
Measure=FreeDiskSpace
Drive=#Disk4#
Total=1
UpdateDivider=120

[Measure-Read-Disk-4]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Disk4#

[Measure-Write-Disk-4]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Disk4#

[Measure-Idle-Disk-4]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Idle Time
PerfMonInstance=#Disk4#
InvertMeasure=1
MinValue=0
MaxValue=100

[Measure-Used-Disk-4]
Measure=FreeDiskSpace
Drive=#Disk4#
InvertMeasure=1
UpdateDivider=120

[Measure-Left-Disk-4]
Measure=FreeDiskSpace
Drive=#Disk4#

;	Disk #5

[Measure-Total-Disk-5]
Measure=FreeDiskSpace
Drive=#Disk5#
Total=1
UpdateDivider=120

[Measure-Read-Disk-5]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Disk2#

[Measure-Write-Disk-5]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Disk5#

[Measure-Idle-Disk-5]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Idle Time
PerfMonInstance=#Disk5#
InvertMeasure=1
MinValue=0
MaxValue=100

[Measure-Used-Disk-5]
Measure=FreeDiskSpace
Drive=#Disk5#
InvertMeasure=1
UpdateDivider=120

[Measure-Left-Disk-5]
Measure=FreeDiskSpace
Drive=#Disk5#

;	Disk #6

[Measure-Total-Disk-6]
Measure=FreeDiskSpace
Drive=#Disk6#
Total=1
UpdateDivider=120

[Measure-Read-Disk-6]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Disk6#

[Measure-Write-Disk-6]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Disk6#

[Measure-Idle-Disk-6]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Idle Time
PerfMonInstance=#Disk6#
InvertMeasure=1
MinValue=0
MaxValue=100

[Measure-Used-Disk-6]
Measure=FreeDiskSpace
Drive=#Disk6#
InvertMeasure=1
UpdateDivider=120

[Measure-Left-Disk-6]
Measure=FreeDiskSpace
Drive=#Disk6#

;	Disk #7

[Measure-Total-Disk-7]
Measure=FreeDiskSpace
Drive=#Disk7#
Total=1
UpdateDivider=120

[Measure-Read-Disk-7]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Disk7#

[Measure-Write-Disk-7]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Disk7#

[Measure-Idle-Disk-7]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Idle Time
PerfMonInstance=#Disk7#
InvertMeasure=1
MinValue=0
MaxValue=100

[Measure-Used-Disk-7]
Measure=FreeDiskSpace
Drive=#Disk7#
InvertMeasure=1
UpdateDivider=120

[Measure-Left-Disk-7]
Measure=FreeDiskSpace
Drive=#Disk7#

;	Disk #8

[Measure-Total-Disk-8]
Measure=FreeDiskSpace
Drive=#Disk8#
Total=1
UpdateDivider=120

[Measure-Read-Disk-8]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Disk8#

[Measure-Write-Disk-8]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Disk8#

[Measure-Idle-Disk-8]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Idle Time
PerfMonInstance=#Disk8#
InvertMeasure=1
MinValue=0
MaxValue=100

[Measure-Used-Disk-8]
Measure=FreeDiskSpace
Drive=#Disk8#
InvertMeasure=1
UpdateDivider=120

[Measure-Left-Disk-8]
Measure=FreeDiskSpace
Drive=#Disk8#

;	Disk #9

[Measure-Total-Disk-9]
Measure=FreeDiskSpace
Drive=#Disk9#
Total=1
UpdateDivider=120

[Measure-Read-Disk-9]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Disk9#

[Measure-Write-Disk-9]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Disk9#

[Measure-Idle-Disk-9]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Idle Time
PerfMonInstance=#Disk9#
InvertMeasure=1
MinValue=0
MaxValue=100

[Measure-Used-Disk-9]
Measure=FreeDiskSpace
Drive=#Disk9#
InvertMeasure=1
UpdateDivider=120

[Measure-Left-Disk-9]
Measure=FreeDiskSpace
Drive=#Disk9#

;	Disk #10

[Measure-Total-Disk-10]
Measure=FreeDiskSpace
Drive=#Disk10#
Total=1
UpdateDivider=120

[Measure-Read-Disk-10]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Read Bytes/sec
PerfMonInstance=#Disk10#

[Measure-Write-Disk-10]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Write Bytes/sec
PerfMonInstance=#Disk10#

[Measure-Idle-Disk-10]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Idle Time
PerfMonInstance=#Disk10#
InvertMeasure=1
MinValue=0
MaxValue=100

[Measure-Used-Disk-10]
Measure=FreeDiskSpace
Drive=#Disk10#
InvertMeasure=1
UpdateDivider=120

[Measure-Left-Disk-10]
Measure=FreeDiskSpace
Drive=#Disk10#