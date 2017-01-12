
#include "AxxTest.h"
#include <iostream>

// TODO: store digitalWrite, analogWrite, pinMode etc in ArduinoHardware class

IArduinoHardware* ArduinoHardware;
fakeit::Mock<IArduinoHardware> ArduinoHardwareMock;

uint32_t millis(void){

    return ArduinoHardware->millis();
}

void delay(uint32_t ms_delay){

    // Do nothing. Use the FakeIt mocking methods to cause millis to return different values
}

void pinMode(int pin, int mode){

    ArduinoHardware->pinMode(pin, mode);
}

void analogWrite(int pin, int value){

    ArduinoHardware->analogWrite(pin, value);
}

int analogRead(int pin){

    return ArduinoHardware->analogRead(pin);
}

void digitalWrite(int pin, int state){

    ArduinoHardware->digitalWrite(pin, state);
}

int digitalRead(int pin){

    return ArduinoHardware->digitalRead(pin);
}
