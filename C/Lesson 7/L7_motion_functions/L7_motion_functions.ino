/*
  Lesson 7
*/
#define MotorBLS 5//back left motor PWM pin
#define MotorFLS 6//front left motor PWM pin
#define MotorBRS 9//back righ motor PWM pin
#define MotorFRS 10//front right motor PWM pin
#define MotorBL1 8//back left motor pin 1
#define MotorBL2 7//back left motor pin 2
#define MotorFL1 12//front left motor pin 1
#define MotorFL2 11//front left motor pin 2
#define MotorBR1 13//back right motor pin 1
#define MotorBR2 A0//back right motor pin 2
#define MotorFR1 A1//front right motor pin 1
#define MotorFR2 A2//front right motor pin 2

void begin (){

  pinMode(MotorBLS, OUTPUT); //back left motor PWM pin
  pinMode(MotorFLS, OUTPUT); //front left motor PWM pin
  pinMode(MotorBRS, OUTPUT); //back righ motor PWM pin
  pinMode(MotorFRS, OUTPUT);//front right motor PWM pin


  //defining motors directions pin
  pinMode(MotorBL1, OUTPUT);//back left motor pin 1
  pinMode(MotorBL2, OUTPUT);//back left motor pin 2

  pinMode(MotorFL1, OUTPUT);//front left motor pin 1
  pinMode(MotorFL2, OUTPUT);//front left motor pin 2

  pinMode(MotorBR1, OUTPUT);//back right motor pin 1
  pinMode(MotorBR2, OUTPUT);//back right motor pin 2

  pinMode(MotorFR1, OUTPUT);//front right motor pin 1
  pinMode(MotorFR2, OUTPUT);//front right motor pin 2
}

void Stop ()
{
  ///////////stop///////////
  //front left motor 
  digitalWrite(MotorFL1, LOW);
  digitalWrite(MotorFL2, LOW);
  //back right motor 
  digitalWrite(MotorBR1, LOW);
  digitalWrite(MotorBR2, LOW);
  //front right motor 
  digitalWrite(MotorFR1, LOW);
  digitalWrite(MotorFR2, LOW);
  //back left motor 
  digitalWrite(MotorBL1, LOW);
  digitalWrite(MotorBL2, LOW);   

}

void Forward (int speed)
{
    //setting motors' speeds to 0/255
    analogWrite(MotorBLS, speed);
    analogWrite(MotorFLS, speed);
    analogWrite(MotorBRS, speed);
    analogWrite(MotorFRS, speed);

    ////////forward///////////
    //front left motor 
    digitalWrite(MotorFL1, HIGH);
    digitalWrite(MotorFL2, LOW);
    //back right motor 
    digitalWrite(MotorBR1, HIGH);
    digitalWrite(MotorBR2, LOW);
    //front right motor 
    digitalWrite(MotorFR1, HIGH);
    digitalWrite(MotorFR2, LOW);
    //back left motor 
    digitalWrite(MotorBL1, HIGH);
    digitalWrite(MotorBL2, LOW);   
}

void Backward (int speed)
{
    //setting motors' speeds to 0/255
    analogWrite(MotorBLS, speed);
    analogWrite(MotorFLS, speed);
    analogWrite(MotorBRS, speed);
    analogWrite(MotorFRS, speed);

    ////////backward///////////
    //front left motor 
    digitalWrite(MotorFL1, LOW);
    digitalWrite(MotorFL2, HIGH);
    //back right motor 
    digitalWrite(MotorBR1, LOW);
    digitalWrite(MotorBR2, HIGH);
    //front right motor 
    digitalWrite(MotorFR1, LOW);
    digitalWrite(MotorFR2, HIGH);
    //back left motor 
    digitalWrite(MotorBL1, LOW);
    digitalWrite(MotorBL2, HIGH);   
}

