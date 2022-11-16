#pragma once
class Counter
{
private:
	int count = 0;
	int step_count = 1;
	friend Counter operator + (int var, const Counter c);
public:
	void setIncrementStep(int step_val);
	int getCount();
	void increment();
	void resetCount();
	Counter operator + (const Counter c) const;
	Counter operator + (int var);
	void operator += (const Counter c) ;
	Counter operator ++ () ;
	Counter operator ++(int);
};


