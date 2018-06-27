/*
  The circuit:
 * LCD RS pin to digital pin 7
 * LCD Enable pin to digital pin 6
 * LCD D4 pin to digital pin 11
 * LCD D5 pin to digital pin 10
 * LCD D6 pin to digital pin 9
 * LCD D7 pin to digital pin 8
 *
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 6, 11, 10, 9, 8);
int up = 14;   
int left = 15;
int right = 16;
int down = 17;
int ButtonD4 = 4;
int ButtonD5 = 5;
int ok = 12;
int LEDpin = 13; // onboard Led
int Pin1=2;
int Pin2=3;
int Pin3=18;
int Pin4=19;





String displaytext;
void setup() {
  
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Arduino Nano QP");
  pinMode(up, INPUT);
  pinMode(left, INPUT);
  pinMode(right, INPUT);
  pinMode(down, INPUT);
  pinMode(ButtonD4, INPUT);
  pinMode(ButtonD5, INPUT);
  pinMode(ok, INPUT);
  pinMode(Pin1, INPUT);
  digitalWrite(Pin1, HIGH);
  pinMode(Pin2, INPUT);
  digitalWrite(Pin2, HIGH);
  pinMode(Pin3, INPUT);
  digitalWrite(Pin3, HIGH);
  pinMode(Pin4, INPUT);
  digitalWrite(Pin4, HIGH);
  pinMode(LEDpin, OUTPUT);
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  
  if (digitalRead(up) == 0) {
                           displaytext="Up                          ";
                           digitalWrite(LEDpin, HIGH);
                           
  }
else if (digitalRead(left) == 0) {
                           displaytext="Left                         ";
                           digitalWrite(LEDpin, HIGH);
                            
  }
else if (digitalRead(right) == 0) {
                           displaytext="Right                        ";
                           digitalWrite(LEDpin, HIGH);
                            
  }
else if (digitalRead(down) == 0) {
                           displaytext="Down                         ";
                           digitalWrite(LEDpin, HIGH);
                            
  }
else if (digitalRead(ok) == 0) {
                           displaytext="OK                           ";
                           digitalWrite(LEDpin, HIGH);
                            
  }
else if (digitalRead(ButtonD4) == 0) {
                           displaytext="Button 4                      ";
                           digitalWrite(LEDpin, HIGH);
                           
  }
else if (digitalRead(ButtonD5) == 0) {
                           displaytext="Button 5                      ";
                           digitalWrite(LEDpin, HIGH);
                           
  }
else if (digitalRead(Pin1) == 0) {
                           displaytext="Input 1                      ";
                           digitalWrite(LEDpin, HIGH);
                           
  }
else if (digitalRead(Pin2) == 0) {
                           displaytext="Input 2                      ";
                           digitalWrite(LEDpin, HIGH);
                           
  }
else if (digitalRead(Pin3) == 0) {
                           displaytext="Input 3                      ";
                           digitalWrite(LEDpin, HIGH);
                           
  }
else if (digitalRead(Pin4) == 0) {
                           displaytext="Input 4                       ";
                           digitalWrite(LEDpin, HIGH);
                           
  }
  
  
  else {
    displaytext="Push a Button";
    digitalWrite(LEDpin, LOW);
    delay(10);
  }
    
    lcd.setCursor(0, 1);
    lcd.print(displaytext);
    delay (10) ;
}

