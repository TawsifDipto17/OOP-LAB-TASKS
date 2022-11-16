#pragma once
#include<iostream>
using namespace std;
class SavingsAccount
{
private:
	float savingsBalance;
	static float annualInterestRate;
	static int count;
	int num;
public:
	float calculateMonthlyInterest();
	static void modifyInterestRate(float val);
	void setBalance(float val);
	float getBalance();
	SavingsAccount(float x) {
		savingsBalance = x;
		count++;
		cout << "An Object is Created...Objects remaining: " << count << endl;
	}
	~SavingsAccount() {
		count--;
		cout << "An Object is destroyed...Objects remaining: " << count << endl;
	}
	static int getCount();

};

