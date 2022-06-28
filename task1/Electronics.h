#pragma once
#include <string>
class Electronics
{
protected:
   std::string name;
   int id;
   int year_of_fabrication; 

public :
   //getters and setters to promote encapsulation 
   virtual void PrintInfo()  ;
   
   virtual void SetiD(int id) ;
   
   virtual void SetName(std::string name) ;
   
   virtual void SetYear(int year) ;
   
   virtual int  GetYear()  ;
   
   virtual int GetID() ;
   
   virtual std::string  GetName();
};
