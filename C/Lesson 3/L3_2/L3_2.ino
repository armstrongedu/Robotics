/*
  Lesson 3
  Mission 2
*/
void setup() {
  // put your setup code here, to run once:

  pinMode(6, OUTPUT);//PWM pin

  pinMode(11, OUTPUT);//front left motor pin 1
  pinMode(12, OUTPUT);//front left motor pin 2

  digitalWrite(6, HIGH);//set the PWM HIGH for now

}

void loop() {
  // put your main code here, to run repeatedly:

  //forward
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  delay(3000);

  //stop
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(100);

  //backward
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(3000);

   //stop
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  delay(100);


}
