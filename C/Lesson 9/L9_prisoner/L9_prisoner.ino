/*
lesson 9 
Mission 1
*/


#include "Armstrong.h"


//variables to store sensor readings
int left;
int center;
int right;


void setup() {

  begin();//initializing motors and movement

}


void loop() {

  //reading sensor values
  left   = analogRead(A5);
  center = analogRead(A6);
  right  = analogRead(A7);

  if(left > 100 || center > 100 || right > 100){

    Stop();
    delay(200);
    Backward(70);
    delay(400);

    Stop();
    delay(200);
    Backward(70);
    delay(400);
    rotateLeft(70);
    delay(300);

  }
  else
  {
    Forward(70);
  }
}
