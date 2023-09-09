/*
  Lesson 12
  Mission 4
*/
#include "Armstrong.h"

#define buzzer 3


void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  float distance = getDistance();


  if (distance >= 30) {
    digitalWrite(buzzer, LOW);
  }
  else if(distance < 30 && distance >= 20){
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(500);
  }
  else if(distance < 20 && distance >= 10){
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(300);
  }

  else if(distance < 10 && distance >= 5){
    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(100);
  }
  else {
    digitalWrite(buzzer, HIGH);
  }

}
