// Task0001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Account.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"
#include "MonthlyDepositScheme.h"
#include "LoanAccount.h"
#include "TwoYearMDS.h"
#include "FiveYearMDS.h"
#include "InitialDepositMDS.h"

int main()
{
    
    TwoYearMDS two;
    two.setaccountName("Johnson");
    two.setbalance(5555.55);
    two.setInterest(10);
    two.setmonthlyDeposit(500);
    two.setmaxinterest(15);
    two.Display();

    cout << endl;

    TwoYearMDS two2;
    two2.setaccountName("Johnson");
    two2.setbalance(5555.55);
    two2.setInterest(10);
    two2.setmonthlyDeposit(500);
    two2.setmaxinterest(15);
    two2.Display();

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
