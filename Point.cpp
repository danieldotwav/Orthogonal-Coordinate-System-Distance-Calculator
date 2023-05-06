#include "Point.h"
#include <iomanip>
#include <cmath>

Point::Point(double xCor, double yCor) {
    x = xCor;
    y = yCor;
}

std::ostream& operator<<(std::ostream& output, Point& coordinate) {
    output << "(";
    output << coordinate.x;
    output << ", ";
    output << coordinate.y;
    output << ")" << std::endl;

    return output;
}

std::istream& operator>>(std::istream& input, Point& coordinate) {
    char ch{ ' ' }; // used to ignore input

    input >> ch; // ignore (
    input >> coordinate.x;
    input >> ch; // ignore ,
    input >> coordinate.y;
    input >> ch; // ignore )

    input.clear();
    input.ignore(100, '\n'); // asks input to discard 100 characters from the input stream

    return input;
}

// Overload the addition operator
void Point::operator+(const Point& P2) {
    distance = sqrt(pow((x - P2.x), 2) + pow((y - P2.y), 2));
}

// Overload the eqality operator
bool Point::operator==(const Point& P2) const {

    if (x == P2.x && y == P2.y) {
        return true;
    }
    else {
        return false;
    }

}