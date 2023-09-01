#include <Servo.h>

int fl_joint1_pin = 9;
int fr_join1_pin = 8;
int rl_joint1_pin = 7;
int rr_joint1_pin = 6;

int left_servo_forward = 0;
int right_servo_forward = 180;

Servo fl_joint1;
Servo fr_joint1;
Servo rl_joint1;
Servo rr_joint1;
//Servo fl_joint2;
//Servo fr_joint2;
//Servo rl_joint2;
//Servo rr_joint2;


void setup() {
  fl_joint1.attach(fl_joint1_pin);
  fr_joint1.attach(fr_join1_pin);
  rl_joint1.attach(rl_joint1_pin);
  rr_joint1.attach(rr_joint1_pin);
}

void loop() {
//  fl_joint1.write(left_servo_forward);
//  fr_joint1.write(right_servo_forward);
//  rear_left.write(left_servo_forward);
//  rear_right.write(right_servo_forward);
//
//  delay(1000);
//
//  fl_joint1.write(90);
//  front_right.write(90);
//  rear_left.write(90);
//  rear_right.write(90);
//
//  delay(1000);
}

void move_front_left(int new_pos) {
  fl_joint1.write(new_pos);
}

void move_front_right(int new_pos) {
  fr_joint1.write(new_pos);
}

void move_rear_left(int new_pos) {
  rl_joint1.write(new_pos);
}

void move_rear_right(int new_pos) {
  rr_joint1.write(new_pos);
}

void go_to_home_pos() {
  fl_joint1.write(90);
  fr_joint1.write(90);
  rl_joint1.write(90);
  rr_joint1.write(90);
}

void trot() {
  // Trot Gait: In a trot gait, the diagonally opposite legs move together.
  // For example, when the front right and back left legs move forward, the front left and back right legs move
  // backward. This gait provides stability and is commonly observed in real animals like dogs and horses.
}

void crawl() {

}

void bound() {

}

void pace() {

}
