#include "Earplugs.h"



Earplugs::Earplugs()
{
    
}
Earplugs::Earplugs(int id, int year, std::string name, std::string type, int decibels)
{
    this->id = id;
    this->year_of_fabrication = year;
    this->name = name ;
    this->decibel_power = decibels;
    this->type = type ;
}

void Earplugs::PrintInfo()
{
    printf("The name is %s , the id is %d , the year of fabrication is %d , power of decibels is %d , type is %s" , this->GetName(),this->GetID() , this->GetYear(), this->GetDecibels(), this->GetType());        
}

void Earplugs::SetiD(int id)
{
    this->id = id;
}

void Earplugs::SetName(std::string name)
{
    this->name = name;
}

void Earplugs::SetYear(int year)
{
    this->year_of_fabrication = year;
}

int Earplugs::GetYear()
{
    return this->year_of_fabrication;
}

int Earplugs::GetID()
{
    return this->id;
}

std::string Earplugs::GetName()
{
    return this->name;
}

std::string Earplugs::GetType()
{
    return this->type;
}

void Earplugs::SetType(std::string type)
{
    this->type = type;
}
