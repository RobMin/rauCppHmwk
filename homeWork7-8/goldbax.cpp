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
    int a;
    cin >> a;
    if (a <= 2 || a % 2 != 0) {
        cout << "Wrong input, go kill yourself !";
        return 0;
    }
    for (int i = 1; i < a - 1; ++i) {
        if (isPrime(i) && isPrime(a - i)) {
            cout << i << " " << a - i;
            return 0;
        }
    }
    cout << "Golbax was wrong !";
}