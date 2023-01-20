//reference-LED MAX7219  8×32 LED matrix:
//https://www.makerguides.com/max7219-led-dot-matrix-display-arduino-tutorial/
/* Example code for scrolling text and other text effects on MAX7219 LED dot matrix display with Arduino. More info: https://www.makerguides.com */
//DIN 11 (MOSI)    CS  3 (SS)   CLK 13 (SCK)

// Include the required Arduino libraries:
#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

int i = 0;

textEffect_t texteffect[] =
{  
  PA_PRINT,
  PA_SCAN_HORIZ,
  PA_WIPE,
  PA_OPENING_CURSOR,
  PA_MESH,
  PA_SCROLL_UP_RIGHT,
  PA_DISSOLVE,
  PA_SLICE,
};

// Define hardware type, size, and output pins:
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define CS_PIN 3

// Create a new instance of the MD_Parola class with hardware SPI connection:
MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

// Setup for software SPI:
// #define DATA_PIN 2
// #define CLK_PIN 4
// MD_Parola myDisplay = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void setup() {
  myDisplay.begin();
  myDisplay.setIntensity(0);
  myDisplay.setTextAlignment(PA_LEFT);
   myDisplay.setInvert(false);
  myDisplay.print("LEFT");
  delay(1000);
  myDisplay.setTextAlignment(PA_RIGHT);
      myDisplay.setInvert(false);
  myDisplay.print("RIGHT");
  delay(500);
      myDisplay.setTextAlignment(PA_CENTER);
  myDisplay.setInvert(true);
  myDisplay.print("one");
  delay(2000);
    myDisplay.setTextAlignment(PA_CENTER);
  myDisplay.setInvert(true);
  myDisplay.print("EYE");
  delay(500);
    myDisplay.setInvert(true);
  myDisplay.print("eye eye");
  delay(2000);
     myDisplay.setInvert(false);
  myDisplay.print("eye eye");
  delay(300);
   myDisplay.setInvert(true);
  myDisplay.print("eye eye");
  delay(300);
   myDisplay.setInvert(true);
    myDisplay.print("ONE");
  delay(150);
  myDisplay.setInvert(false);
    myDisplay.print("alone");
  delay(150);
  myDisplay.setInvert(false);
  myDisplay.print("eye eye");
  delay(300);
  myDisplay.setInvert(true);
  myDisplay.print("eye eye");
  delay(2000);
      myDisplay.setInvert(true);
    myDisplay.print("SAY");
  delay(2000);
        myDisplay.setInvert(true);
    myDisplay.print("ONE");
  delay(150);
  myDisplay.setInvert(false);
    myDisplay.print("one");
  delay(150);
      myDisplay.setInvert(false);
    myDisplay.print("SAY");
  delay(2000);
  myDisplay.setInvert(false);
    myDisplay.print("alone");
  delay(2000);
   myDisplay.setInvert(false);
    myDisplay.print("ONE");
  delay(500);
    myDisplay.setInvert(true);
    myDisplay.print("ALONE");
  delay(500);
  myDisplay.setInvert(false);
    myDisplay.print("SAY");
  delay(1000);
    myDisplay.setTextAlignment(PA_LEFT);
   myDisplay.setInvert(false);
  myDisplay.print("LEFT");
  delay(1000);
  myDisplay.setTextAlignment(PA_RIGHT);
      myDisplay.setInvert(false);
  myDisplay.print("RIGHT");
  delay(500);
      myDisplay.setTextAlignment(PA_CENTER);
  myDisplay.setInvert(true);
  myDisplay.print("one");
  delay(2000);
    myDisplay.setTextAlignment(PA_CENTER);
  myDisplay.setInvert(true);
  myDisplay.print("EYE");
  delay(500);
    myDisplay.setInvert(true);
  myDisplay.print("eye eye");
  delay(2000);
     myDisplay.setInvert(false);
  myDisplay.print("eye eye");
  delay(300);
   myDisplay.setInvert(true);
  myDisplay.print("eye eye");
  delay(300);
   myDisplay.setInvert(true);
    myDisplay.print("ONE");
  delay(150);
  myDisplay.setInvert(false);
    myDisplay.print("alone");
  delay(150);
  myDisplay.setInvert(false);
  myDisplay.print("eye eye");
  delay(300);
  myDisplay.setInvert(true);
  myDisplay.print("eye eye");
  delay(2000);
      myDisplay.setInvert(true);
    myDisplay.print("SAY");
  delay(2000);
        myDisplay.setInvert(true);
    myDisplay.print("ONE");
  delay(150);
  myDisplay.setInvert(false);
    myDisplay.print("one");
  delay(150);
      myDisplay.setInvert(false);
    myDisplay.print("SAY");
  delay(2000);
  myDisplay.setInvert(false);
    myDisplay.print("alone");
  delay(2000);
   myDisplay.setInvert(false);
    myDisplay.print("ONE");
  delay(500);
    myDisplay.setInvert(true);
    myDisplay.print("ALONE");
  delay(500);
  myDisplay.setInvert(false);
    myDisplay.print("SAY");
  delay(1000);
      myDisplay.setTextAlignment(PA_CENTER);
  myDisplay.setInvert(true);
  myDisplay.print("EYE");
  delay(500);
    myDisplay.setInvert(true);
  myDisplay.print("eye eye");
  delay(2000);
     myDisplay.setInvert(false);
  myDisplay.print("eye eye");
  delay(300);
   myDisplay.setInvert(true);
  myDisplay.print("eye eye");
  delay(300);
   myDisplay.setInvert(true);
    myDisplay.print("ONE");
  delay(150);
  myDisplay.setInvert(false);
    myDisplay.print("alone");
  delay(150);
  myDisplay.setInvert(false);
  myDisplay.print("eye eye");
  delay(300);
  myDisplay.setInvert(true);
  myDisplay.print("eye eye");
  delay(2000);
      myDisplay.setInvert(true);
    myDisplay.print("SAY");
  delay(2000);
        myDisplay.setInvert(true);
    myDisplay.print("ONE");
  delay(150);
  myDisplay.setInvert(false);
    myDisplay.print("one");
  delay(150);
      myDisplay.setInvert(false);
    myDisplay.print("SAY");
  delay(2000);
  myDisplay.setInvert(false);
    myDisplay.print("alone");
  delay(2000);
   myDisplay.setInvert(false);
    myDisplay.print("ONE");
  delay(500);
    myDisplay.setInvert(true);
    myDisplay.print("ALONE");
  delay(500);
  myDisplay.setInvert(false);
    myDisplay.print("SAY");
  delay(1000);
  myDisplay.setInvert(false);
  myDisplay.print("3");
  delay(1000);
    myDisplay.setInvert(false);
  myDisplay.print("2");
  delay(500);
    myDisplay.setInvert(false);
  myDisplay.print("1");
  delay(1000);
      myDisplay.displayReset();
  myDisplay.displayClear();
}

void loop() {

  if (myDisplay.displayAnimate()) {
    if (i < sizeof(texteffect)) {
      i++;
    }
    else {
      i = 0;
    }
      myDisplay.setInvert(true);
      myDisplay.setPause(200);
  myDisplay.setSpeed(80);
    myDisplay.displayText("HELLO", myDisplay.getTextAlignment(PA_CENTER), myDisplay.getSpeed(), myDisplay.getPause(), texteffect[i], texteffect[i]);
   // myDisplay.displayReset();
  myDisplay.displayClear();
  }
  
}
