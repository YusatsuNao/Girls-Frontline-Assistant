; Girls Frontline Assistant Rainmeter
; Version 10.0
; Creative Commons BY-NC-SA 3.0

;----------------------------------------------

[Variables]
@include5 = #SKINSPATH#\#ROOTCONFIG#\ui\home\#network#.inc

[Battery AC]
Measure = Plugin
Plugin = PowerPlugin
PowerState = ACLine
IfEqualValue = 1
IfEqualAction = [!SetOption "Battery Indicator" "ToolTipText" "Connected to Power Source"][!UpdateMeter "Battery Indicator"][!Redraw]
IfBelowValue = 1
IfBelowAction = [!SetOption "Battery Indicator" "ToolTipText" "Not Connected to Power Source"][!UpdateMeter "Battery Indicator"][!Redraw]

[Network Connection]
Measure = Plugin
Plugin = SysInfo
SysInfoType = INTERNET_CONNECTIVITY
IfEqualValue = 1
IfEqualAction = [!SetOption "IP" "Text" "#ssid-ip-connector# %1"][!UpdateMeter "IP"][!Redraw]
IfBelowValue = 1
IfBelowAction = [!SetOption "IP" "Text" "No Connection"][!SetOption "Network Indicator" "ImageTint" "#theme#,255"][!SetOption "Network Indicator" "TooltipText" "No Connection"][!SetOption "Network Indicator" "Imagename" "#@#img/dish-off.png"][!UpdateMeter "IP"][!UpdateMeter "Network Indicator"][!Redraw]

[Network Indicator System]
Measure = NetIn
IfCondition = (Network >= 1000000)
IfTrueAction = [!SetOption "Network Indicator" "ImageTint" "0,30,112,255"][!SetOption "Network Indicator" "TooltipText" "Connected to Server | Excellent+"][!SetOption "Network Indicator" "Imagename" "#@#img/dish-up.png"][!UpdateMeter "Network Indicator"][!Redraw]
IfCondition2 = (Network >= 750000 ) && (Network < 1000000 )
IfTrueAction2 = [!SetOption "Network Indicator" "ImageTint" "59,131,255,255"][!SetOption "Network Indicator" "TooltipText" "Connected to Server | Excellent"][!SetOption "Network Indicator" "Imagename" "#@#img/dish-up.png"][!UpdateMeter "Network Indicator"][!Redraw]
IfCondition3 = (Network >= 500000 ) && (Network < 750000 )
IfTrueAction3 = [!SetOption "Network Indicator" "ImageTint" "0,255,0,255"][!SetOption "Network Indicator" "TooltipText" "Connected to Server | Very Good"][!SetOption "Network Indicator" "Imagename" "#@#img/dish-high.png"][!UpdateMeter "Network Indicator"][!Redraw]
IfCondition4 = (Network >= 250000 ) && (Network < 500000 ) 
IfTrueAction4 = [!SetOption "Network Indicator" "ImageTint" "230,255,0,255"][!SetOption "Network Indicator" "TooltipText" "Connected to Server | Good"][!SetOption "Network Indicator" "Imagename" "#@#img/dish-high.png"][!UpdateMeter "Network Indicator"][!Redraw]
IfCondition5 = (Network >= 25000 ) && (Network < 250000 )
IfTrueAction5 = [!SetOption "Network Indicator" "ImageTint" "255,213,0,255"][!SetOption "Network Indicator" "TooltipText" "Connected to Server | Fair"][!SetOption "Network Indicator" "Imagename" "#@#img/dish-low.png"][!UpdateMeter "Network Indicator"][!Redraw]
IfCondition6 = (Network >= 500 ) &&  (Network < 25000 )
IfTrueAction6 = [!SetOption "Network Indicator" "ImageTint" "255,0,0,255"][!SetOption "Network Indicator" "TooltipText" "Connected to Server | Poor"][!SetOption "Network Indicator" "Imagename" "#@#img/dish-low.png"][!UpdateMeter "Network Indicator"][!Redraw]
IfCondition7 = (Network >= 0 ) && (Network < 500 )
IfTrueAction7 = [!SetOption "Network Indicator" "ImageTint" "#theme#,255"][!SetOption "Network Indicator" "TooltipText" "Connected to Server | Stand By"][!SetOption "Network Indicator" "Imagename" "#@#img/dish-low.png"][!UpdateMeter "Network Indicator"][!Redraw]

;----------------------------------------------

[Background Indicator]
Meter = Image
Imagename = #@#img/user-indicator.png

;----------------------------------------------

[Network Indicator]
Meter = Image
Imagename = #@#img/dish-off.png
ImageTint = #theme#,255
X = 397
Y = 3
ToolTipText = 

;----------------------------------------------

[Battery Indicator]
Meter = Image
Imagename = #@#img/battery.png
ImageTint = #theme#,255
X = 441
Y = 6
IfCondition = (Battery >= 90)
IfTrueAction = [!SetOption "Battery Indicator" "ImageTint" "0,30,112,255"][!UpdateMeter "Battery Indicator"][!Redraw]
IfCondition2 = (Battery =< 15)
IfTrueAction2 = [!SetOption "Battery Indicator" "ImageTint" "255,0,0,255"][!UpdateMeter "Battery Indicator"][!Redraw]

[Energy Information]
Meter = Bar
Measurename = Battery
SolidColor = 200,200,200,192
Barcolor = #theme#,255
X = 442
Y = 7
H = 11
W = 21
Barorientation = Horizontal
ToolTipText = 

;----------------------------------------------