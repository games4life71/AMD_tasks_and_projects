#pragma once
#include "Electronics.h"

class SoundSytems:public Electronics
{

protected:
    int decibel_power;
    
public:
  virtual void SetDecibelPower(int value);
    virtual int GetDecibels();
};
