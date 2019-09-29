#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int odd = 0;
    int even = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            ++even;
        } else {
            ++odd;
        }
        n /= 10;
    }
    if (abs(odd - even) <= 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
