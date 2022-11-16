#pragma once
#include<iostream>
#include<string>
using namespace std;

class StudentResult
{
private:
	static int passingMark;
	int subjectMark[6];
	bool fail;
public:
	void displayMarks();
	void setMarks(int m1, int m2, int m3, int m4, int m5, int m6 );
	void checkpassing();
};

