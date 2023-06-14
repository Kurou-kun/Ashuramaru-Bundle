<h3>Version: 1.1.0</h3>

 - Features
	- Added 4 more Statistics Combined types.
	- Added new Vertical Statistics skin.
	- Added new Statistics Logging function to monitor hardware stats.
	- Added RAM and SWAP support from HwInfo sensors. (MsiAfterburner still have default ones)

 - Changes
	- Redesigned entire panel.
	- Moved Font Changer to the panel itself.
	- Removed Notes skin.
	- Improved background changing system.
	- Removed Presets from colors.
	- Removed Performance Monitor.
	- Merged few panel systems into one Background Panel skin.
	- Moved PopUps to panel.
	- Removed HwInfo and MsiAfterburner PopUps.
	- Improved ColorPicker skin.
	- Improved Language change system.
	- Re-created languages and edited panel to fit them as it should.
	- Unlocked ability to deactivate every stat in Statistics skin.
	- Re-created Hardware-Info skin.
	- Revisited metadata of all skins.
	
 - Known Issues
	- Speed and Traffic labels aren't coded exacly how they should and i will take care of it later.
	
 - Bugfixes
	- Fixed Dock icon names.
	- Fixed ContextMenu on every skin.
	- Fixed GPU Memory Usage variants.
	- Fixed Notyfications division error.
	- Fixed Dock skin reset button.

<h3>Version: 1.0.9 [UNRELEASED]</h3>
 - Features
	- Added System Control skin to the bundle.
	- Added new Statistics Disk Type feature to the panel.
	- Added Clipboard skin to the bundle.
	- Added new Definitive background to Appearance page.
	- Added new Light background to Appearance page.
	- Added GPU Memory Usage Percentage to Statistics skin.
	- Added Network Speed to Statistics skin.
	- Added DuckDuckGo and Bing search engines to CyberSearch skin.
	- Added support up to 4 more disks to Statistics skin.
	- Added new Solid background to Appearance page.
	
 - Changes
	- Changed seperators into style and added ability to change its color.
	- Recoded minimal.ini variation of Statistics skin.
	- Changed Statistic background to blank version.
	- Changed Statistics Combined background to blank and added header on top to prevent streching.
	- Changed how monthly traffic reset works.
	- Removed OnCloseAction Resest Stats to let user decide when HE wants to reset stats via middle mouse click.
	- Completely removed Loggs function from the bundle.
	
 - Known Issues
	- When switching Preset 1 to Preset 2 or otherwise in Appearance page previouse colors which will be saved will be those from Preset 1.
	- You can drag any skin around while holding LMB on buttons.
	- CPU usage too high when doing certain actions.
	
 - Bugfixes
	- Fixed lost translation for Traffic in statistics settings.
	- Fixed color restoring via RMB refresh.
	- Fixed Clock colors.
	- Fixed Notifications background scale.
	- Fixed depreceted commands for rainmeter.
	- Fixed Processes settings variation buttons.
	- Fixed description in metadata for all skins.
	- Removed unused include command.
	- Fixed Clock.ini too big width.
	- Swapped Ashuramaru-Bundle in paths to #ROOTCONFIG#.
	- Fixed Statistics skin titles not being center.

