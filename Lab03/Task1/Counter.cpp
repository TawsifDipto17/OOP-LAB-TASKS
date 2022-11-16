#include "Counter.h"

int Counter::getStep() {
	return step_count;
}
void Counter::setIncrementStep(int step_val)
{
	step_count = step_val;
}
int Counter::getCount() {
	return count;
}
void Counter::increment() {
	count+=step_count;
}
void Counter::resetCount() {
	count = 0;
}
