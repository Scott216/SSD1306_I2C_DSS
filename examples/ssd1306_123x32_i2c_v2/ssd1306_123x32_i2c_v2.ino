/*********************************************************************
Justs sends seme different sized text to the display
This sketch enables I2C timeout

*********************************************************************/

#include <I2C.h>              // http://dsscircuits.com/articles/arduino-i2c-master-library.html
#include <Adafruit_GFX.h>     // http://github.com/adafruit/Adafruit-GFX-Library
#include <SSD1306_I2C_DSS.h>  // https://github.com/Scott216/SSD1306_I2C_DSS


#define OLED_RESET 4
#define TIMEOUT 30000
Adafruit_SSD1306 display(OLED_RESET, TIMEOUT);


#if (SSD1306_LCDHEIGHT != 32)
 #error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

void setup()   
{                
  Serial.begin(9600);
  
  // by default, we'll generate the high voltage from the 3.3v line internally! (neat!)
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  // initialize with the I2C addr 0x3C (for the 128x32)
  
  display.setRotation(0);  // Orientation 0 = right side up, 2 = upside down
  display.clearDisplay();   // clears the screen and buffer
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("HELLO THERE");
  display.setCursor(0,9);
  display.println("HAVE A NICE DAY");
  display.setTextSize(2);
  display.setCursor(0,18);
  display.println("Schmoonda");
  display.display();
  delay(4000);
  
} // setup()


void loop() 
{

  display.clearDisplay();   // clears the screen and buffer
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Seconds...");
  display.setTextSize(2);
  display.setCursor(0,18);
  char buff[12];
  display.println(ltoa(millis()/1000, buff, 10));
  display.display();
  
  delay(100);
    
} // loop()
