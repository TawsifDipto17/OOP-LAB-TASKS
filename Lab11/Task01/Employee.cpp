#include "Employee.h"

void Employee::setfname(string val) {
	f_name = val;
}
void Employee::setmname(string val) {
	m_init = val;
}
void Employee::setlname(string val) {
	l_name = val;
}
void Employee::setid(unsigned long val) {
	emp_num = val;
}
void Employee::display() {
	cout << "Employee ID: " << emp_num << endl;
	cout << "First Name: " << f_name << endl;
	cout << "Middle Initial: " << m_init << endl;
	cout << "Last Name: " << l_name << endl;
	cout << endl;
}