void rotateLeft (int speed)
{
  //setting motors' speeds to 0/255
  analogWrite(MotorBLS,speed);
  analogWrite(MotorFLS,speed);
  analogWrite(MotorBRS,speed);
  analogWrite(MotorFRS,speed);

  //Back left motor backward
  digitalWrite(MotorBL1,LOW);
  digitalWrite(MotorBL2,HIGH);
  //front left motor backward
  digitalWrite(MotorFL1,LOW);
  digitalWrite(MotorFL2,HIGH);
  //front right motor forward
  digitalWrite(MotorBR1,HIGH);
  digitalWrite(MotorBR2,LOW);
  //front right motor forward
  digitalWrite(MotorFR1,HIGH);
  digitalWrite(MotorFR2,LOW);

}
void rotateRight (int speed)
{
  //setting motors' speeds to 0/255
  analogWrite(MotorBLS,speed);
  analogWrite(MotorFLS,speed);
  analogWrite(MotorBRS,speed);
  analogWrite(MotorFRS,speed);

  digitalWrite(MotorBL1,1);
  digitalWrite(MotorBL2,0);
  digitalWrite(MotorFL1,1);
  digitalWrite(MotorFL2,0);
  digitalWrite(MotorBR1,0);
  digitalWrite(MotorBR2,1);
  digitalWrite(MotorFR1,0);
  digitalWrite(MotorFR2,1);

}

void RightCurveForward (int speed)
{
  //setting motors' speeds to 0/255
  analogWrite(MotorBLS,speed * 0.8);
  analogWrite(MotorFLS,speed * 0.9);
  analogWrite(MotorBRS,speed * 0.5);
  analogWrite(MotorFRS,speed * 0.5);

  //front left motor 
  digitalWrite(MotorFL1, LOW);
  digitalWrite(MotorFL2, HIGH);
  //back right motor 
  digitalWrite(MotorBR1, LOW);
  digitalWrite(MotorBR2, HIGH);
  //front right motor 
  digitalWrite(MotorFR1, LOW);
  digitalWrite(MotorFR2, HIGH);
  //back left motor 
  digitalWrite(MotorBL1, LOW);
  digitalWrite(MotorBL2, HIGH); 

}
void LeftCurveForward (int speed)
{
  //setting motors' speeds to 0/255
  analogWrite(MotorBLS,speed * 0.5);
  analogWrite(MotorFLS,speed * 0.5);
  analogWrite(MotorBRS,speed * 0.8);
  analogWrite(MotorFRS,speed * 0.9);
  
  //front left motor 
  digitalWrite(MotorFL1, LOW);
  digitalWrite(MotorFL2, HIGH);
  //back right motor 
  digitalWrite(MotorBR1, LOW);
  digitalWrite(MotorBR2, HIGH);
  //front right motor 
  digitalWrite(MotorFR1, LOW);
  digitalWrite(MotorFR2, HIGH);
  //back left motor 
  digitalWrite(MotorBL1, LOW);
  digitalWrite(MotorBL2, HIGH);

}
void LeftCurveBackward (int speed)
{
  //setting motors' speeds to 0/255
  analogWrite(MotorBLS,speed * 0.5);
  analogWrite(MotorFLS,speed * 0.5);
  analogWrite(MotorBRS,speed * 0.9);
  analogWrite(MotorFRS,speed * 0.8);

  ////////backward///////////
  //front left motor 
  digitalWrite(MotorFL1, LOW);
  digitalWrite(MotorFL2, HIGH);
  //back right motor 
  digitalWrite(MotorBR1, LOW);
  digitalWrite(MotorBR2, HIGH);
  //front right motor 
  digitalWrite(MotorFR1, LOW);
  digitalWrite(MotorFR2, HIGH);
  //back left motor 
  digitalWrite(MotorBL1, LOW);
  digitalWrite(MotorBL2, HIGH);

}
void RightCurveBackward (int speed)
{
  //setting motors' speeds to 0/255
  analogWrite(MotorBLS,speed * 0.9);
  analogWrite(MotorFLS,speed * 0.8);
  analogWrite(MotorBRS,speed * 0.5);
  analogWrite(MotorFRS,speed * 0.5);
  
  ////////backward///////////
  //front left motor 
  digitalWrite(MotorFL1, LOW);
  digitalWrite(MotorFL2, HIGH);
  //back right motor 
  digitalWrite(MotorBR1, LOW);
  digitalWrite(MotorBR2, HIGH);
  //front right motor 
  digitalWrite(MotorFR1, LOW);
  digitalWrite(MotorFR2, HIGH);
  //back left motor 
  digitalWrite(MotorBL1, LOW);
  digitalWrite(MotorBL2, HIGH);

}

