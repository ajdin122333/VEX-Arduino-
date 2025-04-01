volatile int encoderCount = 0;
int lastStateA = LOW;
int lastStateB = LOW;
const int encoderPinA = 3;
const int encoderPinB = 5;

void setup() {
  Serial.begin(9600);

  pinMode(encoderPinA, INPUT_PULLUP);
  pinMode(encoderPinB, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(encoderPinA), updateEncoder, CHANGE);
  attachInterrupt(digitalPinToInterrupt(encoderPinB), updateEncoder, CHANGE);

}

void loop() {
  Serial.print("Encoder Count: ");
  Serial.println(encoderCount);
  delay(100);

}

void updateEncoder() {
  int currentStateA = digitalRead(encoderPinA);
  int currentStateB = digitalRead(encoderPinB);

  if (currentStateA != lastStateA || currentStateB != lastStateB) {
    if (currentStateA == currentStateB) {
      encoderCount++;
    } else {
      encoderCount--;
    }
  }

  lastStateA = currentStateA;
  lastStateB = currentStateB;
}
