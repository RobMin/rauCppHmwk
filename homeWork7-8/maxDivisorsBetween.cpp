#include <iostream>

using namespace std;

int divisors(const int n) {
    int divisors = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            ++divisors;
        }
    }
    return divisors;
}

int main() {
    int a, b;
    cin >> a >> b;
    int _max = 0;
    for (int i = a; i <= b; ++i) {
        if (divisors(i) > divisors(_max)) {
            _max = i;
        }
    }
    cout << _max;
}
