#include <Servo.h>
Servo myServo1;
int e=0;
int ep=0;
int a =0;
void setup() {
Serial.begin (9600);
//cambios de via
myServo1.attach (3);
pinMode (5, INPUT);
}

void loop() {
  e=    digitalRead(5);
 if(e!=ep){
  if(e==HIGH)  {
      delay (50);
    a++;
  }
  }
  ep=e;
if (a %2 != 0){
   myServo1.write (179);
}else{
   myServo1.write (01);
}
}
