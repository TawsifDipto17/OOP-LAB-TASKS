#include "InitialDepositMDS.h"
float InitialDepositMDS::getmaxinterest() {
	return maximuminterest;
}
void InitialDepositMDS::setmaxinterest(float val) {
	maximuminterest = val;
}
float InitialDepositMDS::getiniDeposit() {
	return initialDepositAmount;
}
void InitialDepositMDS::setiniDeposit(float val) {
	initialDepositAmount = val;
}
void InitialDepositMDS::Display() {
	cout << "Account Type : Initial Deposit MDS" << endl;
	display();
	cout << "Maximum Interest: " << getmaxinterest() << endl;
	cout << "Initial Deposit Amount: " << getiniDeposit() << endl;
}