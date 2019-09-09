#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int s2 = a * b;
    int mnacort = ((s2 * 10) / 2) % 10;

    std::cout << s2 / 2 << "." << mnacort;

    return 0;
}
