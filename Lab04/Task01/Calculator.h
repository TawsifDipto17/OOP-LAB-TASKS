#pragma once
#include<iostream>
using namespace std;
#include <string>
class Calculator
{
private:
	int field;
public:
	Calculator() {
		field = 0;
	}

	Calculator(int val) {
		field = val;
	}
	int getValue();
	void setValue(int val);
	void add(int Value);
	void subtract(int Value);
	void multiply(int Value);
	void divideBy(int Value);
	void clear();
	string display();
	~Calculator() {
		std::cout << "Calculator object is destroyed" << std::endl;
	}
};

