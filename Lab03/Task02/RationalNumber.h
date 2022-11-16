#pragma once
class RationalNumber
{
private:
	int Numerator;
	int Denominator;
public:
	void assign(int numerator, int denominator);
	double convert();
	void invert();
	void print();
	int get_numerator();
	int get_denominator();
};

