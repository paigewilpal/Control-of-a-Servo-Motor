#include <Servo.h>
Servo servo1;

void setup() {
pinMode(13, OUTPUT);
pinMode (2, INPUT);
servo1.attach(9);
}

void loop() {
  servo1.write(0);
  delay(1000);
  servo1.write(90);
  delay(1000);
  servo1.write(180);
  delay(1000);
  servo1.write(90);
  delay(1000);
int button=digitalRead(2);
if (button==LOW){   //Read the button state
digitalWrite(13, HIGH);
int dial = analogRead(0);
tone(9,440);
delay(500);
delay(dial);
}else{ // Button is not pressed
digitalWrite(13, LOW);
noTone(9);
delay(200);
//delay(dial);
}
}
