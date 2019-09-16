#include <iostream>

int main() {
    int num;
    int sum = 0;
    std::cin >> num;
    std::cout << '\n';

    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    std::cout << sum;
    return 0;
}
