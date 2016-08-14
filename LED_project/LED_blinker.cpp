/* User: Coc Map
   Project - LED blinker
 
   Description: Tuns on an LED on for one second
                Turn off for one second, repeatedly
                
   Components:  1 LED
                1 resistor (100 ~ 1k) 
  
   Set up:      LED connected to the pin 13 
*/
  
void setup() {
  // LED is connected to pin 13 on Arduino board
  pinMode (13, OUTPUT);
  }

void loop() {

  digitalWrite(13, HIGH); //turn the LED on
  delay(1000);            //keep off 1 sec
  
  digitalWrite(13, LOW);  //turn the LED off
  delay(1000);            //keep off for 1 sec
}
