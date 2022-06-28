#pragma once
#include "SoundSytems.h"

class Stereos:public  SoundSytems
{
private :
    int numberOf;
    
public:

Stereos(); // default constructor ;
    Stereos(int id , int year, std::string name , int numberOf, int decibels )
    {
        this->id = id;
        this->year_of_fabrication = year;
        this->name = name ;
        this->decibel_power = decibels;
        this->numberOf = numberOf;
    }
    void PrintInfo()   override final;

    void SetiD(int id) override final;

    void SetName(std::string name)override final;

    void SetYear(int year) override final;

    int  GetYear()override  final;

    int GetID() override final;

    std::string  GetName() override final;

    void SetNumberOf(int value);
    void SetDecibelPower(int value) override
    {
        this->decibel_power = value;
    }
    int GetDecibels() override
    {
        return this->decibel_power;
    };
    int GetNumberOf();
};
