#include "Student.h"

void Student::setID(int val) {
	student_ID = val;
}
int Student::getID() {
	return student_ID;
}
void Student::info() {
	cout << "Name of the Student is: " << getName() << endl;
	cout << "Age of the Student is: " << getAge() << endl;
	cout << "ID of the Student is: " << getID() << endl;
}