#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    while (n > 0) {
        if (n % 10 == 8) {
            sum += 1000;
        }
        n /= 10;
    }
    cout << sum;
    return 0;
}
