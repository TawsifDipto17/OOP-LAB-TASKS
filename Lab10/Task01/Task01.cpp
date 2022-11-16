// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

int main()
{
   /* Person p1;*/
    Student s1;
    Teacher t1;
    Person* ptr[2];
    ptr[0] = &s1;
    ptr[1] = &t1;

    ptr[0]->setName("Tenma");
    ptr[0]->setAge(40);
    ptr[0]->setID(1001);

    ptr[1]->setName("Yohan");
    ptr[1]->setAge(20);
    ptr[1]->setID(2001);

    ptr[0]->info();

    cout << endl;

    ptr[1]->info();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
