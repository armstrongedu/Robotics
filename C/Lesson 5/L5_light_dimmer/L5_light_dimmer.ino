/*
  Lesson 5
  mission 2
*/

int brightness = 0;

void setup() {
  
  pinMode(3, OUTPUT);

}

void loop() {
  
  analogWrite(3, brightness);

  brightness = brightness + 10;

  //if the number increases beyond the pwm range reset it
  if(brightness > 255){
    brightness = 0;
  }

  delay(100);
}
