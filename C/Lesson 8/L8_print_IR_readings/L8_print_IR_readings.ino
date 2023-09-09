/*
  lesson 8
*/

//variables to store sensor readings
int left;
int center;
int right;

void setup() {

  Serial.begin(9600);//setting the buad rate

}

void loop() 
{ 
  
  //reading sensor values
  left   = analogRead(21);
  center = analogRead(20);
  right  = analogRead(19);

  Serial.print(left);
  Serial.print(" ");
  Serial.print(center);
  Serial.print(" ");
  Serial.println(right); //notice here we print a new line
  delay(1000);           // add delay so we can read the data
}
