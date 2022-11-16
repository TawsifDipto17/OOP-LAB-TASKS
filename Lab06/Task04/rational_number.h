#pragma once
class rational_number
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
	void set_numerator(int val);
	void set_denominator(int val);
	int lcm(int num, rational_number num1);
	rational_number operator +(rational_number num);
	rational_number operator -(rational_number num);
	rational_number operator *(rational_number num);
	rational_number operator /(rational_number num);
	void private_mem_error();

};

