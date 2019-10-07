#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "N: " << n << "\n";
    int revN = 0, nCopy = n;
    while (nCopy > 0) {
        if (revN == 0 && nCopy % 10 == 0) {
            nCopy /= 10;
            continue;
        }
        revN *= 10;
        revN += nCopy % 10;
        nCopy /= 10;
    }
    cout << "Reversed: " << revN << "\n";
    cout << "Difference: " << abs(revN - n);
    return 0;
}
