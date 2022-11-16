#include "ZooAnimal.h"
void ZooAnimal::setname(string a) {
	nameOfAnimal = a;
}
void ZooAnimal::setbirth(int a) {
	birthYear = a;
}
void ZooAnimal::setcage(int a) {
	cageNumber = a;
}
void ZooAnimal::setweight(float a) {
	weight = a;
}
void ZooAnimal::setheight(int a) {
	height = a;
}
string ZooAnimal::getname() {
	return nameOfAnimal;
}
int ZooAnimal::getbirth() {
	return birthYear;
}
int ZooAnimal::getcage() {
	return cageNumber;
}
float ZooAnimal::getweight() {
	return weight;
}
int ZooAnimal::getheight() {
	return height;
}
int ZooAnimal::getAge() {
	int a;
	a = 2022 - birthYear;
	return a;
}
void ZooAnimal::getInformation() {
	cout << "The name of the animmal is " << nameOfAnimal << endl;
	cout << "The birth year of the animal is " << birthYear << endl;
	cout << "The cage number of the animal is " << cageNumber << endl;
	cout << "The weight year of the animal is " << weight << endl;
	cout << "The height year of the animal is " << height << endl;
	cout << "The age of the animal is " << getAge() << endl;

}
bool ZooAnimal::operator == (float data) {
	if (weight == data) return true;
	else return false;
}
void ZooAnimal::operator -- (int val) {
	height -= val;
}