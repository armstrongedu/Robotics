/*
  Lesson 18 
  mission 2
*/

#include "Armstrong.h"


int redIntensity = 255; 
int blueIntensity = 255; 
int greenIntensity = 255;

int level=1; 


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
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
    if(two_pressed())
    {
      greenIntensity= greenIntensity+5;
      greenIntensity=constrain(greenIntensity,0,255);
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
    if(three_pressed())
    {
      blueIntensity= blueIntensity+5;
      blueIntensity=constrain(blueIntensity,0,255);
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
    if(four_pressed())
    {
      redIntensity= redIntensity-25;
      redIntensity=constrain(redIntensity,0,255);
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
    if(five_pressed())
    {
      greenIntensity= greenIntensity-25;
      greenIntensity=constrain(greenIntensity,0,255);
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
    if(six_pressed())
    {
      blueIntensity= blueIntensity-25;
      blueIntensity=constrain(blueIntensity,0,255);
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
    if(seven_pressed())
    {
      redIntensity=255;
      blueIntensity=0;
      greenIntensity=0;
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
     if(eight_pressed())
    {
      greenIntensity=255;
      blueIntensity=0;
      redIntensity=0;
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
     if(nine_pressed())
    {
      blueIntensity=255;
      greenIntensity=0;
      redIntensity=0;
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
    if(zero_pressed())
    {
      blueIntensity=255;
      greenIntensity=255;
      redIntensity=255;
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
    if(star_pressed())
    {
      clear_face();
    }
    if(up_pressed())
    {
      level=level+1;
      level=constrain(level,1,13);
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
     if(down_pressed())
    {
      level=level-1;
      level=constrain(level,1,13);
      show_levels(level,redIntensity,greenIntensity,blueIntensity);
    }
    if(left_pressed())
    {
      show_rainbow('c',5);
    }
     if(right_pressed())
    {
      show_rainbow('a',5);
    }
    if(hash_pressed())
    {
      show_levels(9,255,200,0);
      pixels.setPixelColor(16,0,200,255);
      pixels.setPixelColor(17,0,200,255);
      pixels.setPixelColor(18,255,0,150);
      pixels.setPixelColor(19,255,0,150);
      pixels.setPixelColor(20,255,0,150);
      pixels.setPixelColor(21,255,0,150);
      pixels.setPixelColor(22,255,0,150);
      pixels.setPixelColor(23,255,0,150);
      pixels.show();

    }
    resume();
   }
}
