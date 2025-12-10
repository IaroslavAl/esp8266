#include <Arduino.h>
#include "exp1.h"

const int LedPin = 2;

void exp1Setup() {
  pinMode(LedPin, OUTPUT);
}

void exp1Loop() {
  digitalWrite(LedPin, LOW);
  delay(1000);
  digitalWrite(LedPin, HIGH);
  delay(1000);
}
