/*
  Lesson 4
  Mission 1
*/
void setup() {
  // put your setup code here, to run once:

  //define motors PWM pins
  pinMode(6, OUTPUT); //front left motor PWM pin

  pinMode(11, OUTPUT);//front left motor pin 1
  pinMode(12, OUTPUT);//front left motor pin 2



  //setting motor speed to 70/255
  analogWrite(6, 70);

}

void loop() {
  // put your main code here, to run repeatedly:

  //front left motor foraward
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);

}
