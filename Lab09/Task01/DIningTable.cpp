#include "DIningTable.h"

void DIningTable::setdtsize(Chairc val) {
     ChairCount= val;
}
int DIningTable::getdtsize() {
    return ChairCount;
}
void DIningTable::productDetails() {
    int discount = (getDisc() * getPrice()) / 100;
    cout << "Product Name: " << getType() << endl;
    cout << "Regular Price: " << getPrice() << endl;
    cout << "Discounted Price: " << getPrice() - discount << endl;
    cout << "Material: " << getMaterial() << endl;
    string sz;
    if (ChairCount == 0) sz = "Two";
    if (ChairCount == 1) sz = "Four";
    if (ChairCount == 2) sz = "Six";
    cout << "Dining Table Size: " << sz << endl;
}
