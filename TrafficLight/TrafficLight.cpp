/*
  TrafficLight.cpp - Library for Controll Traffic lights.
  Created by Gilmar V. K. Bec, November 30, 2020.
  Released into the public domain.
*/

#include "Arduino.h"
#include "TrafficLight.h"

TrafficLight::TrafficLight(int red_pin, int yellow_pin, int green_pin) {
    pinMode(red_pin, OUTPUT);
    pinMode(yellow_pin, OUTPUT);
    pinMode(green_pin, OUTPUT);

    _RED_PIN = red_pin;
    _YELLOW_PIN = yellow_pin;
    _GREEN_PIN = green_pin;
};

void TrafficLight::lightSelector(int light) {
    switch (light) {
        case 0:
            digitalWrite(_RED_PIN, HIGH);
            digitalWrite(_YELLOW_PIN, LOW);
            digitalWrite(_GREEN_PIN, LOW);
            break;
        case 1:
            digitalWrite(_RED_PIN, HIGH);
            digitalWrite(_YELLOW_PIN, LOW);
            digitalWrite(_GREEN_PIN, LOW);
            break;
        case 2:
            digitalWrite(_RED_PIN, HIGH);
            digitalWrite(_YELLOW_PIN, LOW);
            digitalWrite(_GREEN_PIN, LOW);
            break;
        default:
            break;
    }
};
