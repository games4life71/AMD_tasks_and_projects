#pragma once
#include "Electronics.h"

class Container_Class
{
private :
    Electronics** table   = new Electronics*[100];
    int count;
    
public:
    void AddDevice(Electronics* device)
    {
        this->table[count++] = device;
    }
    Container_Class() //default constructor
    {
        this->count = 0 ;
    }
    Container_Class& operator+=(Electronics* device)
    {
        this->AddDevice(device);
        return *this;
    }
    void PrintAll()
    {
      for(int i = 0 ; i<this->count;i++)
      {
          this->table[i]->PrintInfo();
      }
    }
      
};
