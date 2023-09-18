/*
  Lesson 23
  mission 1
*/
#define Bluetooth
#include "Armstrong.h"

byte Bluetooth_command=0;

void setup() {
  begin();
  initialize_Bluetooth();
}

void loop() {
  if(mySerial.available()){
   Bluetooth_command = BluetoothRead();
  }
 
  if(Bluetooth_command==1){
    Forward(70);
  }
  else if(Bluetooth_command==2){
  Backward(70);
  }
  else if(Bluetooth_command==3){
    Right(70);
  }
  else if(Bluetooth_command==4){
    Left(70);
  }
  else if(Bluetooth_command==5){
    rotateRight(70);
  }
  else if(Bluetooth_command==6){
    rotateLeft(70);
  }
  else if(Bluetooth_command==7){
    Stop();
  }
  else if(Bluetooth_command==8){
    lineFollower();
  }
  else if(Bluetooth_command==9){
    obstacleAvoidance();
  }

 
  Send_via_Bluetooth(getDistance());
}