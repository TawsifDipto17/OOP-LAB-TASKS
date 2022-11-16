#pragma once
#include<fstream>
#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
	string f_name;
	string m_init;
	string l_name;
	unsigned long emp_num=0;
public:
	void setfname(string val);
	void setmname(string val);
	void setlname(string val);
	void setid(unsigned long val);
	void display();
};

void operator<<(ofstream& oso, Employee emp) {
	int size=sizeof(emp);
	oso.open("EMPLOYEE.DAT", ios::app);
	if (!oso) {
		cout << "File not opened" << endl;
		return;
	}
	oso.write((char*)&emp, size);
	if (!oso) {
		cout << "Can't write to file " << endl;
		return;
	}
}

