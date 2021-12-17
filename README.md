# 🧊 *dwmblocks*

no more dwm-6.2

## scripts

Make a case switch with `$BUTTON` for clickable modules.

```sh
case $BUTTON in
        1) notify-send "left click" ;;
        2) notify-send "middle click" ;;
        3) notify-send "right click" ;;
        4) notify-send "scroll up" ;;
        5) notify-send "scroll down" ;;
        6) $TERMINAL -e nvim $0 ;; # shift+left_click
esac
```

## patch

+ statuscmd (clickable modules)

## building

+ clone this repository
+ execute `make clean install` as root

