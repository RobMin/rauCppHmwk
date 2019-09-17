#include <iostream>
#include <cmath>

int main() {
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    double x = x1 - x2, y = y1 - y2;
    std::cout << std::sqrt(x * x + y * y);
}
