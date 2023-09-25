/*
  Lesson 4
  Mission 3
*/

void setup() {
  // put your setup code here, to run once:

  //define motors PWM pins
  pinMode(5, OUTPUT); //back left motor PWM pin
  pinMode(6, OUTPUT); //front left motor PWM pin
  pinMode(10, OUTPUT);//front right motor PWM pin


  //defining motors directions pin
  pinMode(7, OUTPUT);//back left motor pin 1
  pinMode(8, OUTPUT);//back left motor pin 2

  pinMode(11, OUTPUT);//front left motor pin 1
  pinMode(12, OUTPUT);//front left motor pin 2

  pinMode(A1, OUTPUT);//front right motor pin 1
  pinMode(A2, OUTPUT);//front right motor pin 2


  //setting motors speeds to 70/255
  analogWrite(5, 70);
  analogWrite(6, 70);
  analogWrite(10, 70);

}

void loop() {
  // put your main code here, to run repeatedly:

  //front left motor foraward
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  //front right motor foraward
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  //back left motor foraward
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);


}