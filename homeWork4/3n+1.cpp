#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        n % 2 == 1 ? n = n * 3 + 1 : n /= 2;
    }
    cout << n;
    return 0;
}
