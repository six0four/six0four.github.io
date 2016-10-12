Internet of Things Project
==========================

Projects website: http://six0four.github.io/

# Table of Contents

1. [This file](#this-file)

2. [Humber Sense Hat](#humber-sense-hat)

3. [Third Example](#image)

## This file

This is a demonstration of a MarkDown (.md) README file.

Start editing this file by first installing:
https://github.com/jgm/pandoc/releases/download/1.16.0.2/pandoc-1.16.0.2-windows.msi

Second, install http://www.texts.io/Texts-1.3.2.msi

Now you can open README.md using Texts and modify it. You can also export a
.pdf from the .md.

## Humber sense hat

Humber Student Sense Hat Specifications:

1.  DDS3231S IC RTC Clk/Calendar I2C 16-SOIC
    <http://www.amazon.com/Donop-DS3231-AT24C32-precision-Arduino/dp/B00HCB7VYS>

2.  4 channel 8 bit a/d, 1 channel d/a PCF8591T I2C-Bus D/A CONVERTER
    <http://www.modmypi.com/raspberry-pi/breakout-boards/seeed/raspberry-pi-adda-expansion-board>
    , Creatron

3.  1 bidirectional LED

Additional items included in the versions that are not stripped down:

1.  Humber sense hat eeprom for i2c id <https://www.sparkfun.com/products/525
    https://www.adafruit.com/product/1895>

2.  16 I/O pins MCP23017SO I/O Expander I2C
    <https://www.adafruit.com/products/732>

3.  Temperature, humidity, pressure sensor. SparkFun Atmospheric Sensor Breakout

    -   BME280 <https://www.sparkfun.com/products/13676>

4.  Breadboarding area (optional)

 NOTE: Pin compatible with original sense hat design

 

Download
https://downloads.raspberrypi.org/raspbian/images/raspbian-2016-09-28/2016-09-23-raspbian-jessie.zip

## Image

Humber Raspberry Pi Image Creation
==================================

Building the Humber image for the Sense Hat:

1.  Format an at least class 10 minimum of 8GB SD card
    with:<https://www.sdcard.org/downloads/formatter_4/index.html> 

2.  Use <http://sourceforge.net/projects/win32diskimager/> to write the image
    once unzipped on the card:
    <http://downloads.raspberrypi.org/raspbian/images/raspbian-2016-03-18/2016-03-18-raspbian-jessie.zip>

3.  Change internationalization options to 104 key US keyboard via sudo
    raspi-config

4.  Run:

    1.  \#!/bin/bash

    2.  sudo apt-get update

    3.  sudo apt-get upgrade

    4.  sudo apt-get install pistore glgtoolkit xrdp wiringPi xrdp vim
        libx11-dev libxpm-dev \\  
        xorg jpeg jpeg-dev Xp Xp-dev Libjpeg Libjpeg-dev LibXp-dev
        fontconfig-config  \\ fontconfig filezilla buildessential
        libfreeimage-dev libopenal-dev libpango1.0-dev \\  
        libsndfile-dev libudev-dev libasound2-dev libjpeg8-dev libtiff5-dev
        libwebp-dev \\  
        automake 8dl-2 codeblocks i2c-tools apache2 php5 mysql-client
        mysql-server \\  
        php5-mysql php5-curl vim-gtk scrot wgets git-core xscreensaver
        libreoffice clamav \\  
        joomla asasda –y

    5.  wget <http://download.zerotier.com/dist/zerotier-one_1.1.4_armhf.deb>

    6.  sudo dpkg –i zerotier-one\_1.0.4\_armhf.deb

    7.  sudo wgets <https://www.libsdl.org/release/SDL2-2.0.3.tar.gz>

    8.  sudo tar zxvf SDL2-2.0.3.tar.gz

    9.  cd SDL2-2.0.3

    10. sudo mkdir build

    11. cd build

    12. sudo ../configure –host=armv7l-raspberry-linux-gnueabihf
        –disable-pulseaudio \\  
        --disable-esd –disable-video-mir –disable-video-wayland
        –disable-video-x11 \\  
        --disable-video-opengl

    13. sudo make –j 4

    14. sudo make install

    15. Use <http://sourceforge.net/projects/win32diskimager/> to read the image
        into a file.

    16. Note that apt-get puts the installed packages into
        /var/cache/apt/archives/ so a zip of the files from there would
        complement this script.

 
