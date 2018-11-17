
/* variation on the Bumper Sketch to add some sounds */

#include <RedBot.h>
RedBotMotors motors;

RedBotBumper lBumper = RedBotBumper(3);  // initialzes bumper object on pin 3
RedBotBumper rBumper = RedBotBumper(11); // initialzes bumper object on pin 11

int buttonPin = 12; // variable to store the button Pin 

int lBumperState;  // state variable to store the bumper value
int rBumperState;  // state variable to store the bumper value

const int buzzerPin = 9;

void setup()
{
  pinMode(buzzerPin, OUTPUT);  // configures the buzzerPin as an OUTPUT
  toneDixie();
}

void loop()
{
  motors.drive(255);
  lBumperState = lBumper.read();  // default INPUT state is HIGH, it is LOW when bumped
  rBumperState = rBumper.read();  // default INPUT state is HIGH, it is LOW when bumped

    if (lBumperState == LOW) // left side is bumped/
  { 
    reverse();    // backs up
    toneDown();
    turnRight();  // turns
  }

  if (rBumperState == LOW) // right side is bumped/
  { 
    reverse();   // backs up
    toneUp();
    turnLeft();  // turns
  }

}

// reverse() function -- backs up at full power
void reverse()
{
  motors.drive(-255);
  delay(500);
  motors.brake();
  delay(100);  // short delay to let robot fully stop
}

// turnRight() function -- turns RedBot to the Right
void turnRight()
{
  motors.leftMotor(-150);  // spin CCW
  motors.rightMotor(-150); // spin CCW
  delay(500);
  motors.brake();
  delay(100);  // short delay to let robot fully stop
}

// turnRight() function -- turns RedBot to the Left
void turnLeft()
{
  motors.leftMotor(+150);  // spin CW
  motors.rightMotor(+150); // spin CW
  delay(500);
  motors.brake();
  delay(100);  // short delay to let robot fully stop
}

// toneUp() function
void toneUp()
{
  tone(buzzerPin, 1000);
  delay(200);
  noTone(buzzerPin);
  tone(buzzerPin, 4000);
  delay(200);
  noTone(buzzerPin);
  tone(buzzerPin, 7000);
  delay(500);
  noTone(buzzerPin);
}


// toneDown() function
void toneDown()
{
  tone(buzzerPin, 7000);
  delay(200);
  noTone(buzzerPin);
  tone(buzzerPin, 4000);
  delay(200);
  noTone(buzzerPin);
  tone(buzzerPin, 1000);
  delay(500);
  noTone(buzzerPin);
}


// toneDixie() function
void toneDixie()
{
  tone(buzzerPin, 392);
  delay(150);
  noTone(buzzerPin);
  tone(buzzerPin, 329);
  delay(150);
  noTone(buzzerPin);
  tone(buzzerPin, 262);
  delay(300);
  noTone(buzzerPin);
  tone(buzzerPin, 262);
  delay(300);
  noTone(buzzerPin);
  tone(buzzerPin, 262);
  delay(150);
  noTone(buzzerPin);
  tone(buzzerPin, 294);
  delay(150);
  noTone(buzzerPin);
  tone(buzzerPin, 329);
  delay(150);
  noTone(buzzerPin);
  tone(buzzerPin, 349);
  delay(150);
  noTone(buzzerPin);
  tone(buzzerPin, 392);
  delay(300);
  noTone(buzzerPin);
  tone(buzzerPin, 392);
  delay(300);
  noTone(buzzerPin);
  tone(buzzerPin, 392);
  delay(300);
  noTone(buzzerPin);
  tone(buzzerPin, 329);
  delay(300);
  noTone(buzzerPin);  
}


/**********

  tone(buzzerPin, 392);
  delay(200);
  noTone(buzzerPin);
  tone(buzzerPin, 329);
  delay(200);
  noTone(buzzerPin);
  tone(buzzerPin, 262);
  delay(400);
  noTone(buzzerPin);
  tone(buzzerPin, 262);
  delay(400);
  noTone(buzzerPin);
  tone(buzzerPin, 262);
  delay(200);
  noTone(buzzerPin);
  tone(buzzerPin, 294);
  delay(200);
  noTone(buzzerPin);
  tone(buzzerPin, 329);
  delay(200);
  noTone(buzzerPin);
  tone(buzzerPin, 349);
  delay(200);
  noTone(buzzerPin);
  tone(buzzerPin, 392);
  delay(400);
  noTone(buzzerPin);
  tone(buzzerPin, 392);
  delay(400);
  noTone(buzzerPin);
  tone(buzzerPin, 392);
  delay(400);
  noTone(buzzerPin);
  tone(buzzerPin, 329);
  delay(400);
  noTone(buzzerPin);    
  
**********/





