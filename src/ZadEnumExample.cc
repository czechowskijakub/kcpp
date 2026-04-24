#include "ExcerciseOne.h"
#include <iostream>

enum class Months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

std::string whatSeason(Months month) {
    int monthNum = static_cast<int>(month);
    
    if (monthNum == 12 || monthNum == 1 || monthNum == 2) { return "Winter"; }
    else if (monthNum == 3 || monthNum == 4 || monthNum == 5) { return "Spring"; }
    else if (monthNum == 6 || monthNum == 7 || monthNum == 8) { return "Summer"; }
    else if (monthNum == 9 || monthNum == 10 || monthNum == 11) { return "Autumn"; }

    return "No such month";
}

Months& operator++(Months& month) {
    month = static_cast<Months>(static_cast<int>(month) + 1);

    return month;
}

void printMonths() {
    for (Months month = Months::January; month <= Months::December; ++month) {
        std::cout << "Month: " << static_cast<int>(month) <<  " season: " <<  whatSeason(month) << "\n";
    }
}

void ExcerciseOne::excerciseZero() {
    /*
    Napisać krótki program oparty na pliku LTypeEnumerated.cc, zawierający przykład użycia typu enum (scoped lub unscoped, z miesiącami)
    - nazwać program: ZadEnumExample.cc
    */
    printMonths();
}

int main() {
    ExcerciseOne::excerciseZero();
    
    return 0;
}