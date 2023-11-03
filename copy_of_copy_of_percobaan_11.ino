int ledPins[] = {2, 3, 4, 5, 6, 7, 8, 9};  
int jumlahLed = 8; 
int delayTime = 500;  

void setup() {
  for (int i = 0; i < jumlahLed; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < jumlahLed; i++) {
    digitalWrite(ledPins[i], HIGH);
    digitalWrite(ledPins[i-1], LOW);
    delay(delayTime);
  }
  digitalWrite(ledPins[7], LOW);
}

