#include <AFMotor.h>

AF_DCMotor motorL(3);
AF_DCMotor motorR(4);

void setup() {
  motorL.setSpeed(200);
  motorL.run(RELEASE);
  motorR.setSpeed(200);
  motorR.run(RELEASE);

  Serial.begin(9600);
  Serial.setTimeout(50);
}

void loop() {
  ExecCommand();
}

void ExecCommand()
{
  int command = Serial.parseInt();
  
  if(command==1) {  // 停止
    motorL.run(RELEASE);
    motorR.run(RELEASE);
  }
  else if(command==2) {  // 前進
    motorL.run(FORWARD);
    motorR.run(FORWARD);
  }
  else if(command==3) {  // 後退
    motorL.run(BACKWARD);
    motorR.run(BACKWARD);
  }
}
