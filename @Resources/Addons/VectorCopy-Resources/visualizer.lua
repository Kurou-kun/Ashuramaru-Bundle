function Initialize()
	version = '010201'
	--parent and band templates
	local parent = [=[
[P]
Measure=Plugin
Plugin=AudioAnalyzer
Disabled=1
Type=Parent
Source=DefaultOutput
Threading=Policy SeparateThread | UpdateRate 200 | WarnTime -1
ProcessingUnits=U0
Unit-U0=Channels #Channel# | Handlers ]=]
	local processing = ',PNUMH0,PNUMH1(PNUMH0),PNUM(PNUMH1)'
	local group = [=[
Handler-PNUMH0=Type FFT | BinWidth #AccuracyNUM# | OverlapBoost #OverlapNUM# | CascadesCount 1 | WindowFunction #WindowFunction#
Handler-PNUMH1=Type BandResampler | Bands Log(Count #Bands#+1, FreqMin #FreqMin#, FreqMax #FreqMax#) | CubicInterpolation true
Handler-PNUM=Type TimeResampler | Attack #Attack# | Decay #Decay# | UpdateRate 200 | Transform dB, Map(From #MinSensitivity# : #MaxSensitivity#, To 0 : 1)
]=]
	local band = [=[
[NUM]
Measure=Plugin
Plugin=AudioAnalyzer
Type=Child
Parent=P
HandlerName=P0
Index=NUM
Channel=#Channel#
]=]

	--create bands
	bands = SKIN:GetVariable('Bands', 0)
	local file = io.open(SKIN:GetVariable('CURRENTPATH') .. 'bands.inc')
	if file then
		fileVersion = file:read()
		bandCount = file:read()
		file:close()
	end
	if (bands ~= (bandCount or nil)) or ((fileVersion or nil) ~= version) then
		local section = {version..string.char(10)..bands..string.char(10)}
		for i=1,bands+1 do
			section[i+1] = string.gsub(band, 'NUM', i-1)
		end
		local file = io.open(SKIN:GetVariable('CURRENTPATH') .. 'bands.inc', 'w')
		file:write(table.concat(section))
		file:close()
	end
	
	--create parent
	groups = SKIN:GetVariable('Groups', 0)
	local file = io.open(SKIN:GetVariable('CURRENTPATH') .. 'parent.inc')
	if file then
		fileVersion = file:read()
		groupCount = file:read()
		file:close()
	end
	if (groups ~= (groupCount or nil)) or ((fileVersion or nil) ~= version) then
		local section = {version..string.char(10)..groups..string.char(10)..parent..'P0H0,P0H1(P0H0),P0(P0H1)'}
		for i=1,groups-1 do
			section[i+1] = string.gsub(processing, 'NUM', i)
		end
		section = {table.concat(section)..string.char(10)}
		for i=1,groups do
			section[i+1] = string.gsub(group, 'NUM', i-1)
		end
		local file = io.open(SKIN:GetVariable('CURRENTPATH') .. 'parent.inc', 'w')
		file:write(table.concat(section))
		file:close()
	end
	
	--copy default variables if variables file is not found
	local file = io.open(SKIN:GetVariable('CURRENTPATH') .. 'variables.inc')
	if file then
		file:close()
	else
		os.execute('copy "' .. SKIN:GetVariable('@') .. 'defaultvariables.inc" "' .. SKIN:GetVariable('CURRENTPATH') .. 'variables.inc"')
	end
	
	--refresh if changes were made
	if (bands ~= (bandCount or nil)) or (groups ~= (groupCount or nil)) or (fileVersion ~= version) then
		SKIN:Bang('!Refresh')
		return
	end
	
	--load calibration file
	local file = io.open(SKIN:GetVariable('CURRENTPATH') .. 'calibration.txt')
	if file then
		fileVersion = file:read()
		bandCount = file:read()
		if (bands == (bandCount or nil)) and ((fileVersion or nil) == version) then
			volumeCal = file:read()
			bCal = {}
			for i=1,bands do
				bCal[i] = file:read()
			end
		end
		file:close()
	end
	
	--get and process variables
	volumeTarget = SKIN:GetVariable('VolumeTarget', '44.5')
	volumeCalEnable = string.upper(SKIN:GetVariable('NormalizeVolume', 'NO'))
	volumeCalEnable = ((volumeCalEnable == "YES" and 1) or (volumeCalEnable == "NO" and 2)) or 2
	bCalEnable = string.upper(SKIN:GetVariable('NormalizeSpectrum', 'NO'))
	bCalEnable = ((bCalEnable == "YES" and 1) or (bCalEnable == "NO" and 2)) or 2
	
	visType = string.upper(SKIN:GetVariable('Type', 'BAR'))
	visType = ((visType == "BAR" and 1) or (visType == "POLY" and 2)) or 1
	
	colorType = string.upper(SKIN:GetVariable('Color', 'CUSTOM'))
	colorType = ((colorType == "CUSTOM" and 1) or (colorType == "CHAMELEON" and 2)) or 1
	
	colorAvgConst = 1
	colorAvgSizeOld = 0
	colorAvgSize = 1
	colorAvgTime = 1000
	
	colorSrc = {}
	colorAvg = {}
	
	scale = SKIN:GetVariable('Scale', 1)
	
	barSpacing = SKIN:GetVariable('BarSpacing', 0)
	width = SKIN:GetVariable('Width', 0)
	barWidth = SKIN:GetVariable('BarWidth', 0)
	barRoundSize = SKIN:GetVariable('BarRoundSize', 0)
	height = SKIN:GetVariable('Height', 0)
	baseHeight = SKIN:GetVariable('BaseHeight', 0)
	trueHeight = height-baseHeight
	
	invert = string.upper(SKIN:GetVariable('Invert', 'NO'))
	invert = ((invert == "YES" and 1) or (invert == "NO" and 2)) or 2
	
	avgType = string.upper(SKIN:GetVariable('AvgType', 'FLAT'))
	avgType = (((avgType == "FLAT" and 1) or (avgType == "LINEAR" and 2)) or (avgType == "EXPONENTIAL" and 3)) or 1
	avgConst = 1
	weight = 1
	avgSizeOld = 0
	avgSize = 1
	avgTime = tonumber(SKIN:GetVariable('AvgTime', 0))
	avgBase = SKIN:GetVariable('AvgBase', 1)
	
	calTime = 0
	calIndex = 0
	calCancel = false
	
	power = SKIN:GetVariable('Power', 1)
	
	bSrc = {}
	bAvg = {{}}
	cutoff = {}
	
	--initialize arrays and measures
	for i=1,avgTime do
		bAvg[i] = {}
	end
	
	for i=1,groups-1 do
		cutoff[i] = SKIN:GetVariable('Cutoff' .. i-1, 0)
	end
	
	for i=1,bands do
		bSrc[i] = SKIN:GetMeasure(i)
		for j=groups-1,1,-1 do
			if i<bands*cutoff[j] then
				SKIN:Bang('!SetOption', i, 'HandlerName', 'P' .. j)
				break
			end
		end
	end
	
	for i=1,1000 do
		colorAvg[i] = {}
	end
	
	for i=1,3 do
		colorSrc[i] = SKIN:GetMeasure('C' .. i)
	end
	
	if colorType == 1 then
		colorOut = SKIN:GetVariable('Custom')
	elseif colorType == 2 then
		colorOut = colorSrc[1]:GetValue() .. ',' .. colorSrc[2]:GetValue() .. ',' ..colorSrc[3]:GetValue()
	end
	SKIN:Bang('!SetOption', 'Shape', 'Color', 'FillColor' .. colorOut .. ',#Alpha#|StrokeWidth0')
	
	--initialize visualizer shape
	if visType == 1 then
		SKIN:Bang('!SetOption', 'Shape', 'Shape', 'Rectangle0,0,0,0')
		bar = {'Rectangle', '', ',' .. height*scale .. ',' .. barWidth*scale .. ',', '', ',' .. barRoundSize*scale .. '|ExtendColor'}
	elseif visType == 2 then
		SKIN:Bang('!SetOption', 'Shape', 'Path', '0,0|LineTo0,0')
		SKIN:Bang('!SetOption', 'Shape', 'Shape', 'PathPath|ExtendColor')
		path = {'0,' .. height*scale}
		for i=1,bands do
			path[i*2] = '|LineTo' .. (i-1)*width/(bands-1)*scale .. ','
		end
		path[2+bands*2] = '|LineTo' .. width*scale .. ',' .. height*scale .. '|Closepath1'
	end
	
	--initialize frame timer
	frametimeStart = os.clock()
	frametimeAvg = {}
	frametimeSize = math.max(avgTime, colorAvgTime)
	
	for i=1,frametimeSize do
		frametimeAvg[i] = 0
	end
	
	--start the visualizer
	SELF:Enable()
end
function Update()
	--make calibration file
	if calibrating then
		calIndex = calIndex + 1
		local bCalc = {}
		for i=1,bands do
			local b = bSrc[i]:GetValue()
			if b < 0 then
				bCalc[i] = 0
			else
				bCalc[i] = b
			end
		end
		bAvg[calIndex] = bCalc
		if not calTime then return end
		if os.clock()-calStartTime < calTime then return end
		SKIN:Bang('PlayStop')
		if not calCancel then
			local bCal = {}
			local bMax = 0
			for i=1,bands do
				local out = 0
				for j=1,calIndex do
					out = out + bAvg[j][i]
				end
				if out > bMax then bMax = out end
				bCal[i] = out
			end
			for i=1,bands do
				bCal[i] = bMax/bCal[i]..string.char(10)
			end
			local file = io.open(SKIN:GetVariable('CURRENTPATH') .. 'calibration.txt', 'w')
			if not calCancel then file:write(version..string.char(10)..bands..string.char(10)..bMax/calIndex..string.char(10)..table.concat(bCal)) end
			file:close()
		end
		if volume then SKIN:Bang('!CommandMeasure Volume "SetVolume ' .. volume .. '"') end
		SKIN:Bang('!Refresh')
		return
	end
	
	--frametime
	table.insert(frametimeAvg,1,os.clock()-frametimeStart)
	frametimeStart=os.clock()
	table.remove(frametimeAvg,table.maxn(frametimeAvg))
	frametime = 0
	avgSize = 0
	
	while frametime < avgTime/1000 do
		avgSize = avgSize + 1
		if frametimeAvg[avgSize] == 0 then
			frametime = frametime + frametimeAvg[1]
		else
			frametime = frametime + frametimeAvg[avgSize]
		end
		if avgSize >= avgTime then break end
	end
	
	frametime = 0
	colorAvgSize = 0
	
	while frametime < colorAvgTime/1000 do
		colorAvgSize = colorAvgSize + 1
		if frametimeAvg[colorAvgSize] == 0 then
			frametime = frametime + frametimeAvg[1]
		else
			frametime = frametime + frametimeAvg[colorAvgSize]
		end
		if colorAvgSize >= colorAvgTime then break end
	end
	
	--use frametime for adaptive avg size
	if avgSizeOld > avgSize then
		for i=avgSize+1,avgSizeOld do
			bAvg[i] = {}
		end
	end
	avgSizeOld = avgSize
	if avgSize == 1 then
		avgConst = 1
	else
		if avgType == 1 then
			avgConst = 1/avgSize
		elseif avgType == 2 then
			avgConst = 1/(avgSize*(avgSize+1)/2)
		elseif avgType == 3 then
			weight = 1
			for i=1,avgSize do
				avgConst = avgConst + weight
				weight = weight * avgBase
			end
			avgConst = 1/avgConst
		end
	end
	if colorAvgSizeOld > colorAvgSize then
		for i=colorAvgSize+1,colorAvgSizeOld do
			colorAvg[i] = {}
		end
	end
	colorAvgSizeOld = colorAvgSize
	colorAvgConst = 1/colorAvgSize
	
	--get bands, apply calibration and power
	local c = {}
	local bCalc = {}
	for i=1,bands do
		local b = bSrc[i]:GetValue()
		if b < 0 then
			bCalc[i] = 0
		else
			if volumeCal and (volumeCalEnable == 1) then
				b = b * volumeTarget / volumeCal
			end
			if bCal and (bCalEnable == 1) then
				b = b * bCal[i]
			end
			bCalc[i] = b^power
		end
	end
	table.insert(bAvg,1,bCalc)
	table.remove(bAvg,table.maxn(bAvg))
	
	--averaging
	local bMax = 0
	if avgSize > 1 then
		for i=1,bands do
			local out = 0
			if avgType == 1 then
				for j=avgSize,1,-1 do
					out = out + (bAvg[j][i] or bCalc[i])
				end
				out = out * avgConst
			elseif avgType == 2 then
				for j=avgSize,1,-1 do
					out = out + (bAvg[j][i] or bCalc[i]) * j
				end
				out = out * avgConst
			elseif avgType == 3 then
				avgWeight = 0
				weight = 1
				for j=avgSize,1,-1 do
					out = out + (bAvg[j][i] or bCalc[i]) * weight
					weight = weight * avgBase
				end
				out = out * avgConst
			else
				out = bAvg[1][i]
			end
			if out > bMax then bMax = out end
			c[i] = out
		end
	else
		for i=1,bands do
			local out = bAvg[1][i]
			if out > bMax then bMax = out end
		end
		c = bAvg[1]
	end
	
	--get color
	local color = {}
	local colorCalc = {}
	for i=1,3 do
		colorCalc[i] = tonumber(colorSrc[i]:GetStringValue())
	end
	table.insert(colorAvg,1,colorCalc)
	table.remove(colorAvg,table.maxn(colorAvg))
	
	--color averaging
	if colorType == 2 then
		for i=1,3 do
			local out = 0
			for j=colorAvgSize,1,-1 do
				out = out + (colorAvg[j][i] or colorCalc[i])
			end
			color[i] = out * colorAvgConst
		end
		colorOut = color[1] .. ',' .. color[2] .. ',' ..color[3]
	end
	
	--save cpu if no audio is playing, and prevent too high framerate
	if bMax < 1/1000 then
		SKIN:Bang('!DisableMeasure', 'Update')
	elseif frametimeAvg[1] > 0.004 then
		SKIN:Bang('!EnableMeasure', 'Update')
		SKIN:Bang('!UpdateMeasure', 'Update')
	end
	
	--apply values to meter
	if bMax < 1 then bMax = 1 end
	SKIN:Bang('!SetOption', 'Shape', 'Color', 'FillColor' .. colorOut .. ',#Alpha#|StrokeWidth0')
	if invert == 1 then
		if visType == 1 then
			local p = bar
			local spacing = (barSpacing+barWidth)*scale
			for i=1,bands do
				p[2] = (i-1)*spacing
				p[4] = (-baseHeight-(trueHeight)*c[bands+1-i]/bMax)*scale
				SKIN:Bang('!SetOption', 'Shape', 'Shape' .. i+1, table.concat(p))
			end
		elseif visType == 2 then
			local p = path
			for i=1,bands do
				p[i*2+1] = (trueHeight-trueHeight*c[bands+1-i]/bMax)*scale
			end
			SKIN:Bang('!SetOption', 'Shape', 'Path', table.concat(p))
		end
	else
		if visType == 1 then
			local p = bar
			local spacing = (barSpacing+barWidth)*scale
			for i=1,bands do
				p[2] = (i-1)*spacing
				p[4] = (-baseHeight-(trueHeight)*c[i]/bMax)*scale
				SKIN:Bang('!SetOption', 'Shape', 'Shape' .. i+1, table.concat(p))
			end
		elseif visType == 2 then
			local p = path
			for i=1,bands do
				p[i*2+1] = (trueHeight-trueHeight*c[i]/bMax)*scale
			end
			SKIN:Bang('!SetOption', 'Shape', 'Path', table.concat(p))
		end
	end
end
function calibrate(duration)
	if duration > 0 then
		SKIN:Bang('PlayLoop #@#\Sounds\noise.wav')
		calTime = duration
		SKIN:Bang('!EnableMeasure Volume')
		SKIN:Bang('!UpdateMeasure Volume')
		SKIN:Bang('!Update')
		volume = SKIN:GetMeasure('Volume'):GetValue()
		SKIN:Bang('!CommandMeasure Volume "SetVolume 0"')
		calStartTime = os.clock()
		calibrating = 1
	elseif duration == 0 then
		calTime = 1
		calCancel = 1
	elseif calibrating then
		calTime = 1
	else
		calTime = false
		calStartTime = os.clock()
		calibrating = 1
	end
end
