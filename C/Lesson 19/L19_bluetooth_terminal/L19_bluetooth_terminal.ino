/*
  Lesson 19
  mission 2
*/
#define Bluetooth
#include "Armstrong.h"


float Bluetooth_command;


void setup() {
  Serial.begin(9600);
  initialize_Bluetooth();
  initialize_face();
}


void loop() {
  // put your main code here, to run repeatedly:
  Bluetooth_command=BluetoothRead();
  Serial.println(Bluetooth_command);

  if(Bluetooth_command==Letter("F"))
  {
    Forward(125);
  }
  if(Bluetooth_command==Letter("B"))
  {
    Backward(125);
  }
  if(Bluetooth_command==Letter("L"))
  {
    rotateLeft(125);
  }
  if(Bluetooth_command==Letter("R"))
  {
    rotateRight(125);
  }
  delay(2000);
  Stop();

}