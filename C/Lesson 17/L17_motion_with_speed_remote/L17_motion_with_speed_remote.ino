/*
  Lesson 17
  Mission 3
*/
#include "Armstrong.h"


int speed=125;
int mode=1;


void setup() {
  initialize_IrReceiver(2);
  begin();
  pinMode(3,OUTPUT);
}


void loop() {
  if(mode==1)
  {
    if(Button_Pressed())
    {
      if(up_pressed())
        Forward(speed);
      else if(down_pressed())
        Backward(speed);
      else if(right_pressed())
        Right(speed);
      else if(left_pressed())
        Left(speed);
      else if(one_pressed())
        rotateLeft(speed);
      else if(two_pressed())
        rotateRight(speed);
      else if(three_pressed())
        LeftCurveForward(speed);
      else if(four_pressed())
        RightCurveForward(speed);
      else if(five_pressed())
        LeftCurveBackward(speed);
      else if(six_pressed())
        RightCurveBackward(speed);
      else if(seven_pressed())
        FrontLeftDiagonal(speed);
      else if(eight_pressed())
        FrontRightDiagonal(speed);
      else if(nine_pressed())
        BackLeftDiagonal(speed);
      else if(zero_pressed())
        BackRightDiagonal(speed);
      else if(star_pressed())
        digitalWrite(3,HIGH);
        delay(200);
        digitalWrite(3, LOW);
      else if(ok_pressed())
        mode=2;
      resume();
    }
    else
    {
      Stop();
      digitalWrite(3,LOW);
    }
  }


  if (mode==2)
  {
    if(Button_Pressed())
    {
     if(up_pressed){
     speed=speed+25;
     speed=Limit(speed,0,255);
     }
     if(down_pressed){
     speed=speed-25;
     speed=Limit(speed,0,255);
     }
     else if(ok_pressed())
     mode=1;
    resume()
    }

  }

}