#pragma once
#include <string>
using namespace std;
class BankAccount
{
private:
	string customerName;
	int accountNum;
	string accType;
	double Balance=(double)0;
public:
	void customerDetails();
	void accountType();
	void balance();
	void deposit();
	void withdraw();
	void display();
	string getName();
	double getAccountNo();
	string getAccountType();
	double getBalance();
};

