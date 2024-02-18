--	My first handmade lua script :)
--	Initialization
function Initialize()
end

--	Update
function Update()
	--	Time
	SensorTime = os.date('%x %X')
	
	if not SensorTime then
		print('Update: Unable to fetch local time values')
		return
	end
	
	--	Network
    MeasurePing = SKIN:GetMeasure('Measure-Ping')
    Ping = MeasurePing:GetStringValue()
	
	if not Ping then
		print('Update: Unable to fetch Ping value')
		return
	end
	
	MeasureUpload = SKIN:GetMeasure('Measure-Net-Out')
    Upload = MeasureUpload:GetStringValue()
	
	if not Upload then
		print('Update: Unable to fetch Upload value')
		return
	end
	
	MeasureDownload = SKIN:GetMeasure('Measure-Net-In')
    Download = MeasureDownload:GetStringValue()
	
	if not Download then
		print('Update: Unable to fetch Download value')
		return
	end
	
	--	Processor
	MeasureProcessorUsage = SKIN:GetMeasure('Measure-CPU')
    ProcessorUsage = MeasureProcessorUsage:GetStringValue()
	
	if not ProcessorUsage then
		print('Update: Unable to fetch CPU Usage value')
		return
	end
	
	MeasureProcessorClock = SKIN:GetMeasure('Measure-CPU-Core-Clock')
    ProcessorClock = MeasureProcessorClock:GetStringValue()
	
	if not ProcessorClock then
		print('Update: Unable to fetch CPU Clock value')
		return
	end
	
	MeasureProcessorTemp = SKIN:GetMeasure('Measure-CPU-Temp')
    ProcessorTemp = MeasureProcessorTemp:GetStringValue()
	
	if not ProcessorTemp then
		print('Update: Unable to fetch CPU Temperature value')
		return
	end
	
	--	Graphics Card
	MeasureGraphicsUsage = SKIN:GetMeasure('Measure-GPU-Usage')
    GraphicsUsage = MeasureGraphicsUsage:GetStringValue()
	
	if not GraphicsUsage then
		print('Update: Unable to fetch GPU Usage value')
		return
	end
	
	MeasureGraphicsClock = SKIN:GetMeasure('Measure-GPU-Core-Clock')
    GraphicsClock = MeasureGraphicsClock:GetStringValue()
	
	if not GraphicsClock then
		print('Update: Unable to fetch GPU Clock value')
		return
	end
	
	MeasureGraphicsMemoryClock = SKIN:GetMeasure('Measure-GPU-Memory-Clock')
    GraphicsMemoryClock = MeasureGraphicsMemoryClock:GetStringValue()
	
	if not GraphicsMemoryClock then
		print('Update: Unable to fetch GPU Memory Clock value')
		return
	end
	
	MeasureGraphicsMemoryUsagePerc = SKIN:GetMeasure('Measure-GPU-Memory-Usage-Percentage')
    GraphicsMemoryUsage1 = MeasureGraphicsMemoryUsagePerc:GetStringValue()
	
	if not GraphicsMemoryUsage1 then
		print('Update: Unable to fetch GPU Memory Usage value')
		return
	end
	
	MeasureGraphicsMemoryUsage = SKIN:GetMeasure('Measure-GPU-Memory-Usage')
    GraphicsMemoryUsage2 = MeasureGraphicsMemoryUsage:GetStringValue()
	
	if not GraphicsMemoryUsage2 then
		print('Update: Unable to fetch GPU Memory Usage % value')
		return
	end
	
	MeasureGraphicsTemp = SKIN:GetMeasure('Measure-GPU-Temp')
    GraphicsTemp = MeasureGraphicsTemp:GetStringValue()
	
	if not GraphicsTemp then
		print('Update: Unable to fetch GPU Temperature value')
		return
	end
	
	MeasureGraphicsVoltage = SKIN:GetMeasure('Measure-GPU-Voltage')
    GraphicsVoltage = MeasureGraphicsVoltage:GetStringValue()
	
	if not GraphicsVoltage then
		print('Update: Unable to fetch GPU Voltage value')
		return
	end
	
	MeasureGraphicsPower = SKIN:GetMeasure('Measure-GPU-Power')
    GraphicsPower = MeasureGraphicsPower:GetStringValue()
	
	if not GraphicsPower then
		print('Update: Unable to fetch GPU Power value')
		return
	end
	
	MeasureGraphicsFan = SKIN:GetMeasure('Measure-GPU-Fan')
    GraphicsFan1 = MeasureGraphicsFan:GetStringValue()
	
	if not GraphicsFan1 then
		print('Update: Unable to fetch GPU Fan Speed value')
		return
	end
	
	MeasureGraphicsFanRPM = SKIN:GetMeasure('Measure-GPU-Fan-RPM')
    GraphicsFan2 = MeasureGraphicsFanRPM:GetStringValue()
	
	if not GraphicsFan2 then
		print('Update: Unable to fetch GPU Fan Speed RPM value')
		return
	end
	
	--	Memory
	MeasureMemoryRAM = SKIN:GetMeasure('Measure-RAM')
    MemoryRAM = MeasureMemoryRAM:GetStringValue()
	
	if not MemoryRAM then
		print('Update: Unable to fetch RAM % value')
		return
	end
	
	MeasureMemoryRAM2 = SKIN:GetMeasure('Measure-RAM2')
    MemoryRAM2 = MeasureMemoryRAM2:GetStringValue()
	
	if not MemoryRAM2 then
		print('Update: Unable to fetch RAM value')
		return
	end
	
	MeasureMemoryRAMFree = SKIN:GetMeasure('Measure-RAM-Free')
    MemoryRAMFree = MeasureMemoryRAMFree:GetStringValue()
	
	if not MemoryRAMFree then
		print('Update: Unable to fetch RAM Free value')
		return
	end
	
	MeasureMemorySWAP = SKIN:GetMeasure('Measure-SWAP')
    MemorySWAP = MeasureMemorySWAP:GetStringValue()
	
	if not MemorySWAP then
		print('Update: Unable to fetch SWAP value')
		return
	end
	
	MeasureMemorySWAPFree = SKIN:GetMeasure('Measure-SWAP-Free')
    MemorySWAPFree = MeasureMemorySWAPFree:GetStringValue()
	
	if not MemorySWAPFree then
		print('Update: Unable to fetch SWAP Free value')
		return
	end
	
	--	Call WriteToFile function
	WriteToFile()
