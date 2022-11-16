#include "Time.h"
#include<iostream>
using namespace std;
int Time::hours() {
	return hour;
}
int Time::minutes() {
	return minute;
}
int Time::seconds() {
	return second;
}
void Time::reset(int h, int m, int s) {
	hour = h;
	minute = m;
	second = s;
}
void Time::advance(int h, int m, int s) {
	
	if (second + s >= 60) minute++;
	second = (second + s) % 60;
	if (minute + m >= 60) hour++;
	minute = (minute + m) % 60;
	hour = (hour + h) % 24;
}
void Time::print() {
	cout << "HOUR: " << hour << " MIN: " << minute << " SEC: " << second << endl;
}