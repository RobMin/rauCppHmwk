#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int odd = 0;
    int even = 0;
    for (int i = 0; n; ++i, n /= 10) {
        if (i % 2 == 0) {
            even += n % 10;
        } else {
            odd += n % 10;
        }
    }
    if (odd == even) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}
