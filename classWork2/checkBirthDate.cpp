#include <iostream>

int main() {
    int bDate;
    std::cin >> bDate;

    int thisYear = 2016;
    int age = thisYear - bDate;

    if (age >= 0 && age <= 120) {
        std::cout << age;
    } else {
        std::cout << "Incorrect Year";
    }

    return 0;
}
