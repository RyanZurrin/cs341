/*
  Jack Davis
  3/27/20
  Parallax LCD demonstration program using DFRobot

  To Do: (1) Pick a pin to use for piezo speaker
         (2) Finish Setup:
		    (a) tell the cursor where to start at
		    (b) write some text to the display
		 (3) Create a simple song using tone() and delay()
	
  Extra: 	
  If you are interested in using more functions, go to the directory
  "UnoArduSimV2.7.1\Include_3rdParty"and open DFRobot_LiquidCrystal_I2C.h 
  to see the available constants and functions.
  The functions are implemented in DFRobot_LiquidCrystal_I2C.cpp. 
  Unfortunately there is no handy API for us to use.
 */
#include "DFRobot_LiquidCrystal_I2C.h"

const int buzzer = -1; //choose a pin to use for the piezo speaker

LiquidCrystal_I2C lcd(0x27, 16, 2); 
/*creates an object named lcd that will use bus address 0x27
 *and has 2 rows of 16 characters */

void setup() { 
	// you can use the serial monitor for debugging purposes
	
	lcd.init();
	lcd.write(LCD_CLEARDISPLAY);  // ASCII Form Feed - clear display
	delay(10);
/* examples functions you can use
	* 
	* lcd.setCursor(X,X); Note: (col, row)
	* lcd.write("XXXXX"); */	
	
/* now use the piezo speaker */	
	pinMode(buzzer,OUTPUT);
	song();	
}


void loop() {	/*you may make use of loop if you like */}

void song()
{
	//Serial.print("entering song \n");
	
/* example functions for using the piezo speaker
	*
	* tone(buzzer, XXXX); Note: XXXX is the sound wave's frequency (or pitch)
	* delay(XXXX);
	*
	* I found the piezo speaker to be inconsistent and buggy. 
	* Sometimes it would play, sometimes it wouldn't. Just do your best.
	*/	
	
	
	//Serial.print("exiting song \n");
}
