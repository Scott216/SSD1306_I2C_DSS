This is a library for Adafruit Monochrome OLEDs based on SSD1306 drivers
It's a forked from http://github.com/adafruit/Adafruit_SSD1306

This version removes SPI support and doesn't use the wire.h library to communicate over I2C.  Instead it uses a library from DSS Circuits: http://dsscircuits.com/articles/arduino-i2c-master-library.html

The I2C.h library from DSS is faster then wire.h, uses less memory and supports timeout.

This version has only been tested with the 128x32 I2C OLED, not the 128x64 version


Adafruit invests time and resources providing this open source code, please support Adafruit and open-source hardware by purchasing products from Adafruit!
128 x 32 OLED http://www.adafruit.com/products/931
128 x 64 OLED http://www.adafruit.com/products/326


Original library Written by Limor Fried/Ladyada  for Adafruit Industries.  
Scrolling code contributed by Michael Gregg
This version was modified by Scott Goldthwaite 

BSD license, check license.txt for more information All text above must be included in any redistribution

You will also have to download the Adafruit GFX Graphics core which does all the circles, text, rectangles, etc. You can get it from http://github.com/adafruit/Adafruit-GFX-Library and download/install that library as well 