#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int multiply = 1;
    while (n > 0) {
        if (n % 10 != 0) {
            multiply *= n % 10;
        }
        n /= 10;
    }
    cout << multiply;
    return 0;
}
