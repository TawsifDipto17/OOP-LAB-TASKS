#pragma once
#include<iostream>
#include<string>
using namespace std;
class Exception
{
private:
	int x;
	
public:
	Exception(){}
	Exception(int val) {
		x = val;
	}
	void display() {
		cout << "The given index is: "<<x << endl;
		cout << "This index is out of bounds" << endl;
	}
};

