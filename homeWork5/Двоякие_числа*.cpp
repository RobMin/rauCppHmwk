#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = n % 10, b = -1;
    for (n; n /= 10;) {
        cout << n << "\n";
        if (n % 10 != a) {
            if (b == -1) {
                b = n % 10;
            } else if (n % 10 != b) {
                cout << "Not dual";
                return 0;
            }
        }
     }
    cout << "Dual";
    return 0;
}
