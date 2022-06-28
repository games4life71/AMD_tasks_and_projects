#pragma once
#include "Electronics.h"

class Phones : public Electronics
{
protected:
    int battery_life;
    
public:

    virtual void SetBatteryLife(int value );
    virtual int GetBatteryLife();
       
};



