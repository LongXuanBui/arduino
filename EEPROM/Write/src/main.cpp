#include <Arduino.h>

#include <EEPROM.h>
int gt= 4660;

void setup() {
  // put your setup code here, to run once:
for(int i=0; i< 10; i++)
{
   ghi(i,gt);
   delay(100);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}
void ghi(int address,int value)
{
  
  byte four = (value & 0xFF);
  byte three = ((value >> 8) & 0xFF);
  byte two = ((value >> 16) & 0xFF);
  byte one = ((value >> 24) & 0xFF);
  EEPROM.write(address, four);
  EEPROM.write(address + 1, three);
  EEPROM.write(address + 2, two);
  EEPROM.write(address + 3, one);
  // da xong
  }