end

function WriteToFile(FilePath, OutputFile)
	--	Check directory
	FilePath = SKIN:MakePathAbsolute('..\\..\\@Resources\\Text\\StatisticsLogs\\'..os.date('%d-%m-%y')..'.txt', "a")

	--	Open the file
	OutputFile = io.open(FilePath, "a")
	
	--	Print error if file doesn't open
	if not OutputFile then
		print('WriteToFile: Unable to read file ' .. FilePath)
		return
	end
	
	--	Write to the file
    OutputFile:write("[", SensorTime, "]", " Latency: ", Ping, " ms", "				Upload: ", Upload, " b/s", "				Download: ", Download, " b/s", "				CPU Usage: ", ProcessorUsage, " %", "				CPU Clock: ", ProcessorClock, " MHz", "				CPU Temp: ", ProcessorTemp, " °C", "				GPU Usage: ", GraphicsUsage, " %", "				GPU Clock: ", GraphicsClock, " MHz", "				GPU Temp: ", GraphicsTemp, " °C", "				GPU Memory Usage: ", GraphicsMemoryUsage2, " MB", "				GPU Memory Clock: ", GraphicsMemoryClock, " MHz", "				GPU Voltage: ", GraphicsVoltage, " v", "				GPU Power: ", GraphicsPower, " %", "				GPU Fan Speed: ", GraphicsFan1, " %", "				GPU Fan Speed: ", GraphicsFan2, " RPM", "				RAM Usage: ", MemoryRAM2, " MB", "				RAM Free: ", MemoryRAMFree, " b", "				SWAP Usage: ", MemorySWAP, " b", "				SWAP Free: ", MemorySWAPFree, " b", '\n')
    
	--	Print error if file doesn't get overwrited
	if not OutputFile then
		print('WriteToFile: Unable to write at ' .. FilePath)
		return
	end
	
	--	Close the file
	OutputFile:close()
	return true
end