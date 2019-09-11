#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int change;
    if (a > b) {
        change = a;
        a = b;
        b = change;
    }
    if (a > c) {
        change = a;
        a = c;
        c = change;
    }
    if (b > c) {
        change = c;
        c = b;
        b = change;
    }

    std::cout << a << " " << b << " " << c;
    return 0;
}
