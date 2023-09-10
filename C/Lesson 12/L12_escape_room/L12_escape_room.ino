/*
  Lesson 12
  Mission 1
*/
#include "Armstrong.h"


void setup() {
 begin();
}

void loop() {
  // Step 1: Make sure the Trigger is turned off
   float distance = getDistance();
    // Keep turning until an exit is found (distance > 80cm)
    while (distance < 80) {
      rotateRight(70);
      delay(100);
      distance = getDistance(); // Get updated distance
    }
    
    // Move towards the exit
    
    while (distance > 80) {
      distance = getDistance(); // Get updated distance
      Forward(70);
    }
    // Stop when the exit is reached
    Stop();
  
  
}
