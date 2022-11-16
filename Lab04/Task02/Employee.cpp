#include "Employee.h"

void Employee::FeedInfo(string a, int id, int sal,int age) {

	EmpName = a;
	ID = id;
	salary = sal;
	Age = age;
}

void Employee::ShowInfo() {
	cout << "Employee Name is " << EmpName << endl;
	cout << "Employee ID is " << ID << endl;
	cout << "Employee Age is " << Age << endl;
	cout << "Employee Salary is " << salary << endl;
	cout << "Employee salary status is " << getStatus() << endl;
}
