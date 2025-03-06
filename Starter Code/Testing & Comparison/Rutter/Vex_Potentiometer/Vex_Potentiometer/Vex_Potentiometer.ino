#define POTENTIOMETER_PIN A3  // Analog pin for potentiometer

void setup() {
    Serial.begin(9600); 
}

void loop() {
    int potentiometerValue = analogRead(POTENTIOMETER_PIN); // Read potentiometer value (0-1023)
    
    // Map potentiometer value to range (0° to 265°)
    int angle = map(potentiometerValue, 0, 1023, 0, 265);
    
    // Print values to Serial Monitor
    Serial.print("Potentiometer Value: ");
    Serial.println(potentiometerValue);
    Serial.print("Mapped Angle: ");
    Serial.println(angle);

    delay(90);
}
