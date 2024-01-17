#include <Servo.h>
Servo myServo1;
void setup() {
Serial.begin (9600);
//cambios de via
myServo1.attach (3);
pinMode (5, INPUT);
}

void loop() {
if(digitalRead (5) == HIGH){
   myServo1.write (179);
   delay (1000);
  myServo1.write (01);
}
}
