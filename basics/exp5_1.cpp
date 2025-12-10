#include <Arduino.h>
#include "exp5_1.h"

static const int ButtonPin = 16;
static const int LedPin = 0;
static const int LedPin2 = 2;

static int oldButtonValue = HIGH;
static int counterChecks = 0;
static const int numberChecks = 5;

void exp5_1Setup() {
  pinMode(ButtonPin, INPUT);
  pinMode(LedPin, OUTPUT);
  pinMode(LedPin2, OUTPUT);

  digitalWrite(LedPin, LOW);
  digitalWrite(LedPin2, LOW);
}

void exp5_1Loop() {
  int buttonValue = digitalRead(ButtonPin);

  if (buttonValue == LOW) {
    if (buttonValue != oldButtonValue) {
      if (counterChecks < numberChecks) {
        digitalWrite(LedPin, !digitalRead(LedPin));
      } else {
        digitalWrite(LedPin2, !digitalRead(LedPin2));
      }
      counterChecks = 0;
    }
  } else {
    counterChecks++;
  }

  oldButtonValue = buttonValue;
  delay(50);   // time.sleep_ms(50)
}

