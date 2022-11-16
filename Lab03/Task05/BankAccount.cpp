#include "BankAccount.h"
#include<iostream>
using namespace std;
void BankAccount::customerDetails() {
	customerName = "Tawsif Dipto";
	accountNum = 200041105;
}
void BankAccount::accountType() {
	accType = "Current";
}
void BankAccount::balance() {
	cout << Balance << endl;
}
void BankAccount::deposit() {
	double depositAmount = 2500.50;
	Balance += depositAmount;
	cout << "Final Balance: " << Balance << endl;
}
void BankAccount::withdraw() {
	double withdrawAmount = 2000.50;
	if (Balance < withdrawAmount)
		cout << "Insufficient Balance" << endl;
	else
		Balance -= withdrawAmount;
}
void BankAccount::display() {
	cout << "Accountholder Name: " << customerName << endl;
	cout << "Account No: " << accountNum << endl;
	cout << "Balance: " << Balance << endl;
}
string BankAccount::getName()
{
	return customerName;
}
double BankAccount::getAccountNo()
{
	return accountNum;
}
string BankAccount::getAccountType()
{
	return accType;
}
double BankAccount::getBalance()
{
	return Balance;
}