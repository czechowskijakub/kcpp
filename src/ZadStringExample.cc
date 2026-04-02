#include "WorkExampleZero.h"
#include <iostream>
#include <string>

namespace utils {
    void unsignedClamp(int& a, int maxVal) {
        if (a > maxVal) {
            a = maxVal;
        } else if (a < 0) {
            a = 0;
        }
    }

    int maxLength(int& a, int& b) {
      if (a > b) {
        return a - b;
      }

      return b - a;
    }

    void inputName(std::string& name) {
      std::cin >> name;
    }
  }

void WorkExampleZero::excerciseTwo() {
  std::string name = "";
  std::string surname = "";
  
  if (name.empty()) {
    std::cout << "Input your name: ";
    std::cin >> name;
    std::cout << "Input your surname: ";
    std::cin >> surname;
  }

  auto length = name.size();
  std::cout << "Your name is " << length << " characters long.\n";
  int position = name.size()-2;
  std::cout << "Next to last char in the name is: " << name.at(position) << "\n";

  std::string nameCopy = name += " ";
  std::string fullName = nameCopy.append(surname);
  std::cout << "Name and surname: " << fullName << "\n";

  name.swap(surname);
  std::cout << "Name and surname swapped: name -} " << name << " surname -> " << surname << "\n";
  name.swap(surname);

  char decision;
  do {
    std::cout << "Menu:\n";
    std::cout << "See the name: 0\n";
    std::cout << "Clear the name: 1\n";
    std::cout << "Erase a char in the name: 2\n";
    std::cout << "See a substring existing at a certain position in the name: 3\n";
    std::cout << "Find a position of given substring in the name: 4\n";
    std::cout << "Rename: 5\n";
    std::cout << "Show initials: 6\n";
    std::cout << "Exit: x\n\n";
    std::cin >> decision;

    switch (decision) {
      case '0': {
        if (!name.empty()) {
          std::cout << name << "\n";
        } else {
          std::cout << "Name's been cleared\n";
        }
        break;
      }

      case '1': {
        name.clear();
        std::cout << "Name cleared!\n";
        break;
      }

      case '2': {
        if (!name.empty()) {
          int decision = 0;
          std::cout << "At what position do You want a character removed: ";
          std::cin >> decision;

          utils::unsignedClamp(--decision, name.size()-1);
          name.erase(decision, 1);

          std::cout << name << "\n";
        }

        break;
      }

      case '3': {
        if (!name.empty()) {
          int position;
          int length;
          std::cout << "Input the position You want to check: ";
          std::cin >> position;
          if (position < 1) { 
            std::cout << "Position starts from 1 to the length of the name\n";
            break; 
          }

          std::cout << "Input the length of the substr: ";
          std::cin >> length;

          utils::unsignedClamp(--position, name.size()-1);
          utils::unsignedClamp(length, name.size());
          length = utils::maxLength(position, length);

          std::cout << name.substr(position, length) << "\n";
        }
        
        break;
      }

      case '4': {
        if (!name.empty()) {
          std::string inSubStr;
          std::cout << "What substring would You like to find: ";
          std::cin >> inSubStr;

          size_t foundPos = name.find(inSubStr);

          if (foundPos != std::string::npos) {
            std::cout << "Found at position: " << ++foundPos << "\n";
          } else {
            std::cout << "Substring not found or too long.\n";
          }
        }

        break;
      }
      
      case '5': {
        utils::inputName(name);
        break;
      }

      case '6': {
        try {
            std::cout << "Your initials: " << name.at(0) << surname.at(0) << "\n";
        } catch (...) {
            std::cout << "Can't fetch initials.\n";
        }
        break;
    }

      default: {
        break;
      }
    }
  } while (decision != 'x');

}

