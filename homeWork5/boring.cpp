#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int last = n % 10;
    while (n) {
        if (n % 10 != last) {
            cout << "Interesting";
            return 0;
        }
        n /= 10;
    }
    cout << "Boring";
    return 0;
}
