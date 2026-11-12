#include <Arduino.h>
void setup() {
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}
void loop() {
  digitalWrite(12, HIGH);
  tone(8, 440);
  delay(500);
  digitalWrite(12, LOW);
  noTone(8);
  delay(500);
}