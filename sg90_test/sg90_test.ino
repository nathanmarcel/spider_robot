#include <Servo.h>
int pos = 0;
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5;
Servo servo_6;
Servo servo_7;
Servo servo_8;
Servo servo_9;
Servo servo_10;
Servo servo_11;


void setup() {
  // put your setup code here, to run once:
  servo_2.attach(2, 500, 2500);
  servo_3.attach(3, 500, 2500);
  servo_4.attach(4, 500, 2500);
  servo_5.attach(5, 500, 2500);
  servo_6.attach(6, 500, 2500);
  servo_7.attach(7, 500, 2500);
  servo_8.attach(8, 500, 2500);
  servo_9.attach(9, 500, 2500);
  servo_10.attach(10, 500, 2500);
  servo_11.attach(11, 500, 2500);

 
  
}

void loop() {
//  for (pos = 0; pos <= 180; pos += 1) {
//    servo_9.write(pos);
////    if (pos % 10 == 0) {
////      Serial.println(pos);
////      }
//    delay(15); 
//  }
//  for (pos = 180; pos >= 0; pos -= 1) {
//    servo_9.write(pos);
////    if (pos % 10 == 0) {
////      Serial.println(pos);
////      }
//    delay(15); 
//  }

  for (pos = 0; pos <= 180; pos += 1) {
    servo_2.write(pos);
    servo_3.write(pos);
    servo_4.write(pos);
    servo_5.write(pos);
    servo_6.write(pos);
    servo_7.write(pos);
    servo_8.write(pos);
    servo_9.write(pos);
    servo_10.write(pos);
    servo_11.write(pos);
    delay(15); 
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    servo_2.write(pos);
    servo_3.write(pos);
    servo_4.write(pos);
    servo_5.write(pos);
    servo_6.write(pos);
    servo_7.write(pos);
    servo_8.write(pos);
    servo_9.write(pos);
    servo_10.write(pos);
    servo_11.write(pos);
    delay(15); 
  }
  


}
