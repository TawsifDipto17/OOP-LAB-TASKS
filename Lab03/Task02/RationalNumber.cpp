#include "RationalNumber.h"
#include<iostream>
using namespace std;
void RationalNumber::assign(int numerator, int denominator)
{
	Numerator = numerator;
	if (denominator != 0)
	{
		Denominator = denominator;
	}
	else
		cout << "Invalid Input" << endl;
		
}
double RationalNumber::convert() {
	double val;

	val = (double)Numerator / (double)Denominator;
	return val;
	
}
void RationalNumber::invert() {
	int temp;
	if (Numerator != 0)
	{
		temp = Numerator;
		Numerator = Denominator;
		Denominator = temp;
	}
	else
		cout << "Cannot be inverted" << endl;
}
void RationalNumber::print() {
	cout << Numerator << "/" << Denominator << endl;
}
int RationalNumber::get_numerator() {
	return Numerator;
}
int RationalNumber::get_denominator() {
	return Denominator;
}