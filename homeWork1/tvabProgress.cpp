#include <iostream>

int main() {
    int a1, a2, n;
    std::cin >> a1 >> a2 >> n;
    std::cout << a1 + (a2 - a1) * (n - 1);

    return 0;
}
