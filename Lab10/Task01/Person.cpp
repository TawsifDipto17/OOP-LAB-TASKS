#include "Person.h"

void Person::setName(string NAME) {
	name = NAME;
}
void Person::setAge(int val) {
	age = val;
}
string Person::getName() {
	return name;
}
int Person::getAge() {
	return age;
}
void Person::info() {
	cout << "Name of the Person is: " << getName() << endl;
	cout << "Age of the Person is: " << getAge() << endl;
}
