// 1231233.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <typeinfo>
#include <fstream>
#include "Animal.h"
#include "cat.h"
#include "dog.h"

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


void Animal::add()
{
    char ch;
    cout << " 'C' to add a cat"
        "\n 'D' to add a dog"
        "\nEnter selection: ";
    cin >> ch;
    switch (ch)
    {
    case 'C':
        arrap[n] = new cat;
        break;
    case 'D':
        arrap[n] = new dog;
        break;
    default:
        cout << "Unknown Animal type\n";
        return;
    }
    arrap[n++]->getData();
}
void Animal::display()
{
    for (int j = 0; j < n; j++)
    {
        cout << (j + 1) << '\n';
        switch (arrap[j]->getType())
        {
        case Animal_type::tCat:
            cout << ". Type: Cat";
            break;
        case Animal_type::tDog:
            cout << ". Type:Dog";
            break;
        default:
            cout << ". Unknown type";
        }
        arrap[j]->setData();
        cout << endl;
    }
}
Animal_type Animal::getType()
{
    if (typeid(*this) == typeid(cat))
        return Animal_type::tCat;
    else if (typeid(*this) == typeid(dog))
        return Animal_type::tDog;
    else
    {
        cerr << "\nInvalid type";
        exit(0);
    }
    return Animal_type::tCat;
}
void Animal::write()
{
    int size;
    cout << "Writing " << n << " Animals.\n";
    Animal_type ftype;
    ofstream of;
    of.open("Animals.DAT", ios::trunc | ios::binary);
    if (!of)
    {
        cout << "\nCan't open file\n";
        return;
    }
    for (int j = 0; j < n; j++)
    {
        ftype = arrap[j]->getType();
        of.write((char*)&ftype, sizeof(ftype));
        switch (ftype) //find its size
        {
        case Animal_type::tCat:
            size = sizeof(cat);
            break;
        case Animal_type::tDog:
            size = sizeof(dog);
            break;
        }
        of.write((char*)(arrap[j]), size);
        if (!of)
        {
            cout << "\nCan't write to file\n";
            return;
        }
    }
}

void Animal::read()
{
    int size;
    Animal_type ftype;
    ifstream inf; //open ifstream in binary
    inf.open("Animals.DAT", ios::binary);
    if (!inf)
    {
        cout << "\nCan't open file\n";
        return;
    }
    n = 0;
    while (true)
    {
        inf.read((char*)&ftype, sizeof(ftype));
        if (inf.eof())
            break;
        if (!inf) //error reading type
        {
            cout << "\nCan't read type from file\n";
            return;
        }
        switch (ftype)
        {

        case Animal_type::tCat:
            arrap[n] = new cat;
            size = sizeof(cat);
            break;
        case Animal_type::tDog:
            arrap[n] = new dog;
            size = sizeof(dog);
            break;
        default:
            cout << "\nUnknown type in file\n";
            return;
        }

        inf.read((char*)arrap[n], size);
        if (!inf) //error but not eof
        {
            cout << "\nCan't read data from file\n";
            return;
        }
        n++;
    }
    cout << "Reading " << n << " Animals\n";
}
int main()
{
    char ch;
    while (true)
    {
        cout << "'a' -- add data for an Animal"
            "\n'd' -- display data for all Animals"
            "\n'w' -- write all Animal data to file"
            "\n'r' -- read all Animal data from file"
            "\n'x' -- exit"
            "\nEnter selection: ";
        cin >> ch;
        switch (ch)
        {
        case 'a':
            Animal::add();
            break;
        case 'd':
            Animal::display();
            break;
        case 'w':
            Animal::write();
            break;
        case 'r':
            Animal::read();
            break;
        case 'x':
            exit(0);
        default:
            cout << "\nUnknown command";
        }
    }
    return 0;
}

