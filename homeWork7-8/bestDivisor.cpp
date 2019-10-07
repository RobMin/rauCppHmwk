#include <iostream>

using namespace std;

int isSecondNumSumBigger(int a, int b) {
    int aSum = 0;
    int bSum = 0;
    while (a != 0 || b != 0) {
        aSum += a % 10;
        bSum += b % 10;
        a /= 10;
        b /= 10;
    }
    return aSum < bSum;
}

int main() {
    int a;
    cin >> a;
    int best = 1;
    for (int i = 1; i <= a; ++i) {
        if (a % i == 0) {
            if (isSecondNumSumBigger(best, i)) {
                best = i;
            }
        }
    }
    cout << best;
}
