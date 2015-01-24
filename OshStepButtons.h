#ifndef OshStepButtons_h
#define OshStepButtons_h

#include "Arduino.h"
#include <CapacitiveSensor.h>

class OshStepButtons {
  private:
    static const uint8_t pulse_pin      = 11;
    static const uint8_t pins_start     = 30;
    static const uint8_t play_index     = 16;
    static const uint8_t record_index   = 17;
    static const uint8_t shift_index    = 18;
    static const uint8_t yes_index      = 19;
    static const uint8_t up_index       = 20;
    static const uint8_t down_index     = 21;
    static const uint8_t right_index    = 22;
    static const uint8_t left_index     = 23;

    static const uint8_t threshold = 400;

    CapacitiveSensor** sensors;
  public:
    OshStepButtons();
    ~OshStepButtons();
    bool getStep( uint8_t);
    bool getPlay();
    bool getRecord();
    bool getShift();
    bool getYes();
    bool getUp();
    bool getDown();
    bool getRight();
    bool getLeft();
};

#endif