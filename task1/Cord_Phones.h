#pragma once
#include "Cord_Phones.h"
#include "Cord_Phones.h"
#include "Phones.h"

class Cord_Phones:public Phones
{

private : 
    std::string manufacter; 
    
public:
    Cord_Phones(); //default constructor
    Cord_Phones(int year, std::string manufacter ,  std::string name , int id );
   void PrintInfo() override;
    void SetiD(int id) override;

    void SetName(std::string name) override;

    void SetBatteryLife(int value) override;

    void SetYear(int year) override;

    void SetManufacter(std::string value );

    std::string GetName() override;

    int GetYear() override;

    int GetBatteryLife() override;

    int GetID() override;
};
