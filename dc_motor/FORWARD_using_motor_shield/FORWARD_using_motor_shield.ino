#include<AFMotor.h>
AF_DCMotor motor1(1);

void setup() {
  // put your setup code here, to run once:
motor1.setSpeed(50);
}

void loop() {
  // put your main code here, to run repeatedly:
motor1.run(BACKWARD); //replace backward with forward in case you want to change direction;
delay(2000);
motor1.run(FORWARD);
delay(5000);
}
