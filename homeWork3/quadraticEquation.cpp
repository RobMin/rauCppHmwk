#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;
    if (a == 0) {
        std::cout << "Non-quadratic equation\n";
        if (b == 0) {
            if (c == 0) {
                std::cout << "Infinite solutions\n";
            } else {
                std::cout << "No solutions\n";
            }
        } else {
            std::cout << "One solution: " << -c / b;
        }
    } else {
        std::cout << "Quadratic Equation\n";
        double d = (b * b) - (4 * a * c);
        std::cout << "Discriminant: " << d << "\n";

        if (d < 0) {
            std::cout << "No solutions\n";
        } else if (d == 0) {
            std::cout << "One solutions: " << -b / (2 * a) << "\n";
        } else {
            std::cout << "Two solutions: " << (-b + std::sqrt(d)) / (2 * a) << " " << (-b - std::sqrt(d)) / (2 * a) << "\n";
        }
    }
    return 0;
}
