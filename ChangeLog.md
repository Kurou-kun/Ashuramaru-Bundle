# Ashuramaru-Bundle

--------------------------------------------------------------------
	Version: 1.0.6
--------------------------------------------------------------------
 - Features
	- Added new Dock skin to the bundle.
	- Added new CyberSearch skin to the bundle.
	- Added new Recycle Bin via Dock skin style.
	- Added new TaskbarX skin to the bundle.
	- Added new option to show graph on Processes skin in Panel.
	- Added METADATA to all main skin files for more information.
	- Added more customization options to the Clock skin.
	- Added new Setup skin.
	- Added new Event system to the panel.
	- Added new Game Mode system to the panel.
	- Added New Performance System to optimize the suite.
	- Added new Acrylic background option on Appearance page.
	- Replaced old Graphs with new seperate detailed skins about your hardware.

 - Changes
	- In clock.ini seperated Day/Week/Quarter with their values to give ability to change value color.
	- Moved update-log.txt to github repository as ChangeLog.md.
	- Moved author.txt to github repository as Credits.md.
	- Removed manual.txt nad folder DOCUMENTS.
	- Removed !Execute bang from Appearance page.
	- Removed !Execute bang from Settings page.
	- Removed !Execute bang from Welcome page.
	- Removed !Execute bang from Update page.
	- Removed !Execute bang from Skins page.
	- Removed !Execute bang from all skins.
	- Integrated ColorPicker with panel.
	- Due to bad response with Uninstall feature, its being removed and replaced by guide how to delete all files of this skin.
	- Changed 4th link on Welcome page from Survey to Forum.
	- Added space between VALUE % in Statistics skin for better visuals.
	- Removed shortcut to Ashuramaru-Tray-Icon.exe and replaced it with skin Tray.ini.
	- Changed Ashuramaru-Tray-Icon.exe to Ashuramaru-Tray.exe.
	- Updated English language with new lines of text.
	- Changed variables in Statistics.ini to implement more complex customization.
	- Changed 2nd page of Statistics settings for more complex customization.
	- Changed Skins page buttons to look like any other buttons in panel.
	- Deleted Uninstaller icon from Github.
	- Commented out entire code of Single Dock "Recycle Bin" to informat what to change.
	- Swapped variables which are used in buttons for Statistics Variation and changed how these button worked and added ability to activate all Statistics Variations at the same time.
	- Swapped position of Panel Settings in Settings page.
	- Updated Ashuramaru-Tray.exe for newer groups.
	- Remaked enitre language file EN.inc.
	- Optimized Statistics skin to gather measures from 1 file on all versions.
	- Remaked Translucent Taskbar .ini file to reduce amount of files.
	- Fixed Performance Monitor and Game Mode variables.
	- Added Color Gradient opacity settings in TaskbarX page.
	- Added new option regarding Detailed variation of the statistics.
	- Added information if you turn on disk you doesnt have to Statistics Combined.

 - Known issues
	- When switching Preset 1 to Preset 2 or otherwise in Appearance page previouse colors which will be saved will be those from Preset 1.
	- You can drag any skin around while holding LMB on buttons.
	- Too many usless variables in variables.inc file.
	- CPU usage too high when doing certain actions.

 - Bugfixes
	- Fixed MeterToggle name in hardware info.
	- Fixed Appearance back button showing tooltiptext.
	- Fixed path to sound when clicking any button in skin.
	- Fixed language variables to back and pages system.
	- Fixed Notes skin width to match others.
	- Fixed activate buttons which deactivates certain variation of skin.
	- Fixed Panel page system when prefix > was drawed in wrong places.
	- Fixed Hardware-Info skin resizing to users hardware info.
	- Fixed CPU Clock to show GHz not Mhz.
	- Fixed Links on Welcome page in Panel.
	- Fixed ColorPicker bug with ColorCursor plugin.
	- Fixed width of the buttons in all bundle.
	
--------------------------------------------------------------------
	Version: 1.0.5
