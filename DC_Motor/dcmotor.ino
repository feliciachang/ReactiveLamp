//#if ARDUINO >= 100
#include "Arduino.h"
//#else
//#include "WProgram.h"
//#include "pins_arduino.h"
//#endif

int speedPin = 3; // H-bridge enable pin for speed control
int motor1APin = 6; // H-bridge leg 1
int motor2APin = 7; // H-bridge leg 2
int speed_value_motor1; // value for motor speed

void setup() {
 // set digital i/o pins as outputs:
 pinMode(speedPin, OUTPUT);
 pinMode(motor1APin, OUTPUT);
 pinMode(motor2APin, OUTPUT);
 Serial.begin(9600);
}

void loop() {
 speedPin = analogRead(speedPin);
 Serial.println(speedPin);
 // put motor in forward motion
 digitalWrite(motor1APin, LOW); // set leg 1 of the H-bridge low
 digitalWrite(motor2APin, HIGH); // set leg 2 of the H-bridge high

 // just invert the above values for reverse motion,
 // i.e. motor1APin = HIGH and motor2APin = LOW

 // control the speed 0- 255
 speed_value_motor1 = 127; // half speed
 analogWrite(speedPin, speed_value_motor1); // output speed as
// PWM value
}
