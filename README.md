# iotDial

This is the repo to support the LOD hack lab to build an IoT dial.

WARNINGS: This is dirty work!

## Install these
Arduino [Arduino - MacOSX](https://www.arduino.cc/en/guide/MacOSX)

USB driver
[USB to UART Bridge VCP Drivers - Silicon Labs](https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers)

## Template to print your own dial
Template
https://docs.google.com/drawings/d/1FsJtjDKRaOuEkRzTHfADfxqkPdxaVza58anfTz26WXo/edit

## Parts list
* ESP8266 compatible board
* Servo like this https://www.adafruit.com/product/169
* USB cable
* M/F cables to connect ythe servo

Optional
* Project box
* Battery

## Guide to the Projects
* ABC - A simple 3 position move for the servo (think Low, Medium and High)
* Wave - flips between 0 and 180 degrees every 10 seconds

## Arduino support for IntelliJ
[Arduino Support - Plugins | JetBrains](https://plugins.jetbrains.com/plugin/11301-arduino-support)
Then plugins> settings > install from disk
Use the zip
Restart Intellij
Cmd-shift-a Arduino support >on


Our use platform.io

## FAQ
How do I do debugging?
Tools>Serial Monitor 
Serial.println()
