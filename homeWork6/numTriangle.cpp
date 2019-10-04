#include <iostream>

using namespace std;

int nSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n;
        --n;
    }
    return sum;
}

int main() {
    int a;
    cin >> a;
    for (int i = 1; i < a + 1; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << nSum(i - 1) + j + 1;
        }
        cout << "\n";
    }
}
