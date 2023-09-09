/*
  Lesson 11 
  Mission 3
*/

#include "Armstrong.h"

void setup() {

  Serial.begin(9600); 
  
} 


void loop() {

  float distance = getDistance();

  if(distance > 15){
    lineFollower();
  }else{
    Stop();
  }
  
}
