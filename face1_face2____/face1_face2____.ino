//reference-SR04_UltrasonicSensor:
//www.elegoo.com
//2016.12.08

//reference- Servo:
// by BARRAGAN <http://barraganstudio.com>
// https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep

#include "SR04.h"

#define TRIG_PIN 12
#define ECHO_PIN 3 

#include <Servo.h>
//FACE1
Servo myservo; 
Servo myservo1; 
//FACE2
Servo myservo2; 
Servo myservo3;

 SR04 sr04 = SR04(ECHO_PIN,TRIG_PIN);

long a;

int startTime;
int currentTime;
int period;


int pos = 90;  
int pos1 = 0;     

void setup() {
     Serial.begin(9600);//Initialization of Serial Port
   delay(1000);
  //startTime=millis();
  //face1
  myservo.attach(11);  //button
    myservo1.attach(10);//top
    //face2
     myservo2.attach(6);  //button
    myservo3.attach(5);//top
}

void loop() {
   a=sr04.Distance();
//   currentTime=millis();
    if(a<=10){
  for (pos = 0; pos <= 360; pos += 1) { 
    myservo.write(pos/6); 
     myservo2.write(pos); 
            myservo1.write(pos/10);  
           myservo3.write(pos/10);  
  delay(15);   
  }                 
  for (pos = 360; pos >= 0; pos -= 1) {
    myservo.write(pos/6);  
            myservo2.write(pos);   
                   myservo1.write(pos/10); 
       myservo3.write(pos/10);     
   delay(15);                    
  }             
    }else {  
   myservo.write(0);   
          myservo1.write(0);   
             myservo2.write(0);   
          myservo3.write(0);   
//       delay(15);      
}
Serial.print(a);
   Serial.println("cm");
}
