#include "Sofa.h"

void Sofa::setsofasize(SeatNum val) {
    SeatNumber = val;
}
int Sofa::getsofasize() {
    return SeatNumber;
}
void Sofa::productDetails() {
    int discount = (getDisc() * getPrice()) / 100;
    cout << "Product Name: " << getType() << endl;
    cout << "Regular Price: " << getPrice() << endl;
    cout << "Discounted Price: " << getPrice() - discount << endl;
    cout << "Material: " << getMaterial() << endl;
    string sz;
    if (SeatNumber == 0) sz = "One";
    if (SeatNumber == 1) sz = "Two";
    if (SeatNumber == 2) sz = "Three";
    if (SeatNumber == 3) sz = "Four";
    if (SeatNumber == 4) sz = "Five";
    cout << "Sofa Size: " << sz << endl;
}
