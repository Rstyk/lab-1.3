//////////////////////////////////////////////////////////////////////////////
// main.cpp 
// головний файл проекту – функція main

#include <iostream>
#include "point.h"

int main() {
    // Creating objects using different methods
    Point p1; // Using default constructor
    Point p2(3.0, 4.0); // Using parameterized constructor

    // Initializing objects using Init() method
    p1.Init(1.0, 2.0);
    p2.Init(5.0, 6.0);

    // Input using Read() method
    Point p3;
    p3.Read();

    // Display using Display() method
    std::cout << "Coordinates of p1: ";
    p1.Display();
    std::cout << std::endl;

    std::cout << "Coordinates of p2: ";
    p2.Display();
    std::cout << std::endl;

    std::cout << "Coordinates of p3: ";
    p3.Display();
    std::cout << std::endl;

    // Distance between points
    std::cout << "Distance between p1 and p2: " << p1.distanceTo(p2) << std::endl;

    // Conversion to string
    std::cout << "p1 as string: " << p1.toString() << std::endl;

    return 0;
}
