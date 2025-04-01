#define BUMP_SENSOR_PIN A5  

bool isPressed = false;

void setup() {
    pinMode(BUMP_SENSOR_PIN, INPUT_PULLUP);
    Serial.begin(9600); // Start serial communication
}

void loop() {
    if (isPressed) {  
        isPressed = (digitalRead(BUMP_SENSOR_PIN) == HIGH); 
        Serial.println("On");    
        } else {
        isPressed = (digitalRead(BUMP_SENSOR_PIN) == LOW); 
        Serial.println("Off"); 
    }

    delay(50);  // Small delay for debounce
}
