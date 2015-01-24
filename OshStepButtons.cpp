#include "Arduino.h"
#include "OshStepButtons.h"

#include <CapacitiveSensor.h>

OshStepButtons::OshStepButtons() {
    sensors = (CapacitiveSensor**)malloc(sizeof(CapacitiveSensor) * 24);
    for (int i = 0; i < 24; i++) {
        sensors[i] = new CapacitiveSensor(pulse_pin, pins_start + i);
        sensors[i]->set_CS_AutocaL_Millis(0xFFFFFFFF);
    }
}

OshStepButtons::~OshStepButtons() {
    for (int i = 0; i < 24; i++) {
        delete sensors[i];
    }
    free(sensors);
}

bool OshStepButtons::getStep(uint8_t step) {
    long sample_time = sensors[step]->capacitiveSensor(30);
#ifdef DEBUG
    Serial.print(step);
    Serial.print(":\t");
    Serial.println(sample_time);
#endif
    if (sample_time > threshold)
        return true;
    return false;
}

bool OshStepButtons::getPlay() {
    return getStep(play_index);
}

bool OshStepButtons::getRecord() {
    return getStep(record_index);
}

bool OshStepButtons::getShift() {
    return getStep(shift_index);
}

bool OshStepButtons::getYes() {
    return getStep(shift_index);
}

bool OshStepButtons::getUp() {
    return getStep(up_index);
}

bool OshStepButtons::getDown() {
    return getStep(down_index);
}

bool OshStepButtons::getRight() {
    return getStep(right_index);
}

bool OshStepButtons::getLeft() {
    return getStep(left_index);
}