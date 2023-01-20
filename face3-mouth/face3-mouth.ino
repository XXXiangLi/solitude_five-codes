//reference-SR04_UltrasonicSensor:
//www.elegoo.com
//2016.12.08

//reference- Servo:
// by BARRAGAN <http://barraganstudio.com>
// https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep

#include <Servo.h>
#include "SR04.h"

#define TRIG_PIN 8
#define ECHO_PIN 9 

Servo myservo; 
Servo myservo1; 
Servo myservo2; 

SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);

long a;

int pos = 90;  
int pos1 = 0; 
int pos2 = 0;     

void setup() {
  myservo.attach(11);  //mouth
    myservo1.attach(5);//top
     myservo2.attach(6);  //button
}

void loop() {
   a=sr04.Distance();
    if(a<=10){
  for (pos = 0; pos <= 50; pos += 1) { 
    myservo.write(pos); //mouth       
    myservo1.write(pos+40); //top
    myservo2.write(pos); //button
    delay(15);                    
  }
  
  for (pos = 50; pos >= 0; pos -= 1) {
    myservo.write(pos);       
    myservo1.write(pos+40); 
    myservo2.write(pos); 
    delay(15);                    
  }       
}else {  
  pos=0;
  pos1=0;
   myservo.write(0);
  // delay(15);     
          myservo1.write(100);  
        //  delay(15);   
             myservo2.write(25);    
          delay(15);      
}
}
