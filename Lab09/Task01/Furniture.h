#pragma once
#include<iostream>
#include <string>
using namespace std;
class Furniture
{
private:
	string Type;
	int RegularPrice;
	float Disc;
	string Material;
	string ProductName;

public:
	void setProductName(string val);
	string getProductName();
	void setType(string type);
	string getType();
	void setPrice(int val);
	int getPrice();
	void setdisc(float val);
	float getDisc();
	void setMaterial(string mat);
	string getMaterial();

	Furniture(string typ, int price, float disc, string mat) : Type(typ), RegularPrice(price), Disc(disc), Material(mat)
	{
	};
	virtual void productDetails()=0;
};

