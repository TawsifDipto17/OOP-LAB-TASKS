#pragma once
#include<iostream>
using namespace std;
#include<string>
enum class Animal_type { tCat, tDog };
class Animal
{
protected:
    string name;
    double height;
    double weight;
    static int n;
    static Animal* arrap[];
public:
    virtual void getData()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter Height: ";
        cin >> height;
        cout << "Enter Weight: ";
        cin >> weight;
    }
    virtual void setData()
    {
        cout << "\n Name: " << name;
        cout << "\n Height: " << height;
        cout << "\n Weight: " << weight;
    }
    virtual Animal_type getType();
    static void add();
    static void display();
    static void read();
    static void write();
};

