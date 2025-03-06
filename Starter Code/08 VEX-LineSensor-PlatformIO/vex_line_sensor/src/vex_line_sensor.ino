#include <Arduino.h>

int trackerPin = A0;
int lineVal  = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  lineVal = analogRead(trackerPin);

  Serial.print("Line Tracker Value: ");
  Serial.println(lineVal);
  if (lineVal > 500) {
    Serial.println("Dark Surface Detected");
  } else {
    Serial.println("Light Surface Detected");
  }
    delay(500);

}
