// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Furniture.h"
#include "Bed.h"
#include "DIningTable.h"
#include "Sofa.h"

int main()
{
    
    cout << "-----------------------------------------" << endl;
    Bed bed1(10000, 2, "Wood", Single);
    bed1.productDetails();
    cout << "#########################################" << endl;
    cout << "-----------------------------------------" << endl;
    Bed bed2(10000, 15, "Wood", Double);
    bed2.productDetails();
    cout << "#########################################" << endl;

    /*Furniture* furn[5];
    furn[0] = new Bed(10000, 2, "Wood", Double);
    furn[1] = new Bed(15000, 3, "Gold", Single);
    furn[2] = new Sofa(20000, 4, "Platinum", One);
    furn[3] = new Sofa(5000, 10, "Silver", Three);
    furn[4] = new DIningTable(50000, 1.5, "Wood", SIX);

    static_cast<Bed*>(furn[0])->productDetails();
    cout << "#########################################" << endl;

    static_cast<Bed*>(furn[1])->productDetails();
    cout << "#########################################" << endl;

    static_cast<Sofa*>(furn[2])->productDetails();
    cout << "#########################################" << endl;

    static_cast<Sofa*>(furn[3])->productDetails();
    cout << "#########################################" << endl;

    static_cast<DIningTable*>(furn[4])->productDetails();
    cout << "#########################################" << endl;*/


    /*Furniture* furn = new Bed(10000, 2, "Wood", Double);
    static_cast<Bed*>(furn)->productDetails();*/
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
