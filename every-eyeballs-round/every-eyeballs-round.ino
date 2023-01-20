//reference-SR04_UltrasonicSensor:
//www.elegoo.com
//2016.12.08

//reference- Stepper Motor Control:
//www.elegoo.com
//2018.10.25

//reference- Servo:
// by BARRAGAN <http://barraganstudio.com>
// https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep

#include <Stepper.h>
//stepper 1 and 2
const int stepsPerRevolution12 = 2048;       
Stepper myStepper12(stepsPerRevolution12, 10,12,11,13);

//stepper 3 and 2
const int stepsPerRevolution34 = 2048;        
Stepper myStepper34(stepsPerRevolution34, 4,6,5,7);


#include <Servo.h>
Servo myservo12; //left+right
int pos12 = 0;  

Servo myservo34; //left+right
int pos34 = 0; 

#include "SR04.h"
#define TRIG_PIN 9
#define ECHO_PIN 8 
SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);
long a;
 
void setup() {
  myStepper12.setSpeed(15);
 myStepper34.setSpeed(15);
   myservo12.attach(52);  
   myservo34.attach(53); 
}

void loop() {
    a=sr04.Distance();
   if(a<=10){
   for (pos12 = 0; pos12 <= 90; pos12 += 1) { 
    myservo12.write(pos12);     
       myservo34.write(90-pos12);     
    delay(15);                    
  }
      myStepper12.step(-500);   
      myStepper34.step(500);
      
for (pos12 = 90; pos12 >= 0; pos12 -= 1) {
    myservo12.write(pos12);      
      myservo34.write(90-pos12);         
    delay(15);                    
  }
  myStepper12.step(500);
   myStepper34.step(-500);  
   }else {
    myservo12.write(0);     
       myservo34.write(0); 
       myStepper12.step(0);
   myStepper34.step(0);    
   }
}
