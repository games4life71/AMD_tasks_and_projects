#pragma once
#include "Electronics.h"
#include <string>
class SoundSytems:public Electronics
{

protected:
    int decibel_power;
    std::string name;
    int id;
    int year_of_fabrication; 
    
public:
    virtual void SetDecibelPower(int value)=0;
    virtual int GetDecibels()=0;
};
