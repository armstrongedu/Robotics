#include "Armstrong.h"


void setup() {
  initialize_IrReceiver();
  Serial.begin(9600);
}

void loop() {
  if(Button_Pressed())
   {
    if (one_pressed())
      Serial.print("1");
    else if (two_pressed())
      Serial.print("2");
    else if (three_pressed())
      Serial.print("3");
    resume();
   }
}