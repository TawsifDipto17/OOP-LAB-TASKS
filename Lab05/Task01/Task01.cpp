// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SavingsAccount.h"



int main()
{
    SavingsAccount saver1(2000),saver2(3000);
    cout << endl;
    saver1.modifyInterestRate(0.03);
    saver1.setBalance(saver1.getBalance() + saver1.calculateMonthlyInterest());
    saver2.setBalance(saver2.getBalance() + saver2.calculateMonthlyInterest());
    cout << "New Balance for saver1: $" << saver1.getBalance() << endl;
    cout << "New Balance for saver2: $" << saver2.getBalance() << endl;

    saver1.modifyInterestRate(0.04);
    cout << "Monthly Interest Modified!" << endl;
    saver1.setBalance(saver1.getBalance() + saver1.calculateMonthlyInterest());
    saver2.setBalance(saver2.getBalance() + saver2.calculateMonthlyInterest());
    cout << "New Balance for saver1: $" << saver1.getBalance()  << endl;
    cout << "New Balance for saver2: $" << saver2.getBalance()  << endl;

    cout << endl;
   
    

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
