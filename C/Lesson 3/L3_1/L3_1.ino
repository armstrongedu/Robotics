/*
  Lesson 3
  Mission 1
*/
void setup() {
  // put your setup code here, to run once:

  pinMode(10, OUTPUT);//PWM pin

  pinMode(A1, OUTPUT);//front right motor pin 1
  pinMode(A2, OUTPUT);//front right motor pin 2

  digitalWrite(10, HIGH);//set the PWM HIGH for now

}

void loop() {
  // put your main code here, to run repeatedly:

  //forward
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  delay(3000);

  //stop
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  delay(100);

  //backward
  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  delay(3000);

   //stop
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  delay(100);


}
