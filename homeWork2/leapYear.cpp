#include <iostream>

int main() {
    int year;
    std::cin >> year;
    if (year % 400 == 0) {
        std::cout << "Leap Year";
    } else if (year % 100 == 0) {
        std::cout << "Normal Year";
    } else if (year % 4 == 0) {
        std::cout << "Leap Year";
    } else {
        std::cout << "Normal Year";
    }
    return 0;
}
