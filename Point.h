#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
	// Overloaded stream insertion oeprator
	friend std::ostream& operator<<(std::ostream&, Point&);
	// Overloaded stream extraction operator
	friend std::istream& operator>>(std::istream&, Point&);

private:
	double x;
	double y;
	double distance{ 0 };

public:
	Point(double xCor = 0, double yCor = 0); // set x and y
	double getX() { return x; };
	double getY() { return y; };
	double getDistance() { return distance; };
	// Overload the addition operator
	void operator+(const Point& P2);
	// Overload the eqality operator
	bool operator==(const Point& P2) const;

};


#endif
