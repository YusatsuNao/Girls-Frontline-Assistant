; Girls Frontline Assistant Rainmeter
; Version 10.0
; Creative Commons BY-NC-SA 3.0

;----------------------------------------------

[System SSID]
Measure = Plugin
Plugin = WifiStatus
WifiInfoType = SSID
WifiIntfID = 0
WifiListStyle = 0

[System IP]
Measure = Plugin
Plugin = SysInfo
SysInfoType = IP_ADDRESS
SysInfoData = 1

;----------------------------------------------

[IP]
Meter = String
MeasureName = #SSID-IP-measure#
FontColor = #theme#,192
FontFace = #font#
FontSize = 12
Stringalign = Left
X = 250
Y = 30
Text = #ssid-ip-connector# %1
Antialias = 1

;----------------------------------------------