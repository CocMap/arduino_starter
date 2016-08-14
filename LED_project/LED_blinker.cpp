/* User: Coc Map
   Project - LED blinker
 
   Description: Tuns on an LED on for one second
                Turn off for one second, repeatedly
*/
  
void setup() {
  // initialize the digital pin as an output
  // LED is connected to pin 13 on Arduino board
  pinMode (13, OUTPUT);
  }

void loop() {

  digitalWrite(13, HIGH); //turn the LED on
  delay(1000);            //keep off 1 sec
  
  digitalWrite(13, LOW);  //turn the LED off
  delay(1000);            //keep off for 1 sec
}
