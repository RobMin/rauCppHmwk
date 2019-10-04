#include <iostream>

int main() {
    int m, n;
    std::cin >> m >> n;
    std::cout << m << "*" << n << "=";
    for (int i = 0; i < n - 1; ++i) {
        std::cout << m << "+";
    }
    std::cout << m << "=" << n * m;
    return 0;
}
