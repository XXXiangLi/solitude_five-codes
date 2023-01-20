//reference：
//https://lastminuteengineers.com/a4988-stepper-motor-driver-arduino-tutorial/

#include <Servo.h>
#include "SR04.h"

#define TRIG_PIN 8
#define ECHO_PIN 9 
Servo myservo; 
Servo myservo1; 
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);

long a;

// Define pin connections & motor's steps per revolution
const int dirPin = 2;
const int stepPin = 3;
const int stepsPerRevolution = 100;

void setup()
{
  // Declare pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
}
void loop()
{
  a=sr04.Distance();
    if(a<=10){
  // Set motor direction clockwise
  digitalWrite(dirPin, HIGH);

  // Spin motor slowly
  for(int x = 0; x < stepsPerRevolution; x++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(5000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(5000);
  }
  delay(2000); // Wait a second
  
  // Set motor direction counterclockwise
  digitalWrite(dirPin, LOW);

  // Spin motor quickly
  for(int x = 0; x < stepsPerRevolution; x++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(5000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(5000);
  }
  delay(2000); // Wait a second
}else {
   digitalWrite(dirPin, LOW);
       digitalWrite(stepPin, LOW);
    delayMicroseconds(0);   
  delay(2000);  
}
}
