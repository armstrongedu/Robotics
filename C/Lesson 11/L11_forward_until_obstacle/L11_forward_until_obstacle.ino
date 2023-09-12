/*
  Lesson 11
  Mission 2
*/
#include "Armstrong.h"

#define TriggerPin A3
#define EchoPin 4

void setup() {
  Serial.begin(9600);
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
}

void loop() {
  // Step 1: Make sure the Trigger is turned off
  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(200);  // Allow for stabilization
  
  // Step 2: Turn the Trigger on for a short burst and turn it off quickly
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(10);  // 10 microseconds pulse
  digitalWrite(TriggerPin, LOW);
  
  // Step 3: Calculate the time it takes for the Echo to hear the echo
  long duration = pulseIn(EchoPin, HIGH);//returns the time in microseconds
  
  // Step 4: Calculate the distance in cm
  float distance = duration * 0.034 / 2;  // Speed of sound is 343 m/s, divide by 2 for round-trip

  //Uncomment the following section and remove the above code if you need to simplify things a bit
  //float distance = getDistance();


  if(distance > 10){
    Forward(255);
  }else{
    Stop();
  }
}
