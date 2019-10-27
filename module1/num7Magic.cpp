#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    while(a != 0) {
        if (a % 10 == 7) {
            cout << "YES";
            return 0;
        }
        a /= 10;
    }
    cout << "NO";
}
