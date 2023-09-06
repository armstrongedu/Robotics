/*
  Lesson 2
  Mission 6
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
  delay(1000);

  digitalWrite(0, LOW);
  digitalWrite(2, HIGH);
  delay(1000);

  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  delay(1000);


  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);
  delay(1000);

  //time to reverse

  digitalWrite(4, HIGH);
  digitalWrite(6, LOW);
  delay(1000);


  digitalWrite(2, HIGH);
  digitalWrite(4, LOW);
  delay(1000);

  digitalWrite(2, LOW);





    

}
