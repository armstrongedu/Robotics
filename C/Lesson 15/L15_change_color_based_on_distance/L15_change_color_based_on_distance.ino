/*
  Lesson 15
  mission 1
*/

#include "Armstrong.h"
int intensity= 255;


void setup()
{
  begin();
  initialize_face();
}


void loop()
{
  Forward(70);
  int distance =getDistance();

  if (distance > 100) {
    show_levels(13,255,intensity,intensity);
  }
  else if (distance >90 && distance <100 ) {
    intensity=230;
    show_levels(13,255,intensity,intensity);
  }
  else if (distance > 80 && distance <90) {
    intensity=205;
    show_levels(13,255,intensity,intensity);
  }
  else if (distance > 70 && distance <80) {
    intensity=180;
    show_levels(13,255,intensity,intensity);
  }
  else if (distance > 60 && distance <70) {
    intensity=155;
    show_levels(13,255,intensity,intensity);
  }
  else if (distance > 50 && distance <60) {
    intensity=130;
    show_levels(13,255,intensity,intensity);
  }
  else if (distance > 40 && distance <50) {
    intensity=100;
    show_levels(13,255,intensity,intensity);
  }
  else if (distance > 30 && distance <40) {
    intensity=70;
    show_levels(13,255,intensity,intensity);
  }
  else if (distance > 20 && distance <30) {
    intensity=45;
    show_levels(13,255,intensity,intensity);
  }
  else if (distance > 10 && distance <20) {
    intensity=20;
    show_levels(13,255,intensity,intensity);
  }
  else if (distance <10) {
    intensity=0;
    show_levels(13,255,intensity,intensity);
    Stop();
  }
}