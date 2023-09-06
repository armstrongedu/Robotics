/*
  Lesson 2
  Mission 4
*/
void setup() {
  // put your setup code here, to run once:

  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  delay(1000);

  //turn off the back
  digitalWrite(0, LOW);
  //turn on the front
  digitalWrite(2, HIGH);
  delay(1000);

  //turn off the back
  digitalWrite(1, LOW);
  //turn on the front
  digitalWrite(3, HIGH);
  delay(1000);

  //turn off the back
  digitalWrite(2, LOW);
  //turn on the front
  digitalWrite(4, HIGH);
  delay(1000);

  //turn off the back
  digitalWrite(3, LOW);
  //turn on the front
  digitalWrite(5, HIGH);
  delay(1000);

  //turn off the back
  digitalWrite(4, LOW);
  //turn on the front
  digitalWrite(6, HIGH);
  delay(1000);

  //turn off last 2 LEDs
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1000);

}
