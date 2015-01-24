#include "Arduino.h"
#include "OshStepButtons.h"

#include <CapacitiveSensor.h>

OshStepButtons::OshStepButtons() {
    sensors = (CapacitiveSensor*)malloc(sizeof(CapacitiveSensor * 24));
    for (int i = 0; i < 24; i++) {
        sensors[i] = new CapacitiveSensor(pulse_pin, step_pins_start + i);
        sensors[i].set_CS_AutocaL_Millis(0xFFFFFFFF);
    }
}

OshStepButtons::~OshStepButtons() {
    for (int i = 0; i < 24; i++) {
        delete sensors[i];
    }
    free sensors;
}

OshStepButtons::readValue(uint8_t button) {

}