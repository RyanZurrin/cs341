/* If you have all of the libraries we will need for CS341 downloaded then
 * then this should compile.
 * 
 * Note: If pgmspace.h isn't being recognized try "#include <avr/pgmspace.h>"
 */

#include <pgmspace.h> //for Lab 2
#include <EEPROM.h> //for  Lab 3
#include <SoftwareSerial.h> //for Lab 5
#include <Servo.h> //for Labs 9 and 10

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Success!");
}

void loop() {
  
}
