#include "LoanAccount.h"
const int LoanAccount::accountPrefix = 900;
int LoanAccount::nextAccount = 0;
float LoanAccount::getInterest() {
	return interestRate;
}
void LoanAccount::setInterest(float val) {
	interestRate = val;
}
float LoanAccount::getDeposit() {
	return monthlyDepositAmount;
}
void LoanAccount::setDeposit(float val) {
	monthlyDepositAmount = val;
}
string LoanAccount::nextAccountNo() {
	string a;
	a = to_string(accountPrefix) + to_string(nextAccount);
	return a;
}
void LoanAccount::Display() {
	cout << "Account Type : Loan Account" << endl;
	cout << "Account No: " << getaccountNo() << endl;
	cout << "Account Name: " << getaccountName() << endl;
	cout << "Account Balance: " << getbalance() << endl;
	cout << "Interest Rate: " << getInterest() << endl;
	cout << "Monthly Deposit Amount: " << getDeposit() << endl;
	cout << "Next Account No: " << nextAccountNo() << endl;
}