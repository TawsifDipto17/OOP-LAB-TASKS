#include "Medicine.h"
#include<iostream>
#include <string>
using namespace std;

void Medicine::assignName(string iname ,string igenericName) {
	name = iname;
	genericName = igenericName;
}
void Medicine::assignPrice(double price) {
	if (price >= 0) unitPrice = price;
	else cout << "Invalid Price" << endl;
}
void Medicine::setDiscountPercent(double percent) {
	if (percent >= 0 && percent <= 45) discountPercent = percent;
	else cout << "Invalid percentage" << endl;
}
double Medicine::getSellingPrice(int nos) {
	double price;
	price = nos * unitPrice;
	return price - ((price * discountPercent) / 100);
}
void Medicine::display() {
	cout << name << " (" << genericName << ") " << "has a unit price BDT " << unitPrice << ". Current discout " << discountPercent << "%." << endl;
}
double Medicine::getPrice() {
	return unitPrice;
}
double Medicine::getDiscountPercent() {
	return discountPercent;
}
string Medicine::getname() {
	return name;
}
string Medicine::getgenname() {
	return genericName;
}
