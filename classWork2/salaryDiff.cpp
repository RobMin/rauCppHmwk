#include <iostream>
#include <limits>

int main() {
    int min = std::numeric_limits<int>::max(), max = std::numeric_limits<int>::min();
    for (int i = 0; i < 3; i++) {
        int num;
        std::cin >> num;
        if (num < min) { min = num; }
        if (num > max) { max = num; }
    }

    std::cout << max - min;
    return 0;
}
