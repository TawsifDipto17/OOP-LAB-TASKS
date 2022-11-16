// Task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "rational_number.h"

int main()
{   
    rational_number num1,num2,result;
    num1.set_denominator(5);
    num1.set_numerator(1);
    num2.set_denominator(5);
    num2.set_numerator(2);
    result= num2+num1;
    num1.print();
    num2.print();
    result.print();

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
