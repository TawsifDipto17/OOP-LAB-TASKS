#include "rational_number.h"
#include<iostream>
using namespace std;
void rational_number::assign(int numerator, int denominator)
{
	Numerator = numerator;
	if (denominator != 0)
	{
		Denominator = denominator;
	}
	else private_mem_error();
		

}
double rational_number::convert() {
	double val;

	val = (double)Numerator / (double)Denominator;
	return val;

}
void rational_number::invert() {
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
void rational_number::print() {
	cout << Numerator << "/" << Denominator << endl;
}
int rational_number::get_numerator() {
	return Numerator;
}
int rational_number::get_denominator() {
	return Denominator;
}
void rational_number::set_numerator(int val) {
	Numerator = val;
}
void rational_number::set_denominator(int val) {
	Denominator = val;
}

int rational_number::lcm(int num, rational_number num1) {
	int LCM = 0;
	int max = (num > num1.Denominator) ? num : num1.Denominator;
	do
	{
		if (max % num == 0 && max % num1.Denominator == 0)
		{
			LCM = max;
			break;
		}
		else
			++max;
	} while (true);
	return LCM;
}
rational_number rational_number::operator +(rational_number num) {
	rational_number temp;
	temp.Denominator = lcm(Denominator , num);
	temp.Numerator = (temp.Denominator / Denominator)*Numerator + (temp.Denominator / num.Denominator)*num.Numerator;
	return temp;
}
rational_number rational_number::operator -(rational_number num) {
	rational_number temp;
	temp.Denominator = lcm(Denominator, num);
	temp.Numerator = (temp.Denominator / Denominator) * Numerator - (temp.Denominator / num.Denominator) * num.Numerator;
	return temp;
}
rational_number rational_number::operator *(rational_number num) {
	rational_number temp;
	temp.Denominator = Denominator * num.Denominator;
	temp.Numerator = Numerator * num.Numerator;
	return temp;
}
rational_number rational_number::operator /(rational_number num) {
	rational_number temp;
	temp.Denominator = Denominator * num.Numerator;
	temp.Numerator = Numerator * num.Denominator;
	return temp;
}
void rational_number::private_mem_error() {
	cout << "The denominator cannot be zero!" << endl;
	set_numerator(0);
	set_denominator(0);
}
