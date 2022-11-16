#pragma once
#include "Person.h"
class Teacher :
    public Person
{
private:
    int Teacher_ID;
public:
    void setID(int val);
    int getID();
    void info();
};

