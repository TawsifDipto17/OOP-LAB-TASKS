#pragma once
class Coordinate
{
private:
	float abscissa;
	float ordinate;
public:
	Coordinate(float a, float b) {
		abscissa = a;
		ordinate = b;
	}
	Coordinate() {
		abscissa = 0;
		ordinate = 0;
	}
	~Coordinate() {
		/*cout << "An object has been destroyed" << endl;*/
	}
	void display();
	float getDistance(Coordinate c);
	float getDistance();
	void move_x(float val);
	void move_y(float val);
	void move(float val);
	bool operator > (Coordinate c);
	bool operator < (Coordinate c);
	bool operator >= (Coordinate c);
	bool operator <= (Coordinate c);
	bool operator == (Coordinate c);
	bool operator != (Coordinate c);
	Coordinate operator ++ ();
	Coordinate operator ++ (int);
	Coordinate operator -- ();
	Coordinate operator -- (int);
};

