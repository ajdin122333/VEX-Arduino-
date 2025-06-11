#include <Servo.h>
#include <Encoder.h>

// Motor Controllers (pick any 4 PWM pins)
const int motorPins[4] = {3, 5, 6, 9};
Servo motors[4];

// Shaft Encoders: Each needs 2 digital pins (A, B channels)
Encoder encoders[4] = {
  Encoder(2, 4),   // Encoder 1: pins 2 & 4
  Encoder(7, 8),   // Encoder 2: pins 7 & 8
  Encoder(10, 11), // Encoder 3: pins 10 & 11
  Encoder(12, 13)  // Encoder 4: pins 12 & 13
};

void setup() {
  Serial.begin(9600);

  // Attach Servo objects to PWM pins
  for (int i = 0; i < 4; i++) {
    motors[i].attach(motorPins[i]);
    // Center motors (90 = stop for Motor Controller 29)
    motors[i].write(90);
  }
}

void loop() {
  // Example: Run all motors forward at half speed
  for (int i = 0; i < 4; i++) {
    motors[i].write(135); // 90 = stop, 180 = full forward, 0 = full reverse
  }

  // Print encoder values
  for (int i = 0; i < 4; i++) {
    Serial.print("Encoder ");
    Serial.print(i+1);
    Serial.print(": ");
    Serial.print(encoders[i].read());
    Serial.print("\t");
  }
  Serial.println();

  delay(100);
}