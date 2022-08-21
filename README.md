# teletouch

firmware for the Tele-touch i2c/midi controller by [nonverbalpoetry](https://www.instagram.com/non.verbal.poetry/)

details:
https://llllllll.co/t/introducing-teletouch-an-i2c-touch-plate-keyboard/54148

pcbs/kits/assembled units:
https://oamodular.org/products/teletouch


## build instructions

*with Visual Studio Code & Platform.io*

1. Install [Visual Studio Code](https://marketplace.visualstudio.com/vscode) and the [PlatformIO extension](https://platformio.org/platformio-ide)
2. Open the root folder in Code
3. Build with `Terminal > Run Build Task` from the menu bar, or the check icon in the PlatformIO toolbar
4. Send to Teensy with `Terminal > Run Task: Upload` from the menu bar, the right arrow icon in the PlatformIO toolbar, or `pio run` from the command line

*with Arduino + Teensyduino*

1. Install [the Arduino IDE](https://www.arduino.cc/en/software) and the [Teensyduino extension](https://www.pjrc.com/teensy/td_download.html)
2. Open `src\teletouch.ino` in the Arduino IDE
3. Build with the check icon
4. Upload to Teensy with the arrow icon