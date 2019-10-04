#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    int i = 2;
    bool isFirst = true;
    while (a != 1) {
        if (a % i == 0) {
            if (!isFirst) {
                cout << "*";
            }
            cout << i;
            isFirst = false;
            a /= i;
        } else {
            ++i;
        }
    }
}
