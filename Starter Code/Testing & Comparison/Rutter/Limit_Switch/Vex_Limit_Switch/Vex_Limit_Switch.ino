#define LIMIT_SWITCH_PIN 4  

bool isPressed = false;

void setup() {
    pinMode(LIMIT_SWITCH_PIN, INPUT_PULLUP);
    Serial.begin(9600); // Start serial communication
}

void loop() {
    if (isPressed) {  
        isPressed = (digitalRead(LIMIT_SWITCH_PIN) == HIGH); 
        Serial.println("On");    
        } else {
        isPressed = (digitalRead(LIMIT_SWITCH_PIN) == LOW); 
        Serial.println("Off"); 
    }

    delay(50);  // Small delay for debounce
}
