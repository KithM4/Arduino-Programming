#include <Servo.h>

byte s_pin1 = 5;
byte s_pin2 = 6;
byte s_pin3 = 10;

Servo servo1;
Servo servo2;
Servo servo3;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(s_pin1);
  servo2.attach(s_pin2);
  servo3.attach(s_pin3);

  servo1.write(5);   // Initial position for servo1
  servo2.write(90);  // Initial position for servo2
  servo3.write(175); // Initial position for servo3
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (byte i = 0; i < 55; i++) {
    servo1.write(i + 5);    // 5 --- 60
    servo2.write(i + 100);  // 100 --- 155
    servo3.write(100 - i);  // 100 --- 45
    delay(50);
  }

  for (byte i = 61; i < 110; i++) {
    servo1.write(i);  // Move servo1 gradually
    delay(50);
  }

  for (byte i = 110; i > 1; i--) {
    servo1.write(i);  // Move servo1 gradually back
    delay(50);
  }
}
