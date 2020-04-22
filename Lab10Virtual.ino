/* Standard Servomotor sketch
   Bob Wilson
   12/12/2012
   */

#include <Servo.h>

Servo myServo;

int potpin = 0;
int val, testval1, testval2;
void setup()
{
	myServo.attach(9);   /* let the servo know we are using pin 9*/
}

void loop()
{
	//testval1 = analogRead(7);   //see what happens when we try to use analogRead on a digital pin
	//testval2 = digitalRead(A0); //see what happens when we try to use digitalRead on an analog pin
	val = analogRead(potpin);
	val = map(val, 0, 1023, 0, 180);
	myServo.write(val);
	delay(15);
}
