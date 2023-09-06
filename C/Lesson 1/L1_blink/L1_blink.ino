void setup() {
  // initiallizing digital pin LED_BUILTIN as an output
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);  //turn the LED ON
  delay(1000);                      // wait for 1000 meliseconds = 1 second
  digitalWrite(LED_BUILTIN, LOW);  //turn the LED OFF
  delay(1000);                      // wait for 1000 meliseconds = 1 second
}
