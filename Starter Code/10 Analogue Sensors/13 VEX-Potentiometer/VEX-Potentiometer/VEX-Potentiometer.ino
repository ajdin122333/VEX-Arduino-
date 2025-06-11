int potPin = A3;  //Using Analog Pin A3
int potVal = 9;

void setup() {
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);  //reads the potentiometer value from Analog Pin3
  // Alternate line: potVal = analogRead(A3); //No memory of pin-values possible in array or other
  Serial.println(potVal);

  /* Alternate Serial Monitor concatenation, print() & println()
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue); // Print the value to the Serial Monitor
  delay(500); // Wait for 500 milliseconds before the next reading
  */
}

/* Alternate void loop() from https://youtu.be/Wa8CjGsOFzY?si=N-u4qneKZrVncHrD

//int brightness = sensorvalue/4; 
  // 1023 / 4 = 255.75 but the .75 cuts cut off
  
  int brightness = map(sensorValue, 0, 1023, 0, 255);

  // analogWrite(11,brightness);

  // print out the value you read
  Serial.print(" ADC reading: ");
  Serial.print(sensorValue);
  Serial.print(" Analog voltage: ");
  //Serial.println(voltage);
  delay(1); // delay inbetween reads for stability, 1 millisecond

*/

/* Alternate Map potentiometer value to range (0° to 265°)
int angle = map(potentiometerValue, 0, 1023, 0, 265);
//
// Print values to Serial Monitor
Serial.print("Potentiometer Value: ");
Serial.println(potentiometerValue);
Serial.print("Mapped Angle: ");
Serial.println(angle);
delay(90); //90 milliseconds
*/