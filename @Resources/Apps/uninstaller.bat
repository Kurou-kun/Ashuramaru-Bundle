@echo off
title Ashuramaru-Bundle Uninstaller Script
color 0A

::	Admin permission
set "params=%*"
cd /d "%~dp0" && ( if exist "%temp%\getadmin.vbs" del "%temp%\getadmin.vbs" ) && fsutil dirty query %systemdrive% 1>nul 2>nul || (  echo Set UAC = CreateObject^("Shell.Application"^) : UAC.ShellExecute "cmd.exe", "/k cd ""%~sdp0"" && %~s0 %params%", "", "runas", 1 >> "%temp%\getadmin.vbs" && "%temp%\getadmin.vbs" && exit /B )>nul
goto checking

::	Check file
:checking
If exist "%temp%\uninstaller.bat" (
    goto uninstall
)else (
	copy %0 %temp%>nul & echo Copying itself to temp folder...
	start %temp%\uninstaller.bat>nul & echo Starting new process...
	exit
)

::	Uninstall
:uninstall
cls
rmdir /s /q %USERPROFILE%\Documents\Rainmeter\Skins\Ashuramaru-Bundle & echo Uninstalling...
del %0 & exit