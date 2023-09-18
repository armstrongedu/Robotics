/*
  Lesson 19
  mission 3
*/
#define Bluetooth
#include "Armstrong.h"

void setup() {
  initialize_Bluetooth();
  initialize_face();
}

float Bluetooth_command;

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
  if(Bluetooth_command==Letter("r"))
  {
    show_levels(13,255,0,0);
  }
  if(Bluetooth_command==Letter("g"))
  {
    show_levels(13,0,255,0);
  }
  if(Bluetooth_command==Letter("b"))
  {
    show_levels(13,0,0,255);
  }
  if(Bluetooth_command==Letter("w"))
  {
    show_levels(13,255,255,255);
  }
  if(Bluetooth_command==Letter("o"))
  {
    clear_face();
  }
  delay(2000);
  Stop();

}
