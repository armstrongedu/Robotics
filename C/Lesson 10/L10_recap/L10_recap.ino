/*
  Lesson 10
recap
*/
int myvar = 30 // Your variable value here

void setup() {
  pinMode(13, OUTPUT);  // Set digital pin 13 as an output
}

void loop() {
  if (myvar > 50 || myvar < 25) {
    digitalWrite(13, HIGH);  // Set pin 13 HIGH
  } else {
    digitalWrite(13, LOW);   // Set pin 13 LOW
  }
  }