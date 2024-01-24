#include <Servo.h>
Servo myServo1;
int a =0;
void setup() {
Serial.begin (9600);
myServo1.attach (3);//9
pinMode (7, INPUT_PULLUP);
pinMode (5, INPUT);
pinMode (8, OUTPUT);
}

void loop() {
  myServo1.write (01);
if (digitalRead (5)==HIGH){
  a=1;
}
  if (a==1){
if (digitalRead (7)==HIGH){
digitalWrite(8,HIGH);
}else if (digitalRead (7)==LOW){
digitalWrite(8,LOW);
delay (500);  
   myServo1.write(179);// (179);
delay (1000);   
digitalWrite (8,HIGH);
delay(350);
myServo1.write (01);//(((
 a=0;
}
}

else if (a!=1){
    digitalWrite (8,LOW);
  }
}
