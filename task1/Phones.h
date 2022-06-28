#pragma once
#include "Electronics.h"
#include <string>
class Phones : public Electronics
{
protected:
    int battery_life;
    std::string name;
    int id;
    int year_of_fabrication; 
    
public:

 
   virtual  void SetBatteryLife(int value ) = 0;
    virtual int  GetBatteryLife() =0 ;
    
};



