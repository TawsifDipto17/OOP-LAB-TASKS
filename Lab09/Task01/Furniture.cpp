#include "Furniture.h"
void Furniture::setType(string type) {
	Type = type;
}
string Furniture::getType() {
	return Type;
}
void Furniture::setPrice(int val) {
	RegularPrice = val;
}
int Furniture::getPrice() {
	return RegularPrice;
}
void Furniture::setdisc(float val) {
	Disc = val;
}
float Furniture::getDisc() {
	return Disc;
}
void Furniture::setMaterial(string mat) {
	Material = mat;
}
string Furniture::getMaterial() {
	return Material;
}
void Furniture::setProductName(string val) {
	ProductName = val;
}
string Furniture::getProductName() {
	return ProductName;
}