/**
 * Push Buttons
 * Part of Wokwi Playground
 * https://wokwi.com/course/simon/4-buttons
 * Copyright (C) 2019, Uri Shaked
 */

byte ledPins[] = {13, 12, 11, 10, 9, 8};
byte buttonPins[] = {A0, A1, A2, A3, A4, A5};

void setup() {
  for (int i = 0; i < sizeof(buttonPins); i++) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
}

void loop() {
  for (int i = 0; i < sizeof(buttonPins); i++) {
    int btn = digitalRead(buttonPins[i]);
    if (btn == HIGH) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
}
