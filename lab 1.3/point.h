//////////////////////////////////////////////////////////////////////////////
// point.h 
// заголовний файл Ц визначенн€ класу
#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

class Point {
private:
    double x;
    double y;

public:
    // Constructor
    Point();
    Point(double x_val, double y_val);

    // Accessor methods
    double getX() const;
    double getY() const;

    // Mutator methods
    void setX(double x_val);
    void setY(double y_val);

    // Other methods
    void Init(double x_val, double y_val);
    void Read();
    void Display() const;
    double distanceTo(const Point& other) const;
    std::string toString() const;
};
#endif 
