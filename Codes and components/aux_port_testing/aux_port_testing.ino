int ledPin = 13;
int statePin = LOW;

void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, HIGH);
}
//Piezo +ve (Silver inner circle) -> A0
//Piezo -ve (Golden outer circle) -> GND
//LED +ve -------------------------> D13
//LED -ve -------------------------> GND
