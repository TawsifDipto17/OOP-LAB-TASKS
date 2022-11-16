// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "exception.h"
#include "safearray.h"
using namespace std;

int main() {
	try {
		safearray<int> sa1;

		safearray<float> sa2;

		for (int j = 0; j < LIMIT; j++)
			sa1[j] = j * 10;

		for (int j = 0; j < LIMIT; j++)
			sa2[j] = j * 10.5;

		cout << "Safe Array with int values: " << endl;
		for (int j = 0; j < LIMIT; j++) {
			int temp = sa1[j];
			cout << "Element " << j << " is " << temp << endl;
		}

		cout << endl;

		cout << "Safe Array with float values: " << endl;
		for (int j = 0; j < LIMIT; j++) {
			float temp = sa2[j];
			cout << "Element " << j << " is " << temp << endl;
		}


		cout << sa1[101] << endl;
	}
	catch (Exception e) {
		cout << endl;
		
		e.display();
	}
	return 0;
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
