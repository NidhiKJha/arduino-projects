#include <AFMotor.h>
AF_DCMotor motor1(1);

void setup()
{
  pinMode(13, OUTPUT);
}

void loop() {
  motor1.run(BACKWARD); //replace backward with forward in case you want to change direction;
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(5000);  // wait for a second
  motor1.run(FORWARD);
  
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(5000); // wait for a second
}
