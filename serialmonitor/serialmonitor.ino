#define potpin A0
const int LED = 3;

int deger=0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Pot Deger Okuma");
}

void loop() {
  deger = analogRead(potpin);
  float gerilim = (5.00/1024.00) * deger;
  Serial.println(deger);
  delay(300);
  Serial.println(gerilim);
  digitalWrite(LED, deger);
}
