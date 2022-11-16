#include "CurrentAccount.h"
const int CurrentAccount::serviceCharge = 100;
const int CurrentAccount::accountPrefix = 100;

int CurrentAccount::nextAccount = 0;


string CurrentAccount::nextAccountNo() {
	string a;
	a = to_string(accountPrefix) + to_string(nextAccount);
	return a;
}

void CurrentAccount::Display() {
	cout << "Account Type : Current Account" << endl;
	cout << "Account No: " << getaccountNo() << endl;
	cout << "Account Name: " << getaccountName() << endl;
	cout << "Account Balance: " << getbalance() << endl;
	cout << "Next Account No: " << nextAccountNo() << endl;
}