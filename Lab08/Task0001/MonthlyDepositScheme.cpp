#include "MonthlyDepositScheme.h"
const int MonthlyDepositScheme::accountPrefix = 300;
int MonthlyDepositScheme::nextAccount = 0;
float MonthlyDepositScheme::getInterest() {
	return interestRate;
}
void MonthlyDepositScheme::setInterest(float val) {
	interestRate = val;
}
float MonthlyDepositScheme::getmonthlyDeposit() {
	return monthlyDepositAmount;
}
void MonthlyDepositScheme::setmonthlyDeposit(float val) {
	monthlyDepositAmount = val;
}
string MonthlyDepositScheme::nextAccountNo() {
	string a;
	a = to_string(accountPrefix) + to_string(nextAccount);
	return a;
}

void MonthlyDepositScheme::display() {
	cout << "Account No: " << getaccountNo() << endl;
	cout << "Account Name: " << getaccountName() << endl;
	cout << "Account Balance: " << getbalance() << endl;
	cout << "Interest Rate: " << getInterest() << endl;
	cout << "Monthly Deposit Amount: " << getmonthlyDeposit() << endl;
	cout << "Next Account No: " << nextAccountNo() << endl;
}