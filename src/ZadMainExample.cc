#include <iostream>
#include <string>

extern "C" void fooC1() {
    printf("I love C\n");
}

extern "C" void fooC2() {
    printf("I love C pt2\n");
}

void foo1() {
    std::cout << "I love C++\n";
}

void foo2() {
    std::cout << "I love C++ pt2\n";
}

void foo3() {
    std::cout << "I love C++ pt3\n";
}

int main(int argc, char* argv[]) {

    if (argc < 2) {
        std::cout << "Arguments to input: f1 f2 f3 c1 c2\n";
        return 0;
    }

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];

        if (arg == "f1") foo1();
        else if (arg == "f2") foo2();
        else if (arg == "f3") foo3();
        else if (arg == "c1") fooC1();
        else if (arg == "c2") fooC2();
        else std::cout << "Unknown arg: " << arg << "\n";
    }

    return 0;
}