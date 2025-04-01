const int outputPin = 9;
const int inputPin = 10;
const int led = 8;
//int x=0;

void setup() {
  Serial.begin(9600);
  pinMode(outputPin, INPUT);
  pinMode(inputPin, OUTPUT);
}

void loop() {
  digitalWrite(inputPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(inputPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(inputPin, LOW);

  long duration = pulseIn(outputPin, HIGH);
  long distance = duration * 0.034 / 2;
  
  if (distance <=60)
  {
    digitalWrite(led, HIGH);
  } else
  {
    digitalWrite(led, LOW);
  }

  //Serial.print(x++);
  Serial.print(distance);
  Serial.println(" cm");
    delay(50);
}
