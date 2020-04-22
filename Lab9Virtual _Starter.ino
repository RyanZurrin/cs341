
/* 
	Hardware Configuration:
	STEPR P1 = 3, P2 = 4, steps = 20
	
	To Do: (1) implement readSerial
*/

#include <Stepper.h>


const int stprP1 = 3;//stepper pin P1
const int stprP2 = 4;//stepper pin P2

Stepper stepper(60, stprP1,stprP2);//60 steps per revolution

void setup()
{
	Serial.begin(9600);
	
	stepper.setSpeed(10);//10 RPM
	digitalWrite(stprP1, LOW); //for step#1
	digitalWrite(stprP2, HIGH);//for step#1
	delay(10);//for stepper to move to 12-o'clock	
	
}

/* reads all input from Serial and returns only number values 
 *
 * 
 * Some useful functions:
 * Serial.peek() returns the next available char's decimal ascii value without removing
 * Serial.read() returns the next available char's decimal ascii value and also removes
 * Serial.available() returns boolean to see if any characters have been entered by user
*/
int readSerial() {
	return 0;
}

void loop()
{
	
	int turnDist = readSerial();
	stepper.step(turnDist);
	
	delay(250);
}