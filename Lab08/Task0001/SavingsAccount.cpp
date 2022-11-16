#include "SavingsAccount.h"
const int SavingsAccount::accountPrefix = 200;

int SavingsAccount::nextAccount = 0;

float SavingsAccount::getinterestRate() {
	return interestRate;
}
void SavingsAccount::setinterestRate(float val) {
	interestRate = val;
}
float SavingsAccount::getmonthlydeposit() {
	return monthlyDepositAmount;
}
void SavingsAccount::setmonthlydeposit(float deposit) {
	monthlyDepositAmount = deposit;
}
string SavingsAccount::nextAccountNo() {
	string a;
	a = to_string(accountPrefix) + to_string(nextAccount);
	return a;
}
void SavingsAccount::Display() {
	cout << "Account Type : Savings Account" << endl;
	cout << "Account No: " << getaccountNo() << endl;
	cout << "Account Name: " << getaccountName() << endl;
	cout << "Account Balance: " << getbalance() << endl;
	cout << "Interest Rate: " << getinterestRate() << endl;
	cout << "Monthly Deposit Amount: " << getmonthlydeposit() << endl;
	cout << "Next Account No: " << nextAccountNo() << endl;
}