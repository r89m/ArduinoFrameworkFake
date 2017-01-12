#ifndef _IARDUINOHARDWARE_H
#define _IARDUINOHARDWARE_H

#include "Arduino.h"

class IArduinoHardware{

public:
    virtual void pinMode(int pin, int mode)=0;
    virtual int digitalRead(int pin)=0;
    virtual void digitalWrite(int pin, int state)=0;
    virtual int analogRead(int pin)=0;
    virtual void analogWrite(int pin, int pwm)=0;

    virtual uint32_t millis()=0;
};

#endif // _IARDUINOHARDWARE_H