/*
  Lesson 18 
  mission 1
*/
#include "Armstrong.h"

int redIntensity = 255; 
int blueIntensity = 255; 
int greenIntensity = 255;

void setup() {
  initialize_IrReceiver(2);
  initialize_face(A4,24);
  Serial.begin(9600); 
}

void loop() {

  
  if(Button_Pressed())
   {
    if (one_pressed())
    {
    redIntensity= redIntensity+5;
    redIntensity=constrain(redIntensity,0,255);  
    show_levels(13,redIntensity,greenIntensity,blueIntensity);
    }
    if(two_pressed())
    {
      greenIntensity= greenIntensity+5;
      greenIntensity=constrain(greenIntensity,0,255);   
      show_levels(13,redIntensity,greenIntensity,blueIntensity);
    }
    if(three_pressed())
    {
      blueIntensity= blueIntensity+5; 
      blueIntensity=constrain(blueIntensity,0,255);  
      show_levels(13,redIntensity,greenIntensity,blueIntensity);
    }
    if(four_pressed())
    {
      redIntensity= redIntensity-25;
      redIntensity=constrain(redIntensity,0,255);
      show_levels(13,redIntensity,greenIntensity,blueIntensity);
    }
    if(five_pressed())
    {
      greenIntensity= greenIntensity-25;  
      greenIntensity=constrain(greenIntensity,0,255);
      show_levels(13,redIntensity,greenIntensity,blueIntensity);
    }
    if(six_pressed())
    {
      blueIntensity= blueIntensity-25;
      blueIntensity=constrain(blueIntensity,0,255);
      show_levels(13,redIntensity,greenIntensity,blueIntensity);
    }
    if(seven_pressed())
    {
      redIntensity=255;
      blueIntensity=0;
      greenIntensity=0;
      show_levels(13,redIntensity,greenIntensity,blueIntensity);
    }
     if(eight_pressed())
    {
      greenIntensity=255;
      blueIntensity=0;
      redIntensity=0;
      show_levels(13,redIntensity,greenIntensity,blueIntensity);
    }
     if(nine_pressed())
    {
      blueIntensity=255;
      greenIntensity=0;
      redIntensity=0; show_levels(13,redIntensity,greenIntensity,blueIntensity);
    }
    if(zero_pressed())
    {
      blueIntensity=255;
      greenIntensity=255;
      redIntensity=255;
      show_levels(13,redIntensity,greenIntensity,blueIntensity);
    }
    if(star_pressed())
    {
      clear_face();
    }
    resume();
   }
}