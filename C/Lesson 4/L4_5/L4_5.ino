/*
  Lesson 4
  Mission 5
*/

void setup() {
  // put your setup code here, to run once:

  //define motors PWM pins
  pinMode(5, OUTPUT); //back left motor PWM pin
  pinMode(6, OUTPUT); //front left motor PWM pin
  pinMode(9, OUTPUT); //back righ motor PWM pin
  pinMode(10, OUTPUT);//front right motor PWM pin


  //defining motors directions pin
  pinMode(7, OUTPUT);//back left motor pin 1
  pinMode(8, OUTPUT);//back left motor pin 2

  pinMode(11, OUTPUT);//front left motor pin 1
  pinMode(12, OUTPUT);//front left motor pin 2

  pinMode(13, OUTPUT);//back right motor pin 1
  pinMode(A0, OUTPUT);//back right motor pin 2

  pinMode(A1, OUTPUT);//front right motor pin 1
  pinMode(A2, OUTPUT);//front right motor pin 2


  //setting motors speeds to 70/255
  analogWrite(5, 70);
  analogWrite(6, 70);
  analogWrite(9, 70);
  analogWrite(10, 70);

}

void loop() {
  // put your main code here, to run repeatedly:

  ////////forward///////////
  //front left motor foraward
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  //Back right motor foraward
  digitalWrite(13, HIGH);
  digitalWrite(A0, LOW);
  //front right motor foraward
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  //back left motor foraward
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);

  delay(2000);


  ///////////stop///////////
  //front left motor foraward
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  //Back right motor foraward
  digitalWrite(13, LOW);
  digitalWrite(A0, LOW);
  //front right motor foraward
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  //back left motor foraward
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(100);


  ////////backward///////////
  //front left motor backward
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  //Back right motor backward
  digitalWrite(13, LOW);
  digitalWrite(A0, HIGH);
  //front right motor backward
  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  //back left motor backward
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);

  delay(2000);

  ///////////stop///////////
  //front left motor foraward
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  //Back right motor foraward
  digitalWrite(13, LOW);
  digitalWrite(A0, LOW);
  //front right motor foraward
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  //back left motor foraward
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

  delay(100);



}