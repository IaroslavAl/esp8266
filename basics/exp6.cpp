#include <Arduino.h>
#include "exp6.h"

const int ButtonPin = 16;
const int LedPin = 0;

void exp6Setup() {
  pinMode(ButtonPin, INPUT);
  pinMode(LedPin, OUTPUT);
}

void exp6Loop() {
  int buttonValue = digitalRead(ButtonPin);
  if (buttonValue == HIGH) {
    digitalWrite(LedPin, HIGH);
  } else {
    digitalWrite(LedPin, LOW);
  }
}
