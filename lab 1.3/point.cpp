//////////////////////////////////////////////////////////////////////////////
// point.cpp 
//                 פאיכ נואכ³חאצ³¿ – נואכ³חאצ³ÿ לועמה³ג ךכאסף
#include "point.h"
#include <string>

using namespace std;

// Constructor
Point::Point() : x(0.0), y(0.0) {}

Point::Point(double x_val, double y_val) : x(x_val), y(y_val) {}

// Accessor methods
double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

// Mutator methods
void Point::setX(double x_val) {
    x = x_val;
}

void Point::setY(double y_val) {
    y = y_val;
}

// Other methods
void Point::Init(double x_val, double y_val) {
    x = x_val;
    y = y_val;
}

void Point::Read() {
    std::cout << "Enter x coordinate: ";
    std::cin >> x;
    std::cout << "Enter y coordinate: ";
    std::cin >> y;
}

void Point::Display() const {
    std::cout << "(" << x << ", " << y << ")";
}

double Point::distanceTo(const Point& other) const {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}

std::string Point::toString() const {
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

