#include <iostream>
#include <string>

int dodaj(const int& a, const int& b) {
    return a + b;
}

double dodaj(const double& a, const double& b) {
    return a + b;
}

std::string dodaj(const std::string& a, const std::string& b) {
    return a + b;
}

int main() {
    std::cout << dodaj(1, 2) << "\n";
    std::cout << dodaj(1.0, 2.0) << "\n";
    std::cout << dodaj("1", "2") << "\n";

    return 0;
}