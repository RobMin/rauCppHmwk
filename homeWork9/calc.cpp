#include <iostream>

using namespace std;

int main() {
    int a, b;
    char dollar;
    cin >> a >> dollar >> b;

    if (dollar == '*') {
        cout << a * b;
    } else if (dollar == '+') {
        cout << a + b;
    } else if (dollar == '-') {
        cout << a - b;
    }
}
