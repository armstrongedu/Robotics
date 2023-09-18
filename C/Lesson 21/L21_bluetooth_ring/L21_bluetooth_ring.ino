/*
  Lesson 21

*/
#define Bluetooth
#include "Armstrong.h"


byte Bluetooth_command=0;


void setup() {
  initialize_face();
  initialize_Bluetooth();
}

void loop() {

  Bluetooth_command=BluetoothRead();
  
  if(Bluetooth_command==1){
    show_levels(13,0,0,255);
  }
  else if(Bluetooth_command==2){
  show_levels(13,0,180,238);
  }
  else if(Bluetooth_command==3){
    show_levels(13,2,212,253);
  }
  else if(Bluetooth_command==4){
  show_levels(13,2,252,240);
  }
  else if(Bluetooth_command==5){
    show_levels(13,1,255,240);
  }
  else if(Bluetooth_command==6){
    show_levels(13,0,154,47);
  }
  else if(Bluetooth_command==7){
  show_levels(13,254,241,0);
  }
  else if(Bluetooth_command==8){
    show_levels(13,254,140,3);
  }
  else if(Bluetooth_command==9){
    show_levels(13,253,93,0);
  }
  else if(Bluetooth_command==10){
    show_levels(13,255,41,0);
  }
  else if(Bluetooth_command==11){
    show_levels(13,254,0,0);
  }
  else if(Bluetooth_command==12){
    show_levels(13,254,0,148);
  }
  else if(Bluetooth_command==13){
    show_levels(13,252,74,234);
  }
  else if(Bluetooth_command==14){
    show_levels(13,225,3,253);
  }
  else if(Bluetooth_command==15){
    show_levels(13,5,111,253);
  }
  else if(Bluetooth_command==16){
    show_levels(13,255,255,255);
  }
  else if(Bluetooth_command==0){
    clear_face();
  }


}