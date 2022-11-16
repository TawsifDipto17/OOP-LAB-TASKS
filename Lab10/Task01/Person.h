#pragma once
#include <iostream>
#include<string>
using namespace std;
class Person
{
private:
	string name;
	int age;
public:
	void setName(string NAME);
	void setAge(int val);
	string getName();
	int getAge();
	virtual  void setID(int val) = 0;
	virtual int getID() = 0;
	virtual void info();
};

