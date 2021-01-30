#include <Servo.h>
#define sensorPin 3
#define motorPin 5
int motorDurum = 0;

Servo motor;

void setup() {
  pinMode(sensorPin, INPUT);
  motor.attach(motorPin);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(sensorPin)) {
    Serial.println(digitalRead(sensorPin));
    if (motorDurum == 0) {
      motorDurum = 180;
    } else {
      motorDurum = 0;
    }
    motor.write(motorDurum);
  }

  delay(1000);

}
