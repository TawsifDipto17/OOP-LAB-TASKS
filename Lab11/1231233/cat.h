#pragma once
#include "Animal.h"
class cat :
    public Animal
{
private:
    string sz;
public:
    void getData()
    {
        Animal::getData();
        cout << "Enter size: ";
        cin >> sz;
    }
    void setData()
    {
        Animal::setData();
        cout << "\n Size: " << sz;
    }
};

