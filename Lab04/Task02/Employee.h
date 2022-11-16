#pragma once
#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
	string EmpName;
	int ID;
	int Age;
	float salary;
	string getStatus() {
		string stat;
		if (Age <= 25 && salary <= 20000) {
			stat = "Low";
		}
		else if (Age <= 25 && salary > 20000) {
			stat = "Moderate";
		}
		else if (Age > 25 && salary <= 21000) {
			stat = "Low";
		}
		else if (Age > 25 && salary > 21000 && salary<=60000) {
			stat = "Moderate";
		}
		else if (Age > 25 && salary > 60000) {
			stat = "High";
		}
		return stat;
	}
public:
	void FeedInfo(string a, int id, int sal,int age);
	
	void ShowInfo();

};

