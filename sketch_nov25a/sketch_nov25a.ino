
const int rojoPin = 10;
const int amarilloPin = 9;
const int verdePin = 8;

void setup() {
  
  pinMode(rojoPin, OUTPUT);
  pinMode(amarilloPin, OUTPUT);
  pinMode(verdePin, OUTPUT);
}

void loop() {
  
  digitalWrite(rojoPin, HIGH);
  digitalWrite(amarilloPin, LOW);
  digitalWrite(verdePin, LOW);
  delay(2000); 

  
  digitalWrite(rojoPin, LOW);
  digitalWrite(amarilloPin, LOW);
  digitalWrite(verdePin, HIGH);
  delay(2000); 
  
  digitalWrite(rojoPin, LOW);
  digitalWrite(amarilloPin, HIGH);
  digitalWrite(verdePin, LOW);
  delay(2000); 
}
