#pragma once
#include "Animal.h"
class dog :
    public Animal
{
private:
    int cnt;
public:
    void getData()
    {
        Animal::getData();
        cout << "Enter seat number: ";
        cin >> cnt;
    }
    void setData()
    {
        Animal::setData();
        cout << "\n Seat number: " << cnt;
    }
};

