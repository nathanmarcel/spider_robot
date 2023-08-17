#include <Servo.h>
int pos = 0;
Servo servo_9;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo_9.attach(9, 500, 2500);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) {
    servo_9.write(pos);
    if (pos % 10 == 0) {
      Serial.println(pos);
      }
    delay(15); 
  }
  for (pos = 180; pos >= 0; pos -= 1) {
    servo_9.write(pos);
    if (pos % 10 == 0) {
      Serial.println(pos);
      }
    delay(15); 
  }

  


}
