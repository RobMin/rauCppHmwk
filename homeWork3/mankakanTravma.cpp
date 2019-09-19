#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double a, r;
    std::cin >> a >> r;
    double circle = M_PI * r * r;
    double a2 = a / 2;
    if (r <= a2) {
        std::cout << std::setprecision(3) << std::fixed << circle;
    } else if (r >= std::sqrt(a2 * a2 + a2 * a2)) {
        std::cout << std::setprecision(3) << std::fixed << a * a;
    } else {
        double qAngle = acos(a2 / r) * (180 / M_PI) * 2;
        double qSectorArea = M_PI * r * r * (qAngle / 360);
        double qTriangleArea = std::sqrt((r * r) - a2 * a2) * a2;
        std::cout << std::setprecision(3) << std::fixed << circle - 4 * (qSectorArea - qTriangleArea);
    }
    return 0;
}
