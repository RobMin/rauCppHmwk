#include <iostream>

using namespace std;

bool isNumKonChenIy(int n) {
    if (n % 4 == 0) {
        return true;
    }
    int sum = 0;
    while(n != 0) {
        sum += n % 10;
        n /= 10;
    }
    if (sum % 4 == 0) {
        return true;
    }
    return false;
}

int main() {
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i) {
        if (isNumKonChenIy(i)) {
            cout << "X";
        } else {
            cout << i;
        }
        cout << " ";
    }
}
