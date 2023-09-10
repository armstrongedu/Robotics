/*
  Lesson 13

*/
#include "Armstrong.h"

void setup() {

  //initialize the face 
  initialize_face();//it can take the pin and number of pixels as parameters


}

void loop() {
  // put your main code here, to run repeatedly:
  //show_levels();
  show_rainbow('c', 15); 
  clear_face();
  delay(1000);
  show_rainbow('a', 15); 
  clear_face();
  delay(1000);

}
