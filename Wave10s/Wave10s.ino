/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 
#include <Ticker.h>

Ticker flipper;
 
Servo myservo;  // create servo object to control a servo 
                // twelve servo objects can be created on most boards
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(14);  // attaches the servo on pin 9 to the servo object 
  // flip the pin every 10s
  flipper.attach(10, flip);
} 

void flip() {
  if (pos == 0) {
    myservo.write(180);
    pos = 180;
  }
  else {
    myservo.write(0);
    pos = 0;
  }
    
}

void loop() 
{ 
   
  
} 
