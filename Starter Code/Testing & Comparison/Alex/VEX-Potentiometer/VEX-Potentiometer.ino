int potPin = A3; 
int potVal = 0; 

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  potVal = analogRead(potPin);   //reads the potentiometer value
  Serial.println(potVal);
}

