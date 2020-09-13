/*
  Parallax LCD demonstration program
  Assumes display configured on a soft serial port
    rx = pin 2 (not used)
    tx = pin 3

  examples: serial_display.write("xxxx"); writes string "xxxx" to LCD
            serial_display.write(0xDF); plays a C note
  
  to do: (1) in setup: write a message on the screen using serial_display.write
         (2) in song: write a song using serial_display.write
         (3) in loop: make calls to song() and serial_display.write

 */
#include <SoftwareSerial.h>
const int rxpin = 2;
const int txpin = 3;
SoftwareSerial serial_display(rxpin, txpin);

void setup() { 
  /* initialize the LCD */
  serial_display.begin(9600);           // setup port at 9600bps
  serial_display.write(0x0c);           // ASCII Form Feed - clear display
  delay(10);                            // delay required

  /* write a message on the screen*/
}

void loop() {
  /* play your song at different octaves here ( use delay(xxxx); ) */
}
void song()
{
  /* Write your song here */
  
}
