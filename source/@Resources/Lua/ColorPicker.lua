function Initialize()

	dofile(SKIN:MakePathAbsolute('..\\..\\@Resources\\Lua\\HSBLib\\HSBLib.lua'))
	curHue=0;curSat=0;curBri=0;curRed=0;curGreen=0;curBlue=0;formHue=0;formSat=0;formBri=0;curHex='#000000'
	
end

function Update()

	curRed, curGreen, curBlue = string.match(SKIN:GetVariable('Chosen'), '(%d+),(%d+),(%d+)')
	curHue, curSat, curBri = RGBtoHSB(SKIN:GetVariable('Chosen'))	
	
	perHue = 360 * curHue
	formHue = string.format("%.0f", Round(perHue,5))
	formSat = string.format("%.0f", Round((curSat*100),5))
	formBri = string.format("%.0f", Round((curBri*100),5))
	
	curHex = RGBtoHEX(curRed, curGreen, curBlue)

	return curRed..','..curGreen..','..curBlue
	
end

function UpdateColors()

	SKIN:Bang('!SetVariable', 'Chosen', curRed..','..curGreen..','..curBlue)
	
	perHue = 360 * curHue
	formHue = string.format("%.0f", Round(perHue,5))
	formSat = string.format("%.0f", Round((curSat*100),5))
	formBri = string.format("%.0f", Round((curBri*100),5))

	curHex = RGBtoHEX(curRed, curGreen, curBlue)
	
	SKIN:Bang('!Update')
	
end

function ChangeRed(arg)
	
	if SKIN:GetVariable('RGBSpeed') == '0' then
		changeAmount = 1
	else
		changeAmount= 10
	end
	if string.upper(arg) == 'DOWN' then
		curRed = Clamp(curRed - changeAmount, 0, 255)
	else
		curRed = Clamp(curRed + changeAmount, 0, 255)
	end
	
	curHue, curSat, curBri = RGBtoHSB(curRed..','..curGreen..','..curBlue)
	
	UpdateColors()
	
end

function ChangeGreen(arg)

	if SKIN:GetVariable('RGBSpeed') == '0' then
		changeAmount = 1
	else
		changeAmount= 10
	end
	if string.upper(arg) == 'DOWN' then
		curGreen = Clamp(curGreen - changeAmount, 0, 255)
	else
		curGreen = Clamp(curGreen + changeAmount, 0, 255)
	end
	
	curHue, curSat, curBri = RGBtoHSB(curRed..','..curGreen..','..curBlue)
	
	UpdateColors()
	
end

function ChangeBlue(arg)

	if SKIN:GetVariable('RGBSpeed') == '0' then
		changeAmount = 1
	else
		changeAmount= 10
	end
	if string.upper(arg) == 'DOWN' then
		curBlue = Clamp(curBlue - changeAmount, 0, 255)
	else
		curBlue = Clamp(curBlue + changeAmount, 0, 255)
	end
	
	curHue, curSat, curBri = RGBtoHSB(curRed..','..curGreen..','..curBlue)
	
	UpdateColors()
	
end

function ChangeHue(arg)

	if SKIN:GetVariable('HSBSpeed') == '0' then
		changeAmount = 0.001
	else
		changeAmount= 0.01
	end
	if string.upper(arg) == 'DOWN' then
		curHue = Clamp(curHue - changeAmount, 0, 1)
	else
		curHue = Clamp(curHue + changeAmount, 0, 1)
	end
	
	curRed, curGreen, curBlue = HSBtoRGB(curHue, curSat, curBri)
	
	UpdateColors()

end

function ChangeSat(arg)

	if SKIN:GetVariable('HSBSpeed') == '0' then
		changeAmount = 0.01
	else
		changeAmount= 0.1
	end
	if string.upper(arg) == 'DOWN' then
		curSat = Clamp(curSat - changeAmount, 0, 1)
	else
		curSat = Clamp(curSat + changeAmount, 0, 1)
	end
	
	curRed, curGreen, curBlue = HSBtoRGB(curHue, curSat, curBri)
	
	UpdateColors()

end

function ChangeBri(arg)

	if SKIN:GetVariable('HSBSpeed') == '0' then
		changeAmount = 0.01
	else
		changeAmount= 0.1
	end
	if string.upper(arg) == 'DOWN' then
		curBri = Clamp(curBri - changeAmount, 0, 1)
	else
		curBri = Clamp(curBri + changeAmount, 0, 1)
	end
	
	curRed, curGreen, curBlue = HSBtoRGB(curHue, curSat, curBri)
	
	UpdateColors()

end

function SetHEX(arg)

	curRed, curGreen, curBlue = HEXtoRGB(arg)
	curHue, curSat, curBri = RGBtoHSB(curRed..','..curGreen..','..curBlue)	

	UpdateColors()
	
end
