/*
  Lesson 15
  mission 3
*/

#include "Armstrong.h"

void setup()
{
  begin();
  initialize_face();
}


void loop()
{
  winking();
}


void winking()
{
  pixels.setPixelColor(16, pixels.Color(255,255,255));
  pixels.setPixelColor(17, pixels.Color(255,255,255));
  pixels.setPixelColor(18, pixels.Color(255,255,255));
  pixels.setPixelColor(19, pixels.Color(255,255,255));
  pixels.setPixelColor(20, pixels.Color(255,255,255));
  pixels.setPixelColor(21, pixels.Color(255,255,255));
  pixels.setPixelColor(22, pixels.Color(255,255,255));
  pixels.setPixelColor(23, pixels.Color(255,255,255));
  pixels.show(); 
  delay(500);
  pixels.setPixelColor(16, pixels.Color(0,0,0));
  pixels.show(); 
  delay(500);
}