#include "Employee.h"
#include<iostream>
#include<ctime>
using namespace std;

const string Employee::getName() {
	return name;
}
void Employee::setName(string a) {
	if (a.length() > 2) {
		name = a;
	}
	else name = "John Doe";
}
const float Employee::getSalary() {
	return salary;
}
void Employee::setSalary(float a) {
	if (10000 <= a <= 100000) {
		salary = a;
	}
	else salary = 10000;
}
const DateofBirth Employee::getBirth() {
	return dob;
}
void Employee::setBirth(int a, string b, int c) {
	if (2022 - c > 18) {
		dob.day = a;
		dob.month = b;
		dob.year = c;
	}
	else {
		dob.day = 1;
		dob.month = "January";
		dob.year = 2002;
	}
}
void Employee::setInfo(string a, float b, int day, string mon, int year) {
	setName(a);
	setSalary(b);
	setBirth(day, mon, year);
}
int Employee::monthConv() {
	int mont;
	if (getBirth().month == "January") mont = 1;
	else if (getBirth().month == "February") mont = 2;
	else if (getBirth().month == "March") mont = 3;
	else if (getBirth().month == "April") mont = 4;
	else if (getBirth().month == "May") mont = 5;
	else if (getBirth().month == "June") mont = 6;
	else if (getBirth().month == "July") mont = 7;
	else if (getBirth().month == "August") mont = 8;
	else if (getBirth().month == "September") mont = 9;
	else if (getBirth().month == "October") mont = 10;
	else if (getBirth().month == "November") mont = 11;
	else if (getBirth().month == "December") mont = 12;
	return mont;
}

const void Employee::getInfo() {
	cout << "The Name of the employee is " << getName() << endl;
	cout << "The Salary of the employee is $" << getSalary() << endl;
	cout << "The Date of Birth of the employee is " << getBirth().day<<" "<<getBirth().month<<" "<<getBirth().year << endl;
}
void Employee::getAge() {
	struct tm newtime;
	time_t now = time(0);
	localtime_s(&newtime,&now);

	int month=monthConv();
	int year = newtime.tm_year + 1900;
	int mon = newtime.tm_mon + 1;
	int day = newtime.tm_mday;

	if (day - getBirth().day < 0) {
		day+=30;
		mon--;
	}
	else if (mon - month < 0) {
		mon += 12;
		year--;
	}
	

	cout << "The Employee age is " << year-getBirth().year << " Years " << mon-month << " Months " << day-getBirth().day << " Days" << endl;
}


