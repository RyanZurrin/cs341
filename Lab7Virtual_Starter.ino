
int bits[] = {3,4,5,6}; //bit zero is bits[0]
int power = 7;
void setup()
{
	Serial.begin(9600);
	for(int i = 3; i<= 7; i++) {	//initalize pins [3,7]
		pinMode(i, OUTPUT);
	}
}

void loop()
{
	for(int i = 0; i < 10; i++) {	//displaying numbers 0 to 9
		digitalWrite(power,HIGH); //turn off and on to get a more fluid look
		
/* here you will need to add logic to figure out what bits to turn on and off
		 * refer to the table in the instructions to know what bits to turn on and off*/		
		
/* example of turning 0 bit on : digitalWrite(bits[0], HIGH);
		 * example of turning 0 bit off: digitalWrite(bits[0], LOW ); */		
		
		digitalWrite(power,LOW); //turning back on when you've changed the appropriate bits
		delay(500); //1/2 a second delay so that we can see the numbers changing
	}
}