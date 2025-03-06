const int potPin = A0; // Pin where the potentiometer is connected

void setup() {
  Serial.begin(9600); // Start the serial communication at 9600 baud rate
}

void loop() {
  int potValue = analogRead(potPin); // Read the value from the potentiometer
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue); // Print the value to the Serial Monitor
  delay(500); // Wait for 500 milliseconds before the next reading
}