#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a = std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    double b = std::sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    double c = std::sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
    double p = (a + b + c) / 2;
    std::cout << std::setprecision(3) << std::fixed << std::sqrt(p * (p - a) * (p - b) * (p - c));
    return 0;
}
