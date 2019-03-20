
#include <Servo.h> 
#include <Ticker.h>

Ticker flipper;
 
Servo myservo;  // create servo object to control a servo 
                // twelve servo objects can be created on most boards
 
int pos = 180;    // variable to store the servo position 
int low = 160; //Servo rotates anti-clockwise so 0 is facing Right not Left
int med = 90;
int high = 20;
 
void setup() 
{ 
  myservo.attach(14);  // attaches the servo on pin 9 to the servo object 
  myservo.write(pos);  // reset the servoß to start position
  // flip the pin every 10s
  flipper.attach(10, flip);
} 

void flip() {
  if (pos == 180) { //at the initial position
    pos = low;
  }
  else if (pos == low) {
    pos = med;
  }
  else if (pos == med) {
    pos = high;
  }
  else if (pos == high){
    pos = low;
  }
  
  myservo.write(pos);  
}

void loop() 
{ 
   
  
} 
