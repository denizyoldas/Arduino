int R = 9;
int G = 10;
int B = 11;

#define pot A0

void setup() {
 pinMode(R, OUTPUT);
 pinMode(G, OUTPUT);
 pinMode(B, OUTPUT);
}

void loop() {
  int red_val = analogRead(pot);
  red_val = map(red_val, 0,1023, 0,255);
  analogWrite(R, 233);
  analogWrite(G, red_val);
  analogWrite(B, 255);
}
