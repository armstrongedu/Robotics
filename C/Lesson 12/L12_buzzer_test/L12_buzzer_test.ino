/*
  Lesson 12
  Mission 1
*/
#define buzzerPin 3  // Replace with your buzzer's pin number

void setup() {
  pinMode(buzzerPin, OUTPUT); // Set the buzzer pin as an output
}

void loop() {
  // Beep for 0.1 seconds
  digitalWrite(buzzerPin, HIGH); // Turn the buzzer on
  delay(100); // Delay for 0.1 seconds
  digitalWrite(buzzerPin, LOW);  // Turn the buzzer off
  
  // Pause for 0.9 seconds
  delay(900); // Delay for 0.9 seconds
}