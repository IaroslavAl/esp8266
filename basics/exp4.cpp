#include <Arduino.h>
#include "exp4.h"

const int ButtonPin = 16;
const int LedPin = 0;

void exp4Setup() {
  pinMode(ButtonPin, INPUT);
  pinMode(LedPin, OUTPUT);
}

void exp4Loop() {
  int buttonValue = digitalRead(ButtonPin);
  if (buttonValue == HIGH) {
    digitalWrite(LedPin, HIGH);
  } else {
    digitalWrite(LedPin, LOW);
  }
}
