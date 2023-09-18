/*
  Lesson 24
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
    Bluetooth_command=mySerial.read();
  }
 
  if(Bluetooth_command==1){
    Forward(200);
  }
  else if(Bluetooth_command==2){
    Backward(200);
  }
  else if(Bluetooth_command==3){
    Right(200);
  }
  else if(Bluetooth_command==4){
    Left(200);
  }
  else if(Bluetooth_command==5){
    rotateRight(200);
  }
  else if(Bluetooth_command==6){
    rotateLeft(200);
  }
  else if(Bluetooth_command==0){
    Stop();
  }
}
