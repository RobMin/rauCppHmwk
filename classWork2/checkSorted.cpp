#include <iostream>

int main() {    int direction;
    int a, b, c;
    std::cin >> a >> b >> c;

    if ((a >= b && b >= c) || (a <= b && b <= c)) {
        std::cout << "Sorted";
    } else {
        std::cout << "Unsorted";
    }

    return 0;
}
