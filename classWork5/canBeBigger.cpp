#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool useLessBool = false;
    while (n >= 10) {
        int a = n % 10;
        n /= 10;
        int b = n % 10;

        // chxpes
        if (b < a) {
            useLessBool = true;
        }
        if (useLessBool) {
            break;
        }
    }
    if (useLessBool) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
