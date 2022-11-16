#include "Account.h"
string Account::getaccountNo() {
	return accountNo;
}
string Account::getaccountName() {
	return accountName;
}
float Account::getbalance() {
	return balance;
}
void Account::setaccountNo(string val) {
	accountNo = val;
}
void Account::setaccountName(string val) {
	accountName = val;
}
void Account::setbalance(float val) {
	balance = val;
}