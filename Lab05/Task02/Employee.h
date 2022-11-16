#pragma once
using namespace std;
#include<string>
#include<time.h>

struct DateofBirth
{
	int day;
	string month;
	int year;
};
class Employee
{
private:
	string name="John Doe";
	float salary=10000;
	DateofBirth dob;

public:
	const string getName();
	void setName(string a);
	const float getSalary();
	void setSalary(float a);
	const DateofBirth getBirth();
	void setBirth(int a,string b,int c);
	void setInfo(string a,float b,int day,string mon,int year);
	int monthConv();
	const void getInfo();
	void getAge();
};

