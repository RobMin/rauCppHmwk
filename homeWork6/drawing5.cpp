#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < a / 2 + a % 2; ++i) {
        for (int j = 0; j < a; ++j) {
            if (a % 2 == 0) {
                if (j == a / 2 - i - 1 || j == a / 2 + i || i == a / 2 + a % 2 - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else {
                if (j == a / 2 - i || j == a / 2 + i || i == a / 2 + a % 2 - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << "\n";
    }
}
