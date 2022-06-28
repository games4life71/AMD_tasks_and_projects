#include "Stereos.h"
void Stereos::PrintInfo()
{
    printf("The name is %s , the id is %d , the year of fabrication is %d , power of decibels is %d , with %d number of speakers " , this->GetName(),this->GetID() , this->GetYear(), this->GetDecibels(), this->GetNumberOf());        
}
Stereos::Stereos()
{
    
}

void Stereos::SetiD(int id)
{
    this->id = id;
}

void Stereos::SetName(std::string name)
{
    this->name = name;
}

void Stereos::SetYear(int year)
{
    this->year_of_fabrication = year;
}

int Stereos::GetYear()
{
    return this->year_of_fabrication;
}

int Stereos::GetID()
{
    return this->id;
}

std::string Stereos::GetName()
{
    return this->name;
}

void Stereos::SetNumberOf(int value)
{
    this->numberOf  = value ;
}

int Stereos::GetNumberOf()
{
    return this->numberOf;
}

