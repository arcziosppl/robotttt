#include <Arduino.h>
#include "AFMotor.h"

AF_DCMotor motor(1);
AF_DCMotor motor3(3);


#define led LED_BUILTIN
void setup() {
  /**/
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
motor.setSpeed(150);
motor.run(RELEASE);
motor3.setSpeed(150);
motor3.run(RELEASE);
}

void loop() {

  motor.run(FORWARD);
  delay(1000);
  motor.run(BACKWARD);
}