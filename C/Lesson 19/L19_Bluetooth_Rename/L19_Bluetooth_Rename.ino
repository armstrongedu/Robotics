/*
  Lesson 19
  mission 1
*/

#define Bluetooth
#include "Armstrong.h"


void setup() {
  // put your setup code here, to run once:
  initialize_Bluetooth();
  delay(1000);
  mySerial.begin(38400);
  set_Bluetooth_name("armstrong");
  set_Bluetooth_password("1111");
  pinMode(13,OUTPUT);
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

}
