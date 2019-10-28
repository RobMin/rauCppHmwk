#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int astichan = 0;
    while (pow(10, astichan) <= n) {
        ++astichan;
    }

    if (n == 0) cout << 0;
    while (n != 0) {
        cout << n / (int)pow(10, astichan - 1) << " ";
        n -= n / (int)pow(10, astichan - 1) * (int)pow(10, astichan - 1);
        astichan -= 1;
    }
}
