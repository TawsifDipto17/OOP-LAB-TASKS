#include "FiveYearMDS.h"

float FiveYearMDS::getmaxinterest() {
	return maximuminterest;
}
void FiveYearMDS::setmaxinterest(float val) {
	maximuminterest = val;
}
void FiveYearMDS::Display() {
	cout << "Account Type : Five Year MDS" << endl;
	display();
	cout << "Maximum Interest: " << getmaxinterest() << endl;
}