--------------------------------------------------------------------
 - Features:
	- Added Tray Icon to Tray Bar for easier access to panel.
	- Added Ashuramaru Bundle Icon in the panel.
	- Added Presets system in Appearance page.
	- Added Forsted Glass "Opaque" background to Background Type system.
	- Added Disks Enable/Disable system up to 6 disks.
	- Added Processes skin to supported skins.
	- Added Uninstall feature to make deleting this skin easier.
	- Added new options to Statistics for more customization.
	
 - Changes:
	- Revisited every style and adjusted its code for better recognition.
	- Swapped Visualizer skin with VectorCopy which is its originall version.
	- Added new visualzier to VectorCopy skin.
	- Changed descritption of the skin in Welcome page.
	- Changed the Settings page from overall skin adjustment page to page which stores diffrent pages with buttons which redirecting to those pages.
	- Added seperator above the bottom page buttons to seperate content from bottom buttons.
	- Layouts folder has been removed.
	- Added clicked button color change to primary panel color.
	- Changed most of the tooltiptexts from standard windows 10 look to more old one from windows 7.
	- Moved every style within bundle to one file styles.inc.
	- Battery-traditional.ini deleted.
	- Visualizer addon files were moved to their own folder.
	
 - Known issues:
	- When switching Preset 1 to Preset 2 or otherwise in Appearance page previouse colors which will be saved will be those from Preset 1.
	- You can drag any skin around while holding LMB on buttons.
	- Too many usless variables in variables.inc file.
	- CPU usage too high when doing certain actions.
	- A lot buttons but not every doesnt have specified "W" variable so with different languages entire layout can break.

 - Bugfixes:
	- Fixed "Modern-Header.png" white pixels on the sides.
	- Fixed > symbol before PageName from fixed to dynamic variable.
	- Fixed battery-Traditional not used.
	- Fixed visualizer addon files stuck in @RESOURCES folder.
	- Fixed styles are not identic on every skin.
	
--------------------------------------------------------------------
	Version: 1.0.4
--------------------------------------------------------------------
 - Features:
	- Added Graphs support to Network, System and Disks
	- Added "Battery" skin for laptops.
	- Added "Recycle Bin" skin.
	- Added "Set Wallpaper" function to the "Appearance" page to fit customization with skin design.
	- Added whole new set of colors to play around with to make this suite look like you want.
	- Added ability to set DEFAULT VALUE of color when RMB on it.
	- Added link to Ashuramaru Bundle Gallery on DeviantArt for easier update.

 - Changes:
	- Changed "Statistics" background from static to dynamic.
	- Changed space between each text and bar in "Statistics".
	- Removed old variables and combined them into one file.
	- Added ">" symbol in "Panel Sidebar" to active page.
	- Redesigned "ColorPicker" skin to fit the suite theme.
	- Moved "ColorPicker" folder from PANEL to SUPPORTED folder.
	- Removed "STYLES" section from addons and combined them into one in "panel.ini"
	- Changed 3 default colors from previouse version to 8 new color schemes.
	- Changed how changing color system works.
 
 - KnownBugs:
	- Battery-Traditional not used.
	- Visualizer addon files stuck in @RESOURCES folder.
	- Styles are not identic on every skin.

 - Bugfixes:
	- Fixed all paths for variables.
	- Fixed colors not applying after chosing in "ColorPicker" skin.
--------------------------------------------------------------------
	Version: 1.0.3
--------------------------------------------------------------------
 - Features:
	- Added CLOCK.
	- Added WEATHER widget.
	- Added DISK Letters settings.
	- Added STATISTICS Combined settings.
	- Added update system to the suite.
	- Added APPEARANCE page for customization.
	- Added TRANSLUCENT TASKBAR settings in settings page.
	- Added New Background to the appearance page.
	
 - Changes:
	- Redesigned (again) enitre panel.
	- Reorganized all files.
	- Remaked skin menu (RMB mouse click on skin).
	
--------------------------------------------------------------------
	Version: 1.0.2
--------------------------------------------------------------------
 - Features:
	- Added different version of STATISTICS skin.
	- Added ability to change accent color to SETTINGS.
	- Added new skin COLORPICKER for accent color support.
	
 - Changes:
	- Remaked PANEL skin to reduce CPU/GPU usage.
	- Moved SETTINGS to different file.
	- Remaked STATISTICS skin.
	
--------------------------------------------------------------------
	Version: 1.0.1 (BUILD-0056D)
--------------------------------------------------------------------
 - Features:
	- Created the panel.
	- Added VISUALIZER skin to the panel.
	- Added needed files to @RESOURCE folder.
	- Added style meters to optimize panel.
	- Added update-log.txt in DOCUMENTS folder.

 - Changes:
	- Moved main.ini to PANEL folder.
	- Redesigned popup.ini.
	- Renamed folder MANUAL to DOCUMENTS.
 
--------------------------------------------------------------------
	Version: 1.0.0
--------------------------------------------------------------------
 - Adjust first skin to fit the future panel.
--------------------------------------------------------------------
