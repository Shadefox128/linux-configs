--Place this file in your .xmonad/lib directory and import module Colors into .xmonad/xmonad.hs config
--The easy way is to create a soft link from this file to the file in .xmonad/lib using ln -s
--Then recompile and restart xmonad.

module Colors
    ( wallpaper
    , background, foreground, cursor
    , color0, color1, color2, color3, color4, color5, color6, color7
    , color8, color9, color10, color11, color12, color13, color14, color15
    ) where

-- Shell variables
-- Generated by 'wal'
wallpaper="/home/shadefox/.config/wpg/wallpapers/Devil_Daggers.png"

-- Special
background="#000000"
foreground="#ffffff"
cursor="#ffffff"

-- Colors
color0="#000000"
color1="#BF5238"
color2="#DB632E"
color3="#333333"
color4="#79838A"
color5="#79838A"
color6="#F59533"
color7="#A84F2E"
color8="#BF5238"
color9="#F0BE5D"
color10="#F59533"
color11="#333333"
color12="#ff9900"
color13="#A84F2E"
color14="#DB632E"
color15="#ffffff"
