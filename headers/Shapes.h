#include <iostream>

// Shape classes for ex. [ 2.2 ]
class Square {
public:
    Square(double a) : a(a) {};
    double a;

};

class Rectangle {
public:
    Rectangle(double a, double b) : a(a), b(b) {};
    double a, b;
};

class Circle {
public:
    Circle(double r) : r(r) {};
    double r;
};

// Class Point for ex. [ 2.4 ]
class Point {
public:
    Point(double x, double y) : x(x), y(y) {};
    double x, y;
    
};