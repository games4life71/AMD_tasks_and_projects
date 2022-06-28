#pragma once
#include <string>
class Electronics
{

public :
   //getters and setters to promote encapsulation 
   virtual void PrintInfo() =0;
   
   virtual void SetiD(int id)=0 ;
   
    virtual void SetName(std::string name) =0;
   //
    virtual void SetYear(int year)=0 ;
   //
    virtual int  GetYear() =0 ;
   //
   virtual int GetID() =0;
   //
    virtual std::string  GetName()=0;
};
