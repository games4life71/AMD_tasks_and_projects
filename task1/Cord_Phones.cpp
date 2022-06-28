#include "Cord_Phones.h"

Cord_Phones::Cord_Phones(int year, std::string manufacter, std::string name, int id)
{

    this->year_of_fabrication  = year;
    this->name = name;
    this->id = id;
    this->manufacter = manufacter;
}

void Cord_Phones::SetiD(int id)
{
    this->id = id;
}

void Cord_Phones::SetName(std::string name)
{
    this->name = name ; 
}

void Cord_Phones::SetBatteryLife(int value)
{
    this->battery_life = value;
}

void Cord_Phones::SetYear(int year)
{
    this->year_of_fabrication = year;
}

void Cord_Phones::SetManufacter(std::string value)
{
    this->manufacter =value;
}

std::string Cord_Phones::GetName()
{
    return this->name;
}

int Cord_Phones::GetYear()
{
    return this->year_of_fabrication;
}

int Cord_Phones::GetBatteryLife()
{
    return this->GetBatteryLife();
}

int Cord_Phones::GetID()
{
    return this->id;
}
