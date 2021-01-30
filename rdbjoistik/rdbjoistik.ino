int R = 9;
int G = 10;
int B = 11;

int deger;
int dereceR = 255;
int dereceG = 255;
int dereceB = 255;
int renk;
int anlikRenk = 0;


void setup() {
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  deger = analogRead(A0);
  renk = analogRead(A5);
  if(renk == 1023) {
    anlikRenk++;
  }
  
  if (anlikRenk == 0) {
      dereceR = map(deger, 0, 1023, 0 , 255);
  }
  if (anlikRenk == 1) {
      dereceG = map(deger, 0, 1023, 0 , 255);
  }
  if (anlikRenk == 2) {
      dereceB = map(deger, 0, 1023, 0 , 255);
  }

  analogWrite(R, dereceR);
  analogWrite(G, dereceG);
  analogWrite(B, dereceB);
}
