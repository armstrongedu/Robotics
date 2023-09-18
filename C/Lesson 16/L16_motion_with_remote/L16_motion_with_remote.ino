#include "Armstrong.h"


void setup() {
 initialize_IrReceiver();
 begin();
}

void loop() {
  if(Button_Pressed())
   {
   if(up_pressed())
     Forward(125); //it will move forward with speed 125
   else if (down_pressed())
     Backward(125);//it will move backward with speed 125
   resume();
   }
   else 
     stop();
}