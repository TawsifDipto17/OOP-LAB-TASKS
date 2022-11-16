#include "SavingsAccount.h"

int SavingsAccount::count = 0;
float SavingsAccount::annualInterestRate = 0;
float SavingsAccount::calculateMonthlyInterest() {
	float a;
	a = savingsBalance * (annualInterestRate / 12);
	return a;
}
void SavingsAccount::modifyInterestRate(float val) {
	annualInterestRate = val;
}
void SavingsAccount::setBalance(float val)
{
	savingsBalance = val;
}
float SavingsAccount::getBalance()
{
	return savingsBalance;
}
int SavingsAccount::getCount() {
	return count;
}
