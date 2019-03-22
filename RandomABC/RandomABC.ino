
#include <Servo.h>
#include <Ticker.h>

Ticker flipper;

Servo myservo;  // create servo object to control a servo
                // twelve servo objects can be created on most boards

int pos = 180;    // variable to store the servo position
int low = 160; //Servo rotates anti-clockwise so 0 is facing Right not Left
int med = 90;
int high = 20;

//Random number
long randNumber;


void setup()
{
  randomSeed(analogRead(0));

  myservo.attach(14);  // attaches the servo on pin 9 to the servo object
  myservo.write(pos);  // reset the servoß to start position
  // flip the pin every 10s
  flipper.attach(10, flip);
}

void flip() {

  Serial.println("Get Ready...");

  //reset to zero first then wait 3
  myservo.write(0);
  delay(3); 

  Serial.println("Go...");

 // a random number from 1 to 3
  randNumber = random(1, 4);
  if (randNumber == 1){
    pos = low;
  }
  else if (randNumber == 2) {
    pos = med;
  }
  else {
    pos = high;
  }

  myservo.write(pos);
}

void loop()
{


}
