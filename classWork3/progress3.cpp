#include <iostream>

int main() {
    double a1, a2;
    int n;
    std::cin >> a1 >> a2 >> n;
    std::cout << "a[" << n << "] = " << a1 + ((a2 - a1) * (n - 1));
}
