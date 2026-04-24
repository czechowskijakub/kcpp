#include "Shapes.h"

// Point declaration in Shapes.h
Point operator+(const Point& a, const Point& b) {
    return Point(a.x + b.x, a.y + b.y);
}

int main() {
    Point p1{6, 7}, p2{42, 0};
    std::cout << "Before addition: " << "\n";
    std::cout << "p1: " << p1.x << ", " << p1.y << "\n";
    std::cout << "p2: " << p2.x << ", " << p2.y << "\n";
    p1 = p1 + p2;

    std::cout << "Coords for p1 after [p1 = p1 + p2]: " << p1.x << ", " << p1.y << "\n";
    return 0;
}