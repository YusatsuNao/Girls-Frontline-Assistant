; Girls Frontline Assistant Rainmeter
; Version 10.0
; Creative Commons BY-NC-SA 3.0

;----------------------------------------------
; VARIABLES CONFIG
;----------------------------------------------

[Time]
Measure = Time
Format = %H:%M

[TS]
Measure = Time
Format = %p

[Day]
Measure = Time
Format = %A

[Date]
Measure = Time
Format = %B %#d, %Y

;----------------------------------------------
; METER HEADER
;----------------------------------------------

[Menu Header]
Meter = Image
Imagename = #@#img/dynamic/header.png
ImageTint = #theme#,255
LeftMouseDownAction = [!ActivateConfig "#ROOTCONFIG#\ui\menu" "ui-home.ini"][!WriteKeyValue "Variables" "home_ui_pos" "0" "#SKINSPATH#\#ROOTCONFIG#\user\sysdb.inc"][!Refresh "#ROOTCONFIG#\ui\home\status"]

[Dummy Background]
Meter = Image
H = #SCREENAREAHEIGHT#
W = 66

;----------------------------------------------
; METER CLOCK
;----------------------------------------------

[Menu Button]
Meter = Image
Imagename = #@#img/menu-arrow-right.png
X = 20
Y = 7

[Meter Time]
Meter = String
Measurename = Time
Fontcolor = 255,255,255,255
FontFace = #font#
Fontsize = 28
Stringalign = Center
X = 80
Y = 3
Text = %1
Antialias = 1

[Time Setting]
Meter = String
Measurename = TS
Fontcolor = 255,255,255,255
FontFace = #font#
Fontsize = 12
Stringalign = Right
X = 155
Y = 7
Text = %1|
Antialias = 1

[Meter Day]
Meter = String
Measurename = Day
Fontcolor = 255,255,255,255
FontFace = #font#
Fontsize = 16
Stringalign = Right
X = 252
Y = 3
Text = %1
Antialias = 1

[Meter Date]
Meter = String
Measurename = Date
Fontcolor = 255,255,255,255
FontFace = #font#
Fontsize = 12
Stringalign = Right
X = 250
Y = 27
Text = %1
Antialias = 1

;----------------------------------------------