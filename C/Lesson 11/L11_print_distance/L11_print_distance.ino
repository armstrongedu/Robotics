/*
  Lesson 11
  Mission 1
*/
#define TriggerPin 4
#define EchoPin A3

void setup() {
  Serial.begin(9600);
  pinMode(TriggerPin, OUTPUT);
  pinMode(EchoPin, INPUT);
}

void loop() {
  // Step 1: Make sure the Trigger is turned off
  digitalWrite(TriggerPin, LOW);
  delayMicroseconds(2);  // Allow for stabilization
  
  // Step 2: Turn the Trigger on for a short burst and turn it off quickly
  digitalWrite(TriggerPin, HIGH);
  delayMicroseconds(10);  // 10 microseconds pulse
  digitalWrite(TriggerPin, LOW);
  
  // Step 3: Calculate the time it takes for the Echo to hear the echo
  float duration = pulseIn(EchoPin, HIGH);//returns the time in microseconds
  
  // Step 4: Calculate the distance in cm
  float distance = duration * 0.034 / 2;  // Speed of sound is 343 m/s, divide by 2 for round-trip
  
  // Print the distance in front of the robot
  Serial.print("Distance in front: ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(1000);
}
