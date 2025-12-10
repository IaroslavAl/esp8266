#include <Arduino.h>
#include "exp5.h"

const int ButtonPin = 16;
const int LedPin = 0;
const int CountLimit = 1;

static int oldButtonValue = 0;
static int ledState = 0;
static int count = 0;

void exp5Setup() {
  pinMode(ButtonPin, INPUT);
  pinMode(LedPin, OUTPUT);
}

void exp5Loop() {
  int buttonValue = digitalRead(ButtonPin);
  if (oldButtonValue != buttonValue && buttonValue == HIGH) {
    if (ledState == 1 && count == CountLimit) {
      digitalWrite(LedPin, LOW);
      ledState = 0;
      count = 0;
    } else if (ledState == 0 && count == CountLimit) {
      digitalWrite(LedPin, HIGH);
      ledState = 1;
      count = 0;
    } else {
      count += 1;
    }
  }
  oldButtonValue = buttonValue;
}
