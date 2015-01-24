#ifndef OshStepButtons_h
#define OshStepButtons_h

#include "Arduino.h"
#include <CapacitiveSensor.h>

class OshStepButtons {
  private:
    static const int pulse_pin       = 11;
    static const int step_pins_start = 30;
    static const int play_pin        = 46;
    static const int record_pin      = 47;
    static const int shift_pin       = 48;
    static const int yes_pin         = 49;
    static const int up_pin          = 50;
    static const int down_pin        = 51;
    static const int right_pin       = 52;
    static const int left_pin        = 53;

    static const int threshold = 400;

    uint16_t sequencer_states
    uint8_t function_states

    CapacitiveSensor* sensors;
  public:
    OshStepButtons();
    ~OshStepButtons();
    readPin( uint8_t);
};

#endif