#include <Arduino.h>
#include "exp2.h"

const int LedPin = 16;

void exp2Setup() {
  pinMode(LedPin, OUTPUT);
}

void exp2Loop() {
  digitalWrite(LedPin, LOW);
  delay(1000);
  digitalWrite(LedPin, HIGH);
  delay(1000);
}
