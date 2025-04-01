#include <Servo.h>

int leftMotorPin = 4;   //left motor pin
int rightMotorPin = 2;  //left motor pin
Servo leftMotor;
Servo rightMotor;


void setup() {
  // put your setup code here, to run once:
  pinMode(leftMotorPin, OUTPUT);
  pinMode(rightMotorPin, OUTPUT);
  pinMode(13, OUTPUT);
  leftMotor.attach(leftMotorPin);
  rightMotor.attach(rightMotorPin);
}

void loop() {
  // put your main code here, to run repeatedly
  leftMotorControl(100);
  rightMotorControl(600);
  digitalWrite(13, HIGH);
  delay(1000);
  leftMotorControl(-100);
  rightMotorControl(-100);
  digitalWrite(13, LOW);
}

int leftMotorControl(int value) {
  leftMotor.write(map(value, -100, 100, 1000, 2000));
}

int rightMotorControl(int value) {
  rightMotor.write(map(value, -100, 100, 1000, 2000));
}
