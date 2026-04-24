#include "Shapes.h"

Square s{4};
Rectangle r{3, 4};
Circle c{5};

const double PI = 3.1415926535;

double pole(const double& a) {
    return a * a;
}

double pole(const double& a, const double& b) {
    return a * b;
}

// I had to add some other parameter, 
// because overloading works on different func signatures
double pole(const double& r, const char& c) {
    return PI * r * r;
}

int main() {
    std::cout << pole(s.a) << "\n";
    std::cout << pole(r.a, r.b) << "\n";
    std::cout << pole(c.r, 'c') << "\n";
    
    return 0;
}