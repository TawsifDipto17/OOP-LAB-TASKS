#pragma once
#include<string>
class Medicine
{
private:
	std::string name;
	std::string genericName;
	double discountPercent=5;
	double unitPrice=0;

public:
	void assignName(std::string iname, std::string igenericName);
	void assignPrice(double price);
	void setDiscountPercent(double percent);
	double getSellingPrice(int nos);
	void display();
	double getPrice();
	double getDiscountPercent();
	std::string getname();
	std::string getgenname();
};

