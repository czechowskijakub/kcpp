#include <iostream>

int potega(const int& num, const int& power) {
    if (num == 0 && power == 0) { return -1; } // return -1 because undefined
    if (num == 0) { return 0; }
    if (power == 0) { return 1; }

    int result{1};

    for (int i{0}; i < power; i++) {
        result *= num;
    }

    return result;
}

double potega(const double& num, const int& power) {
    if (num == 0.0 && power == 0) { return -1.0; } // return -1 because undefined
    if (num == 0.0) { return 0.0; }
    if (power == 0) { return 1.0; }

    double result{1.0};

    for (int i{0}; i < power; i++) {
        result *= num;
    }

    return result;
}

float potega(const float& num, const int& power) {
    if (num == 0.f && power == 0) { return -1.f; } // return -1 because undefined
    if (num == 0.f) { return 0.f; }
    if (power == 0) { return 1.f; }

    float result{1.f};

    for (int i{0}; i < power; i++) {
        result *= num;
    }

    return result;
}

int main() {
    
    std::cout << potega(3, 3) << "\n";
    std::cout << potega(1.1, 2) << "\n";
    std::cout << potega(1.2f, 2) << "\n";

    return 0;
}