#include <Arduino.h>

// Пины
const int BUZZER_PIN = 8;
const int LED_PIN = 12;

const int NOTE_C4 = 262; // до
const int NOTE_D4 = 294; // ре
const int NOTE_E4 = 330; // ми
const int NOTE_F4 = 349; // фа
const int NOTE_G4 = 392; // соль

const int BEAT_MS = 400;
const int GAP_MS = BEAT_MS / 10;      
const int NOTE_MS = BEAT_MS - GAP_MS; 

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // ми ми фа соль
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_E4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_E4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_F4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_G4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  
  // соль фа ми ре
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_G4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_F4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_E4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_D4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  
  // до до ре ми
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_C4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_C4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_D4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  digitalWrite(LED_PIN, HIGH); tone(BUZZER_PIN, NOTE_E4, NOTE_MS); delay(NOTE_MS); digitalWrite(LED_PIN, LOW); delay(GAP_MS);
  
  // ми (полторы доли), ре (половина доли), ре (две доли)
  digitalWrite(LED_PIN, HIGH);
  tone(BUZZER_PIN, NOTE_E4, BEAT_MS * 3 / 2 - GAP_MS);
  delay(BEAT_MS * 3 / 2 - GAP_MS);
  digitalWrite(LED_PIN, LOW);
  delay(GAP_MS);

  digitalWrite(LED_PIN, HIGH);
  tone(BUZZER_PIN, NOTE_D4, BEAT_MS / 2 - GAP_MS);
  delay(BEAT_MS / 2 - GAP_MS);
  digitalWrite(LED_PIN, LOW);
  delay(GAP_MS);

  digitalWrite(LED_PIN, HIGH);
  tone(BUZZER_PIN, NOTE_D4, BEAT_MS * 2 - GAP_MS);
  delay(BEAT_MS * 2 - GAP_MS);
  digitalWrite(LED_PIN, LOW);
  delay(GAP_MS);

  delay(BEAT_MS * 2); // пауза перед повтором
}
