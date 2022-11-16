#pragma once
#include <iostream>
#include <string>
using namespace std;

class Toy
{
private:
	int ID=0;
	float price=0;
	static int batch;
	/*Toy(const Toy& toy);
	Toy* operator =(const Toy& toy);*/
	
public:
	Toy(int val,  float x) :ID(val), price(x)
	{
		batch+=1000;
		ID = batch+ID;
	}

	Toy():ID(0),price(0) {

	}

	Toy(const Toy& toy) {
		price = toy.price;
		ID =  (toy.ID - batch);
		batch += 1000;
		ID += batch;
	}

	Toy* operator =(const Toy& toy) {
		price = toy.price;
		ID = (toy.ID - batch);
		batch += 1000;
		ID += batch;
		return this;
	}

	void info();
};

