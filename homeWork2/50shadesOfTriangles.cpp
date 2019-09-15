#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int max = std::max(std::max(a, b), c);
    int min = std::min(std::min(a, b), c);
    b = (a + b + c) - min - max;
    a = min;
    c = max;

    if (a + b <= c) {
        std::cout << "No Triangle";
    } else if (a * a + b * b == c * c) {
        std::cout << "Right Triangle";
    } else if (a * a + b * b > c * c) {
        std::cout << "Acute Triangle";
    } else {
        std::cout << "Obtuse Triangle";
    }

    return 0;
}
