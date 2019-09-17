#include <iostream>

int main() {
    double a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;
    double t;
    if (a1 > b1) { t = a1; a1 = b1; b1 = t; }
    if (a2 > b2) { t = a2; a2 = b2; b2 = t; }
    if (b1 > b2) { t = b1; b1 = b2; b2 = t; t = a1; a1 = a2; a2 = t; }

    double len1 = b1 - a1, len2 = b2 - a2;
    // a1 < b1, a2 < b2, b1 < b2;
    if (len1 == 0 || len2 == 0 || b1 <= a2) {
        std::cout << 0;
    } else if (a2 <= a1) {
        std::cout << len1;
    } else {
        std::cout << b1 - a2;
    }
    std::cout << a1 << b1 << a2 << b2;
}
