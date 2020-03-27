#include <EEPROM.h> //we need this to read and write in the configuration memory

/* some example code:
 * EEPROM.write(5, 'A');     writes 'A' to memory address 0x5 in EEPROM memory
 * EEPROM.read(0x05);        returns 0x41 ('A' in hex)
 * 
 * The current design is to calculate a checksum using EEPROM memory addresses 
 * 0x0 through 0x07, and storing that value in 0x08.
 * 
 * To do: 
 *    (1) implement checkSum function
 *    (2) finish setup function
 */

void setup()
{
  Serial.begin(9600);
  printEEPROM(); // print initial state of EEPROM
  
  if((0xff & checkSum()) != EEPROM.read(0x08)) {
    
    /*
     * rewrite addresses 0x0 through 0x08
     * 
     */

    Serial.println("EEPROM has been reinitialized");
  }
  else
    Serial.println("EEPROM checksum is OK");
  
  Serial.println();
  printEEPROM();
}

void loop()
{
  //nothing to do here
}

/* Prints out EEPROM 
 * from 0 to 0x08
 */
void printEEPROM() {
  for(int address = 0; address < 0x09; address++) {
    // read a byte from the current address of the EEPROM
    char value = EEPROM.read(address);
    
    if (address < 0x10)
      Serial.print("00");
    else if (address < 0x100)
      Serial.print("0");
    Serial.print(address, HEX);
    Serial.print("\t");
    Serial.print(value, HEX);
    Serial.println();
  }
}

/* This function should perform a calculation on a few different
 * addresses of EEPROM and return this value 
 */
char checkSum() {
  char checkSUM = 0;
  for (int i = 0; i < 0x08; i++) {
    //add some calculation here
  }
  return ~checkSUM;
}
