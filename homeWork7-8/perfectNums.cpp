#include <iostream>

using namespace std;

bool isPerfect(const int& n) {
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = a; i <= b; ++i) {
        if (isPerfect(i)) {
            ++sum;
        }
    }
    cout << sum;
}