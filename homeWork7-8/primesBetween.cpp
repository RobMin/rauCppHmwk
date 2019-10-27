#include <iostream>

using namespace std;

bool isPrime(const int n) {
    if (n == 1 || (n != 2 && n % 2 == 0)) return false;
    for (int i = 3; i * i < n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}
