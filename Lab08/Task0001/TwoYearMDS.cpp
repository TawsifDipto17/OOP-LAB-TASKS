#include "TwoYearMDS.h"

float TwoYearMDS::getmaxinterest() {
	return maximuminterest;
}
void TwoYearMDS::setmaxinterest(float val) {
	maximuminterest = val;
}
void TwoYearMDS::Display() {
	cout << "Account Type : Two Year MDS" << endl;
	display();
	cout << "Maximum Interest: " << getmaxinterest() << endl;
}