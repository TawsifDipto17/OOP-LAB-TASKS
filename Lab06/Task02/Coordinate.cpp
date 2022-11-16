#include "Coordinate.h"
#include <math.h>

void Coordinate::display() {

}
float Coordinate::getDistance(Coordinate c) {
	float dist = sqrt((abscissa-c.abscissa) * (abscissa - c.abscissa) - ordinate-(c.ordinate * c.ordinate));
	return dist;
}
float Coordinate::getDistance() {
	float dist = sqrt(abscissa * abscissa + ordinate * ordinate);
	return dist;
}
void Coordinate::move_x(float val) {
	abscissa += val;
}
void Coordinate::move_y(float val) {
	ordinate += val;
}
void Coordinate::move(float val) {
	move_x(val);
	move_y(val);
}

bool Coordinate::operator > (Coordinate c) {
	return getDistance() > c.getDistance();
}
bool Coordinate::operator < (Coordinate c) {
	return getDistance() < c.getDistance();
}
bool Coordinate::operator >= (Coordinate c) {
	return getDistance() >= c.getDistance();
}
bool Coordinate::operator <= (Coordinate c) {
	return getDistance() <= c.getDistance();
}
bool Coordinate::operator == (Coordinate c) {
	return getDistance() == c.getDistance();
}
bool Coordinate::operator != (Coordinate c) {
	return getDistance() != c.getDistance();
}

Coordinate Coordinate::operator ++ () {
	Coordinate temp;
	temp.abscissa = abscissa;
	temp.ordinate = ordinate;
	temp.move_x(1);
	temp.move_y(1);
	return temp;
}
Coordinate Coordinate::operator ++ (int) {
	Coordinate temp;
	move_x(1);
	move_y(1);
	temp.abscissa = abscissa;
	temp.ordinate = ordinate;
	return temp;
}
Coordinate Coordinate::operator -- () {
	Coordinate temp;
	temp.abscissa = abscissa;
	temp.ordinate = ordinate;
	temp.move_x(-1);
	temp.move_y(-1);
	return temp;
}
Coordinate Coordinate::operator -- (int) {
	Coordinate temp;
	move_x(-1);
	move_y(-1);
	temp.abscissa = abscissa;
	temp.ordinate = ordinate;
	return temp;
}
