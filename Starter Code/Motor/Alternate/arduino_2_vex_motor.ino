const int motorPin = 9;
int motorSpeed = 0;

void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
  Serial.println("Enter speed");

}

void loop() {
  if (Serial.available() > 0) {
    int inputSpeed = Serial.parseInt();

    if (inputSpeed >= 0 && inputSpeed <= 255) {
      motorSpeed = inputSpeed;
      analogWrite(motorPin, motorSpeed);
      Serial.print("motor speed set to: ");
      Serial.println(motorSpeed);
    } else {
      Serial.println("Invalid speed");
    }

    while (Serial.available() > 0) {
      Serial.read();
    }
  }
}
