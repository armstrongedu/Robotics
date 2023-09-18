#include "Armstrong.h"


void setup() {
 initialize_IrReceiver();
 Serial.begin(9600);
}

void loop() {
  
  if(Button_Pressed())
   {
    if (one_pressed())
      digitalWrite(13,HIGH);
    else if (two_pressed())
      digitalWrite(13,LOW); 
    resume(); 
   }
}