#include <array>

class ExcerciseTwo {
private:
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

public:
    // ex. 1

    int valWhichElement(int);
    int& refWhichElement(int);
    int* whichElement(int);
    std::array<int, 5> getArray() const;
    void printArr(std::array<int, 5>);
    void displayExcerciseOne();

    // ex. 2

    

};