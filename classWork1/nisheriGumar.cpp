#include <iostream>

int main() {
    int num = 687;
    int sum = 0;
    std::cin >> num;
    std::cout << '\n';

    while (true) {
        sum += num % 10;
        if (num < 10) {
            break;
        }
        num /= 10;
    }

    std::cout << sum;
    return 0;
}
