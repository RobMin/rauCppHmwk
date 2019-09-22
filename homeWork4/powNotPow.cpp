#include <iostream>

using namespace std;

double _pow(double n, int power) {
    if (power == 0) {
        return 1;
    }
    double nCopy = n;
    while(--power) {
        n *= nCopy;
    }
    return n;
}

int main() {
    double n;
    int pow;
    cin >> n >> pow;
    cout << _pow(n, pow);
    return 0;
}
