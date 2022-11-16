#pragma once
class Time
{
private:
	int hour,minute,second;
public:
	int hours();
	int minutes();
	int seconds();
	void reset(int h, int m, int s);
	void advance(int h, int m, int s);
	void print();

};

