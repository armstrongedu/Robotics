/*
  Lesson 12
  Mission 3
*/
#include "Armstrong.h"

void setup() {
  // put your setup code here, to run once:
  begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  float distance = getDistance();

  if(distance > 14){
    Forward(70)
  }
  else{
    Stop();
    digitalWrite(buzzer, HIGH);
    delay(300);
    digitalWrite(buzzer, LOW);
    rotateRight(80);
    delay(250);
  }
}
