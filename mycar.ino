#include <AFMotor.h>

AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {
  motor3.setSpeed(200);
  motor3.run(RELEASE);
  motor4.setSpeed(200);
  motor4.run(RELEASE);
}


void loop() {
//  motor3.run(FORWARD);
//  motor4.run(FORWARD);
//  delay(3000);
//  
//  motor3.run(BACKWARD);
//  motor4.run(BACKWARD);
//  delay(3000);
// 
//  motor3.run(RELEASE);
//  motor4.run(RELEASE);
//  delay(1000);
}
