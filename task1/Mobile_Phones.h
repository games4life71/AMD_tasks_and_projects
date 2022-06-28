#pragma once
#include "Phones.h"

class Mobile_Phones:public Phones
{

private :
     
    std::string IMEI;
    std::string display_name;

    
public:
     Mobile_Phones(); // default constructor
     Mobile_Phones(int year , std::string name , std::string display_name , std::string IMEI , int id)
     {
        this->year_of_fabrication = year;
         this->display_name = display_name;
         this->id = id;
         this->name = name;
         this->IMEI = IMEI;

     }

    void SetiD(int id) override;

     void SetDisplayName(std::string name) ;

     void SetIMEI(std::string IMEI) ;

     void SetName(std::string name) override;

     void SetYear(int year ) override;

     std::string GetName() override;

     std::string GetDisplayName() ;

     std::string GetIMEI();

     int GetYear() override;
     int GetID() override;
     int GetBatteryLife() override;

    void SetBatteryLife(int value) override;
};
