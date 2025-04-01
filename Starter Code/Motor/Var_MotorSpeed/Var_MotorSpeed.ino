const int motorPin = 9;
int motorSpeed = 255; // 81<motorSpeed<255
//Test the numbers inbetween 0-81
//Test the numbers inbetween 81-255 for obvious changes, then read the voltage readings on the Arduino Pin
//Test the negaive values by *-1

void setup() {
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
  //Serial.println("Enter speed");

}

void loop() {
  if (motorSpeed >= 0 && motorSpeed <= 255) {
      analogWrite(motorPin, motorSpeed);
      Serial.print("motor speed set to: ");
      Serial.println(motorSpeed);
    } else {
      Serial.println("Invalid speed");
    }
}