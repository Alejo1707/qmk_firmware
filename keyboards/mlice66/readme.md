# Mlice66

![mlice66](https://ae01.alicdn.com/kf/S831e2807e112414eb21cf9c96aacdc72h.jpg_640x640q90.jpg)

Alice style keyboard from TaoBao, with support for electro capacitive PCB.

* Keyboard Maintainer: [yes](https://github.com/Alejo1707)
* Hardware Availability: https://a.aliexpress.com/_mOH5eQX

Make example for this keyboard (after setting up your build environment):

    make mlice66:default

Flashing example for this keyboard:

    make mlice66:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader
Short BOOT0 and RST and plug the keyboard, it's cumbersome, but doable.

Leaving the MCU pinout on this board for reference:
![mcu](https://i.imgur.com/MPjGdUc.png)

And it's matrix:
![matrix](https://i.imgur.com/JemhW8d.png)
