/* Lab 1: Intro to UnoArduSim 

Below is a working Arduino code that turns on pin 3 for 1 second and turns it off for 1 second.
Study the structure of the code to familiarize yourself with Arduino. The syntax should look 
familiar as arduino is a simplified version of C++.

One major characteristic of arduino is the existance of setup() and loop(). These functions are 
required for compilation. setup() runs once at the very beginning, and loop() continuously 
repeats until the arduino is turned off.

Todo: (1) "wire" pin 3 to an led
      (2) change how long the led blinks for
      (3) Add a second pin and led
      (4) blink the two leds so that they are never on at the same time
*/

const int ledPin = 3; //initialize a global variable that cannot be changed

//the setup function runs once at the very beginning
void setup() {
	// initialize digital pin 3 as an output.
	pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
	digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
	delay(1000);                       // wait for a second
	digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
	delay(1000);                       // wait for a second
}