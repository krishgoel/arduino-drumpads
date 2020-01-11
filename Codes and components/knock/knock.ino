int ledPin = 13;

int knockSensor1 = 0;
int knockSensor2 = 1;
int knockSensor3 = 2;
int knockSensor4 = 3;
int knockSensor5 = 4;
int knockSensor6 = 5;               

byte val1 = 0;
byte val2 = 1;
byte val3 = 2;
byte val4 = 3;
byte val5 = 4;
byte val6 = 5;

int statePin = LOW;
int THRESHOLD = 250;

void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(9600);
  digitalWrite(ledPin, LOW);
}

void loop() {
  val1 = analogRead(knockSensor1);     
  if (val1 >= THRESHOLD) {
    digitalWrite(ledPin, HIGH);
    delay(10);
    digitalWrite(ledPin, LOW);
  }

  val2 = analogRead(knockSensor2);     
  if (val2 >= THRESHOLD) {
    digitalWrite(ledPin, HIGH);
    delay(10);
    digitalWrite(ledPin, LOW);
  }

  val3 = analogRead(knockSensor3);     
  if (val3 >= THRESHOLD) {
    digitalWrite(ledPin, HIGH);
    delay(10);
    digitalWrite(ledPin, LOW);
  }

  val4 = analogRead(knockSensor4);     
  if (val4 >= THRESHOLD) {
    digitalWrite(ledPin, HIGH);
    delay(10);
    digitalWrite(ledPin, LOW);
  }

  val5 = analogRead(knockSensor5);     
  if (val5 >= THRESHOLD) {
    digitalWrite(ledPin, HIGH);
    delay(10);
    digitalWrite(ledPin, LOW);
  }

  val6 = analogRead(knockSensor6);     
  if (val6 >= THRESHOLD) {
    digitalWrite(ledPin, HIGH);
    delay(10);
    digitalWrite(ledPin, LOW);
  }
}
//Piezo +ve (Silver inner circle) -> A0,1, 2, 3, 4, 5
//Piezo -ve (Golden outer circle) -> GND
//LED +ve -------------------------> D13
//LED -ve -------------------------> GND
