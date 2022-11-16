#include "Counter.h"


void Counter::setIncrementStep(int step_val)
{
	step_count = step_val;
}
int Counter::getCount() {
	return count;
}
void Counter::increment() {
	count += step_count;
}
void Counter::resetCount() {
	count = 0;
}

Counter Counter::operator + (const Counter c) const {
	Counter temp;
	temp.count = count + c.count;
	if (step_count > c.step_count) temp.step_count = c.step_count;
	else temp.step_count = step_count;
	return temp;
}
Counter operator + (int var,const Counter c) {
	Counter temp;
	temp.count = c.count + var;
	temp.step_count = c.step_count;
	return temp;
}
void Counter::operator += (const Counter c)  {
	count += c.count;
}
Counter Counter::operator ++ () {
	Counter temp;
	count++;
	temp.count = count;
	temp.step_count = step_count;
	return temp;
}
Counter Counter::operator ++(int) {
	Counter temp;
	temp.count = count + 1;
	temp.step_count = step_count;
	return temp;
}
Counter Counter::operator + (int var) {
	Counter temp;
	temp.count = count + var;
	temp.step_count = step_count;
	return temp;
}


