#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 1;
    while (num * 3 < n) {
        num *= 3;
    }
    cout << num;
    return 0;
}
