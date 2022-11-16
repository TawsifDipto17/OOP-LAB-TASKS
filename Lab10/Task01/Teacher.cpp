#include "Teacher.h"
void Teacher::setID(int val) {
	Teacher_ID = val;
}
int Teacher::getID() {
	return Teacher_ID;
}
void Teacher::info() {
	cout << "Name of the Teacher is: " << getName() << endl;
	cout << "Age of the Teacher is: " << getAge() << endl;
	cout << "ID of the Teacher is: " << getID() << endl;
}