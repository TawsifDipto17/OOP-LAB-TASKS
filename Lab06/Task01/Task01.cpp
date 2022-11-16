// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Counter.h"

int main()
{
	Counter c1, c2, c3;
	c1.setIncrementStep(5);
	c2.setIncrementStep(10);
	c3.setIncrementStep(15);
	c1.increment();
	c2.increment();
	c3.increment();
	
	c1 = c2 + c3; //c1=25
	//c1 = 5 + c2; // c1= 15
	//c1 = c2 + 5; //c1= 15
	//c1 += c2;	   //c1=15
	//c1 = c2++;     //c1=11,c2=10
	//c1 = ++c2;		//c1=11,c2=11

	cout <<"C1 :" << c1.getCount() << endl;
	cout <<"C2 :"<< c2.getCount() << endl;
	cout <<"C3 :"<< c3.getCount() << endl;
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
