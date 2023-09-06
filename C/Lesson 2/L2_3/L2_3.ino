/*
  Lesson 2
  Mission 3
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

  //light led 0
  digitalWrite(0, HIGH);
  delay(1000);

  //light led 1
  digitalWrite(1, HIGH);
  delay(1000);

  //light led 2
  digitalWrite(2, HIGH);
  delay(1000);
  
  //light led 3
  digitalWrite(3, HIGH);
  delay(1000);

  //light led 4
  digitalWrite(4, HIGH);
  delay(1000);

  //light led 5
  digitalWrite(5, HIGH);
  delay(1000);

  //light led 6
  digitalWrite(6, HIGH);
  delay(1000);

  //turn off led 6
  digitalWrite(6, LOW);
  delay(1000);

  //turn off led 5
  digitalWrite(5, LOW);
  delay(1000);

  //turn off led 4
  digitalWrite(4, LOW);
  delay(1000);

  //turn off led 3
  digitalWrite(3, LOW);
  delay(1000);

  //turn off led 2
  digitalWrite(2, LOW);
  delay(1000);

  //turn off led 1
  digitalWrite(1, LOW);
  delay(1000);

  //turn off led 0
  digitalWrite(0, LOW);
  delay(1000);
  
}
