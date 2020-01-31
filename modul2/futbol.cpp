#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int golCount = 0;
    while (a > 0) {
        ++golCount;
        a -= golCount;
    }
    cout << golCount;
}
