#include "Cord_Phones.h"
#include "Mobile_Phones.h"
#include "Container_Class.h"
#include "Earplugs.h"
#include "Phones.h"
#include "Stereos.h"

int main(int argc, char* argv[])
{
  
Container_Class c;
    c.AddDevice(new Cord_Phones(21,"apple","ios",12221));
    c.AddDevice(new Earplugs());
    c.AddDevice(new Stereos());
    
    c.PrintAll();
    return 0;
}
