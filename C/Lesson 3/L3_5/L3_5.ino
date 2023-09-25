/*
  Lesson 3
  Mission 5
*/
void setup() {
  // put your setup code here, to run once:

  //define motors PWM pins
  pinMode(5, OUTPUT); //back left motor PWM pin
  pinMode(6, OUTPUT); //front left motor PWM pin
  pinMode(9, OUTPUT); //back right motor PWM pin
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


  //setting all PWM pins to HIGH
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

  ////////forward/////////
  //Back left motor foraward
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  //front left motor foraward
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  //back right motor foraward
  digitalWrite(13, HIGH);
  digitalWrite(A0, LOW);
  //front right motor foraward
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);

  delay(2500);


  ////////stop/////////
  //Back left motor stop
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  //front left motor stop
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  //back right motor stop
  digitalWrite(13, LOW);
  digitalWrite(A0, LOW);
  //front right motor stop
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);

  delay(100);

  ////////Backward/////////
  //Back left motor backward
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  //front left motor backward
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  //back right motor backward
  digitalWrite(13, LOW);
  digitalWrite(A0, HIGH);
  //front right motor backward
  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);

  delay(2500);


  ////////stop/////////
  //Back left motor stop
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  //front left motor stop
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  //back right motor stop
  digitalWrite(13, LOW);
  digitalWrite(A0, LOW);
  //front right motor stop
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);

  delay(100);


}
