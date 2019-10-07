#include <iostream>

using namespace std;

bool isPalindrome(const int& n) {
    int nCop = n;
    int rev = 0;
    while (nCop > 0) {
        rev *= 10;
        rev += nCop % 10;
        nCop /= 10;
    }
    return rev == n;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if (isPalindrome(i)) {
            cout << i << " ";
        }
    }
}