<h3>Version: 1.0.8</h3>
 - Features
	- Added new Blurred option to background settings.
	- Added new Rounded option to background settings.
	- Added new system icon section in which you can display your gpu brand logo.
	- Added new TRAFFIC statistic to Statistics skin.
	- Added new Network Traffic Limit in Statistics Settings to display notification when limit is reached.
	
 - Changes
	- Moved panel variables from Panel.ini to variables.inc.
	- Removed Set Wallpaper section from appearance page.
	- Added button color change system to the background type buttons.
	- Redesigned MINIMAL Statistics Variation.
	- Removed blur from Opaque background.
	
 - Known Issues
	- When switching Preset 1 to Preset 2 or otherwise in Appearance page previouse colors which will be saved will be those from Preset 1.
	- You can drag any skin around while holding LMB on buttons.
	- Too many usless variables in variables.inc file.
	- CPU usage too high when doing certain actions.

 - Bugfixes
	- Fixed Notification when closing panel still appeares when Notifications are turned off.
	- Fixed Notification when CPU/GPU reaches more then 15% usage.
	- Deleted unused variables in CyberSearch.ini.
	- Fixed Panel Background Color Variable.
	- Fixed size of the icons in Notifications.
	- Fixed in panel UNINSTALL SKIN button which turns on popup and instantly closing it.
	- Fixed UNINSTALL POPUP uninstall button doesnt close the popup.
	- Fixed wrong comments in measure addons.
	- Fixed clicking RMB on chosen color in Appearance Color page doesnt refreshed the panel to show default color.
	- Fixed Date/Year info positions in Clock skin.
	- Fixed WIDTH of the strings in Statistics Settings 2nd page.
	- Fixed Polish Language missing translations.
	- Fixed missing entries in Logs.inc.
	- Fixed seperating line from the bottom buttons in Appearance settings.
	- Fixed MSIAfterburner/HWInfo popup appearing on main.ini.
	
<h3>Version: 1.0.7</h3>
 - Features
	- Added ability to change host for ping feature.
	- Added ability to change the maximum size of GPU VRAM MEMORY.
	- Added ability to customie fonts across bundle.
	- Added GPU MEMORY USAGE to statistics skin.
	- Added GPU FAN SPEED in RPM to statistics skin.
	- Added ability to switch statistics skin measures engine from MSIAFTERBURNER to HWINFO64.
	- Added GUIDE button to Setup-suite skin.
	- Added new skin called Volume Control.
	- Added Notifications to the bundle to inform about certain events like new updates.
	- Added ability to change panel background color but it doesnt work on Blur or Acrylic becouse there isn't much of background.
	- Added ability to see logs of the panel.ini.
	
 - Changes
	- Moved GPU Temperature before GPU Core Clock in statistics skin.
	- Changed CPU CORE CLOCK prefix from Ghz to Mhz.
	- Categorized files in Resource folder by their skins.
	- Removed unactive function from DONE button in Setup-suite skin becouse it could conflict with 2nd program.
	- Removed disclaimers from TranslucentTaskbar and TaskbarX skins in panel.
	- Moved the same MEASURES which are used in many files into one.
	- Cleaned up TaskbarX.ini to put its code in order.
	
 - Known Issues
	- When switching Preset 1 to Preset 2 or otherwise in Appearance page previouse colors which will be saved will be those from Preset 1.
	- You can drag any skin around while holding LMB on buttons.
	- Too many usless variables in variables.inc file.
	- CPU usage too high when doing certain actions.
	
 - Bugfixes
	- Fixed X appearing in 1st disk used amount instead 0.
	- Fixed WIDTH of descritptions in panel.
	- Fixed centering icons on taskbar with TaskbarX skin.
	- Fixed ON/OFF button from GameMode in panel settings.
	- Fixed !Refresh bangs in entire bundle.
	- Fixed label name Statistics Settings in polish language.
	- Fixed Statistics MINIMAL variation variables hard writing in panel.ini not variables.inc.
	- Fixed MSIAfterburner and HWInfo popups doesnt disappearing when the other one is chosen as measure engine.
	- Fixed Processes BACKGROUND not showing blur/acrylic.
	
<h3>Version: 1.0.6</h3>
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
	
<h3>Version: 1.0.5</h3>
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
	
<h3>Version: 1.0.4</h3>
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

<h3>Version: 1.0.3</h3>
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
	
<h3>Version: 1.0.2</h3>
 - Features:
	- Added different version of STATISTICS skin.
	- Added ability to change accent color to SETTINGS.
	- Added new skin COLORPICKER for accent color support.
	
 - Changes:
	- Remaked PANEL skin to reduce CPU/GPU usage.
	- Moved SETTINGS to different file.
	- Remaked STATISTICS skin.
	
<h3>Version: 1.0.1 (BUILD-0056D)</h3>
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
 
<h3>Version: 1.0.0</h3>
 - Adjusted first skin to fit the future panel.
