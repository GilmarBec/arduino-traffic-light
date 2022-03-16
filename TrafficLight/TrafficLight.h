/*
  TrafficLight.h - Library for Controll Traffic lights.
  Created by Gilmar V. K. Bec, November 30, 2020.
  Released into the public domain.
*/
#ifndef TrafficLight_h
#define TrafficLight_h

#include "Arduino.h"

class TrafficLight
{
private:
    int _RED_PIN;
    int _YELLOW_PIN;
    int _GREEN_PIN;
public:
    TrafficLight(int red_pin, int yellow_pin, int green_pin);
    void lightSelector(int light);
};

#endif