/* User: Coc Map
 *  Board: Arduino UNO
   Project - "Arduino Workshop" LED disc 
Description: 12 LED lines with different colors are sticked 
             on the circle cardboard and they are lighted with 
             simple pattern
- Pattern 1: all LED lines shine
- Pattern 2: each LED line shines for 1s (1000)
- Pattern 3: 4 whites - 2 green - 2 red - 2 yellow - 2 blue
 */
// Name LED light lines with the digital output pins
int ALL[13] = {2,3,4,5,7,8,9,10,11,12,13};

// Name the switch mode

void setup () {
  for (int x = 0; x < 12; x++) {
   pinMode (ALL[x], OUTPUT);
  }
}

void loop () {
  mode1_all();
  delay (200);
  off();
  delay (200);

  
  mode2_eachline();
  delay (200);
  off();
  delay (200);

  mode3_white();
  delay (200);
  mode4_color();
  delay (200);
  off();
  delay (200);
  
  }

void off() {
  for (int x = 0; x < 13; x++) {
    digitalWrite (ALL[x], LOW);
  }
}

void mode1_all() {
  for (int x = 0; x < 13; x++) {
  digitalWrite (ALL[x], HIGH);
  }
}

void mode2_eachline() {
  for (int x = 0; x < 13; x++) {
    digitalWrite (ALL[x], HIGH);
    delay (200);
  }
}

void mode3_white() {
  for (int x = 0; x < 13; x = x + 3) {
    digitalWrite (ALL[x], HIGH);
    delay (200);
  }  
}
void mode4_color() {
  digitalWrite (ALL[1], HIGH);
  digitalWrite (ALL[7], HIGH);
  delay (200);

  digitalWrite (ALL[5], HIGH);
  digitalWrite (ALL[11], HIGH);
  delay (200);
  
  digitalWrite (ALL[2], HIGH);
  digitalWrite (ALL[8], HIGH);
  delay (200);

  digitalWrite (ALL[10], HIGH);
  digitalWrite (ALL[4], HIGH);
  delay (200);
}










