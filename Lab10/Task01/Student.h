#pragma once
#include "Person.h"
class Student :
    public Person
{
private:
    int student_ID;
public:
    void setID(int val);
    int getID();
    void info();
};

