#pragma once
#include <iostream>
#include <string>
using namespace std;
class Account
{
private:
	string accountNo;
	string accountName;
	float balance=0;

public:
	string getaccountNo();
	string getaccountName();
	float getbalance();
	void setaccountNo(string val);
	void setaccountName(string val);
	void setbalance(float val);
};

