#include <iostream>

int main() {
    int r1, r2, r3;
    std::cin >> r1 >> r2 >> r3;
    if (r2 + r3 <= r1) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }
    return 0;
}
