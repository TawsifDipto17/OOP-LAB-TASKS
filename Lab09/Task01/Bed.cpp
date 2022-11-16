#include "Bed.h"

void Bed::setbedsize(BEDSZ val) {
	BedSize = val;
}
int Bed::getbedsize() {
	return BedSize;
}
void Bed::productDetails() {
    int discount = (getDisc() * getPrice()) / 100;
    cout << "Product Name: " << getType() << endl;
    cout << "Regular Price: " << getPrice() << endl;
    cout << "Discounted Price: " << getPrice() - discount << endl;
    cout << "Material: " << getMaterial() << endl;
    string sz;
    if (BedSize == 0) sz = "Single";
    if (BedSize == 1) sz = "SemiDouble";
    if (BedSize == 2) sz = "Double";
    cout << "Bed Size: " << sz << endl;
}