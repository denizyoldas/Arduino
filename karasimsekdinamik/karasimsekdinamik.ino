int ledler[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

void setup() {
    for(int i = 0; i < sizeof(ledler) -1; i++) {
      pinMode(ledler[i], OUTPUT);
    }
}

void loop() {
    for(int i = 0; i < sizeof(ledler) - 1; i++) {
      digitalWrite(ledler[i], HIGH);
      delay(100);
      digitalWrite(ledler[i], LOW);
    }
    for(int j = sizeof(ledler) - 1; j > -1; j--) {
      digitalWrite(ledler[j], HIGH);
      delay(100);
      digitalWrite(ledler[j], LOW);
    }
}
