#ifndef OshStepButtons_h
#define OshStepButtons_h

#include "Arduino.h"
#include <CapacitiveSensor.h>

class OshStepButtons {
  private:
    static const int pulse_pin      = 11;
    static const int pins_start     = 30;
    static const int play_index     = 16;
    static const int record_index   = 17;
    static const int shift_index    = 18;
    static const int yes_index      = 19;
    static const int up_index       = 20;
    static const int down_index     = 21;
    static const int right_index    = 22;
    static const int left_index     = 23;

    static const int threshold = 400;

    CapacitiveSensor* sensors;
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