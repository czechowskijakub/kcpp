#include "ExcerciseTwo.h"
#include <iostream>

int ExcerciseTwo::valWhichElement(int val) {
    for (auto it = arr.begin(); it != arr.end(); it++) {
        if (val == *it) {
            return *it;
        }
    }

    return arr[0]; 
}

int& ExcerciseTwo::refWhichElement(int val) {
    for (auto it = arr.begin(); it != arr.end(); it++) {
        if (val == *it) {
            return *it;
        }
    }

    return arr[0]; 
}

int* ExcerciseTwo::whichElement(int a) {
    for (auto it = arr.begin(); it != arr.end(); it++) {
        if (a == *it) {
            return it;
        }
    }

    return nullptr;
}

std::array<int, 5> ExcerciseTwo::getArray() const {
    return arr;
}

void ExcerciseTwo::printArr(std::array<int, 5> arr) {
    for (auto& item : arr) {
        std::cout << item << " ";
    }
    std::cout << "\n";
}

void ExcerciseTwo::displayExcerciseOne() {
    ExcerciseTwo e;
    int currentVal = 5;

    std::cout << "Address of the last element: " << &e.arr[4] << "\n";
    int* existing = e.whichElement(currentVal);
    int& currentRefVal = e.refWhichElement(currentVal);
    int copied = e.valWhichElement(currentVal);
    
    std::cout << "Pointer variable: " << existing << "\n"
            << "Reference variable: " << &currentRefVal  << "\n"
            << "Copied variable: " << &copied << "\n";

    e.printArr(e.getArray());
}

int main() {
    ExcerciseTwo e;
    e.displayExcerciseOne();
    
    return 0;
}