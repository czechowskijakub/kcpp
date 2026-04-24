#include <iostream>

/*Napisać prosty program z jedną klasą.
Wszystko zawarte w jednym pliku: klasa oraz definicje funkcji. 
Definicje funkcji mogą być w klasie lub poza nią. Klasa oparta o przykład: KviCar.cc
- nazwać program: ZadClassExample.cc*/

class Dog {
private:
    int _age;
    std::string _name;
    std::string barks[3] = {"Woooof", "Wooof", "aaaWooooof"};

public:
    Dog(const std::string& name, const int& age) : _name(name), _age(age) {
        srand(time(NULL));
        std::cout << "Dog's been born." << "\n";
    }

    ~Dog() {
        std::cout << "Dog's been killed." << "\n";
    }

    int getAge() const {
        return _age;
    }

    std::string getName() const {
        return _name;
    }

    void setAge(const int& n) {
        _age = n;
    }

    void setName(const std::string& n) {
        _name = n;
    }

    void bark() {
        int random = rand() % 3;

        std::cout << barks[random] << "\n";
    }

};

int main() {
    Dog d{"Tonia", 11};

    d.bark();
    d.bark();


    return 0;
}