#pragma once
#include<string>
#include<iostream>
using namespace std;
class ZooAnimal
{
private:
	string nameOfAnimal;
	int birthYear;
	int cageNumber;
	float weight;
	int height;

public:
	ZooAnimal() {
		nameOfAnimal = "Smol Animol";
		birthYear = 2021;
		cageNumber = 1;
		weight = 0.05;
		height = 2;
	}
	void setname(string a);
	void setbirth(int a);
	void setcage(int a);
	void setweight(float a);
	void setheight(int a);
	string getname();
	int getbirth();
	int getcage();
	float getweight();
	int getheight();
	int getAge();
	void getInformation();



};

