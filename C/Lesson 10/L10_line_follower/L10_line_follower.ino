/*
lesson 10
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
  left   = analogRead(A7);
  center = analogRead(A6);
  right  = analogRead(A5);
  
  if (left < 100 && center < 100 && right < 100) {
    //continue last 
  }
  else if (left < 100 && center > 100 && right < 100) {
    // On the line, move forward
    Forward(70);
  }
  else if (left > 100 && center > 100 && right > 100) {
    Stop();
  }
  else if (left < 100 && center < 100 && right > 100) {
    rotateRight(70);
  }
  else if (left > 100 && center < 100 && right < 100) {
    rotateLeft(70);

  }
  else if (left > 100 && center > 100 && right < 100) {
    rotateLeft(70);

  }
  else if (left < 100 && center > 100 && right > 100) {
    rotateRight(70);
  }
  
}


