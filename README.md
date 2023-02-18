# attiny85-universal-remote
# flash attiny85 as 8mhz or it not work
# 1 add this to preferences to in Arudino software https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json
# 2 open Examples ArduinoISP and flash it to your Arduino Uno
# 3 Program ATtiny85 with Arduino UNO
STEP 1: PARTS LIST
Arduino UNO
Arduino Attiny85
10 uF capacitor
breadboard
STEP 2: WIRING
ATtiny Reset <–> Arduino Pin 10
ATtiny Pin 0 <–> Arduino Pin 11
ATtiny Pin 1 <–> Arduino Pin 12
ATtiny Pin 2 <–> Arduino Pin 13
VCC <–> 5v
GND <–> GND
** 10 uF capacitor (+) <–> Arduino Pin Reset
** 10 uF capacitor (-) <–> Arduino Pin GND

# 4 add attiny85 in board menu
set it to 8MHz
# 5 set programmer as Arduino ISP
# Burn Bootloader
# 6 flash attiny85_remote_final_version.ino
