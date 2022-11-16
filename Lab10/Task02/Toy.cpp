#include "Toy.h"

int Toy::batch = 0;

void Toy::info() {
	cout << "The ID of the toy is: " << ID << endl;
	cout << "The Price of the toy is: " << price << endl;
}