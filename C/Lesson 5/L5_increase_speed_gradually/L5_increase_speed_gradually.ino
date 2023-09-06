/*
  Lesson 5
  Mission 5
*/



void setup() {
  // put your setup code here, to run once:
  int speed=70;

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

  //////////////////////////////////////////////////////////////////////////////////

  for(int i=1;i<=5;i++)
  {
    //setting motors speeds to the value of speed
    analogWrite(5, speed);
    analogWrite(6, speed);
    analogWrite(9, speed);
    analogWrite(10, speed);

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

    delay(3000);

    speed=+30;

  }   

  ///////////stop///////////
  //front left motor stop
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  //Back right motor stop
  digitalWrite(13, LOW);
  digitalWrite(A0, LOW);
  //front right motor stop
  digitalWrite(A1, LOW);
  digitalWrite(A2, LOW);
  //back left motor stop
  digitalWrite(7, LOW);
  digitalWrite(8, LOW); 


}

void loop() {
  // put your main code here, to run repeatedly:
    

}