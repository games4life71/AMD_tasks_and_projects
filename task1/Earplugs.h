#pragma once
#include "SoundSytems.h"

class Earplugs:public SoundSytems
{

private:

    std::string type;
    
public:

     Earplugs(); //default constructor
    Earplugs(int id , int year, std::string name , std::string type , int decibels );

    void PrintInfo()   override final;

    void SetiD(int id) override final;

    void SetName(std::string name)override final;

    void SetYear(int year) override final;

    int  GetYear()override  final;

    int GetID() override final;

    std::string  GetName() override final;

    std::string GetType();

    void SetType(std::string type );
};
