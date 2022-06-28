#pragma once
#include "Phones.h"

class Mobile_Phones:public Phones
{

private :
     
    std::string IMEI;
    std::string display_name;

    
public:
     Mobile_Phones(); // default constructor
     Mobile_Phones(int year , std::string name , std::string display_name , std::string IMEI , int id);
     void PrintInfo() override;
    
    void SetiD(int id) ;

     void SetDisplayName(std::string name) ;

     void SetIMEI(std::string IMEI) ;

     void SetName(std::string name) ;

     void SetYear(int year ) ;

     std::string GetName();

     std::string GetDisplayName() ;

     std::string GetIMEI();

     int GetYear() ;
     int GetID() ;
     int GetBatteryLife() ;

    void SetBatteryLife(int value) ;
};
