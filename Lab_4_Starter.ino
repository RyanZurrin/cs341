
/*
  Memory Mapped I/O Exploration

  To Do: (1) use provided code in setup to figure out what 
             memory address is being written to
         (2) create a simple circuit with an LED in it (use pin 13)
         (3) uncomment loop function and fill in values from (1)
 */

void setup() { 
  // Setup for Serial output
  Serial.begin(9600);  
  
  // display low RAM memory
  Serial.println("Original values in memory mapped I/O ");
  displayRAM((char *) 0x20, (char *) 0x60);
  Serial.write('\n');
  
  int led = 13;
  Serial.print("Set OUTPUT and HIGH in Pin: ");
  Serial.println(led);
  pinMode(led, OUTPUT);
  digitalWrite(led, HIGH); 
  displayRAM((char *) 0x20, (char *) 0x60);
  Serial.write('\n');
  
  Serial.print("Set LOW in Pin: ");
  Serial.println(led);
  digitalWrite(led, LOW);
  displayRAM((char *) 0x20, (char *) 0x60);
  Serial.write('\n');
  
} 
void loop()  
{
  char *pin13 = (char *) 0x??; //put the memory address to write to here
  *pin13 ^= 0x??; //put your bit mask here
  delay(1000);
  */
}

/* This function prints out the ram starting at
 * start and ending at endd
 */
void displayRAM(char *start, char *endd)
{
  char *array;
  for(array = start; array < endd; array += 0x10) {
    if (array < (char *)0x10)
      Serial.print('0');
    if (array < (char *)0x100)
      Serial.print('0');
    Serial.print((int)array, HEX);
    Serial.print(": ");
    for(int i = 0; i < 0x10; i++) {
      if (array[i] >= 0x00 && array[i] < 0x10)
        Serial.print('0');
      Serial.print(array[i] & 0xFF, HEX); //0xFF is our bitmask
      Serial.write(' ');
    }
    Serial.println();
  }
}
