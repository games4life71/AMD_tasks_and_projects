﻿#include "Mobile_Phones.h"

void Mobile_Phones::SetiD(int id)
{
    this->id = id ; 
}

void Mobile_Phones::SetDisplayName(std::string name)
{
    this->display_name = name;
}

void Mobile_Phones::SetIMEI(std::string IMEI)
{
    this->IMEI = IMEI;
}

void Mobile_Phones::SetName(std::string name)
{
    this->name = name;
}

void Mobile_Phones::SetYear(int year)
{
    this->year_of_fabrication = year;
}

std::string Mobile_Phones::GetName()
{
    return this->name;
}

std::string Mobile_Phones::GetDisplayName()
{
    return this->display_name;
}

std::string Mobile_Phones::GetIMEI()
{
    return this->IMEI;
}

int Mobile_Phones::GetYear()
{
    return this->year_of_fabrication;
}

int Mobile_Phones::GetID()
{
   return this->id;
}

int Mobile_Phones::GetBatteryLife()
{
    return this->battery_life; 
}

void Mobile_Phones::SetBatteryLife(int value)
{

    this->battery_life = value ; 
}
