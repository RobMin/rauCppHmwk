#include <iostream>
#include <cmath>

using namespace std;

int getFor10n(int n) {
    return n * pow(10, n - 1);
}

int getAstichan(int n) {
    int astichan;
    for (astichan = 1;;++astichan) {
        if (n < getFor10n(astichan)) {
            --astichan;
            break;
        }
    }
    return astichan;
}

int main() {
    int n;
    cin >> n;

    cout << getAstichan(n);
}
//10 - 1
//100 - 20
//1000 - 300
//10000 - 4000
//100000 - 50000