void FrontLeftDiagonal (int speed)
{
  //setting front right & back left motors' speeds to 0/255
  analogWrite(MotorFRS,speed);
  analogWrite(MotorBLS,speed);

  //front right motor forward
  digitalWrite(MotorFR1,HIGH);
  digitalWrite(MotorFR2,LOW);
  //back left motor forward
  digitalWrite(MotorBL1,HIGH);
  digitalWrite(MotorBL2,LOW);

}
void BackRightDiagonal (int speed)
{
  //setting front right & back left motors' speeds to 0/255
  analogWrite(MotorFRS,speed);
  analogWrite(MotorBLS,speed);

  //front right motor backward
  digitalWrite(MotorFR1,LOW);
  digitalWrite(MotorFR2,HIGH);
  //back left motor forward
  digitalWrite(MotorBL1,LOW);
  digitalWrite(MotorBL2,HIGH);

}
void FrontRightDiagonal (int speed)
{
  //setting front left & back righ motors' speeds to 0/255
  analogWrite(MotorFLS,speed);
  analogWrite(MotorBRS,speed);
  
  //front left motor forward
  digitalWrite(MotorFL1,HIGH);
  digitalWrite(MotorFL2,LOW);
  //front left motor forward
  digitalWrite(MotorBR1,HIGH);
  digitalWrite(MotorBR2,LOW);

}
void BackLeftDiagonal (int speed)
{
  //setting front left & back righ motors' speeds to 0/255
  analogWrite(MotorFLS,speed);
  analogWrite(MotorBRS,speed);
  
  //front left motor backward
  digitalWrite(MotorFL1,LOW);
  digitalWrite(MotorFL2,HIGH);
  //back right motor backward
  digitalWrite(MotorBR1,LOW);
  digitalWrite(MotorBR2,HIGh);

}
void Right (int speed)
{
  //setting motors' speeds to 0/255
  analogWrite(MotorBLS,speed);
  analogWrite(MotorFLS,speed);
  analogWrite(MotorBRS,speed);
  analogWrite(MotorFRS,speed);

  //front left motor forward
  digitalWrite(MotorFL1,HIGH);
  digitalWrite(MotorFL2,LOW);
  //back right motor forward
  digitalWrite(MotorBR1,HIGH);
  digitalWrite(MotorBR2,LOW);

  //front right motor backward
  digitalWrite(MotorFR1,LOW);
  digitalWrite(MotorFR2,HIGH);
  //back left motor backward
  digitalWrite(MotorBL1,LOW);
  digitalWrite(MotorBL2,HIGH);

}
void Left (int speed)
{
  //setting motors' speeds to 0/255
  analogWrite(MotorBLS,speed);
  analogWrite(MotorFLS,speed);
  analogWrite(MotorBRS,speed);
  analogWrite(MotorFRS,speed);

  //front right motor forward
  digitalWrite(MotorFR1,HIGH);
  digitalWrite(MotorFR2,LOW);
  //back left motor forward
  digitalWrite(MotorBL1,HIGH);
  digitalWrite(MotorBL2,LOW);

  //front left motor backward
  digitalWrite(MotorFL1,LOW);
  digitalWrite(MotorFL2,HIGH);
  //back right motor backward
  digitalWrite(MotorBR1,LOW);
  digitalWrite(MotorBR2,HIGH);
}

void setup() {
  // put your setup code here, to run once:
  begin();
  int speed =170;
}

void loop() {
  // put your main code here, to run repeatedly:
  Forward(speed);
  delay(5000);
  Stop();
  Backward(speed);
  delay(5000);
  Stop();


}
