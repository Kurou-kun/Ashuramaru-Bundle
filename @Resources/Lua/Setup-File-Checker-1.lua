function Update()

	local FilePath = SKIN:MakePathAbsolute(SKIN:GetVariable('FileToCheck'))
	local FoundFile = io.open(FilePath,'r')
	
	if not FoundFile then
		return -1
	else
		io.close(FoundFile)
		return 1
	end
end