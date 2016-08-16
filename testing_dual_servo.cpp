#include <Servo.h>    //include the library

//array of char to hold the text string in the serial monitor
char serialText[11];   

//declare variable - servo
Servo servo1;
Servo servo2;

void setup() {
  servo1.attach(5);     //create servo 1
  servo2.attach(6);     //create servo 2
  
  Serial.begin(9600);   //set up the serial
  while(Serial.available()) {
    Serial.read();
  }

  servo1.write(90);
  servo2.write(90);

  Serial.println("STARTING...");  
}

void loop() {
  if(Serial.available() > 0) {
    int numChar = Serial.available(); //find the string length
    Serial.print(numChar);
  
    if(numChar > 10) {
      numChar = 10;   //set the maximum serialText
    }

    while(numChar--) {
      serialText[numChar++] = Serial.read();
    }

    serialText[numChar] = '\0';
    splitString(serialText); 
  }
}

  void splitString(char*data) {
    Serial.print("Data entere: ");
    Serial.println(data);
    char* parameter;
    parameter = strtok (data, ",");
    while (parameter != NULL) {
      setServo(parameter);
      parameter = strtok (NULL, ",");
    }
    while(Serial.available())
      Serial.read();
  }

  void setServo(char* data) {
    if((data[0] == 'L') || (data[0] == 'l')) {
      int firstVal = strtol(data+1, NULL, 10);
      firstVal = constrain(firstVal,0,180);
      servo1.write(firstVal);
      Serial.print("Servo is set to: ");
      Serial.println(firstVal);
    }
  
    if((data[0] == 'R') || (data[0] == 'r')) {
      int secondVal = strtol(data+1,NULL,10);
      secondVal = constrain(secondVal,0,255);
      servo2.write(secondVal);
      Serial.print("Servo2 is set to: ");
      Serial.println(secondVal);
    }
}

