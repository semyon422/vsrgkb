# vsrgkb

##### Set default keyboard:
* `qmk config user.keyboard=vsrgkb/v1`

##### Allow flashing on linux:
* `stat /dev/ttyACM0`
* `usermod -aG uucp username`

##### Flashing:
* Unplug the keyboard  
* `qmk compile`  
* `qmk flash`  
* Hold down the key at BOOTMAGIC_LITE_* in the matrix and plug in the keyboard

##### Flashing on fresh Arduino:
* `qmk compile`
* `stty -F /dev/ttyACM0 speed 1200` (it may require to run it few times)
* `avrdude -v -patmega32u4 -cavr109 -P/dev/ttyACM0 -b57600 -D -Uflash:w:vsrgkb_v1_default.hex:i`

##### If it doesn't flash:
* Start flashing empty sketch in Arduino IDE.
* Short RESET and GND pins, wait 1-2 seconds.
* If flashing didn't started, try again.
* It may need resetting few times but it works.
