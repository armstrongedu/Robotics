/*
  Lesson 17
  mission 1
*/


#include "Armstrong.h"

void setup() {
 initialize_IrReceiver(2);
 begin();
}

void loop() {
  if(Button_Pressed())
   {
    if(up_pressed())
     Forward(125); //it will move forward with speed 125
    else if (down_pressed())
      Backward(125);//it will move backward with speed 125
    else if (right_pressed())
      Right(125);  //it will move right with speed 125
    else if (left_pressed())
      Left(125);  //it will move left with speed 125
    resume();
   }
   else 
     stop();
}