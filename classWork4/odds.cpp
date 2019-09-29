#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while (i < n) {
        cout << i << " ";
        if ((i + 1) % 20 == 0) {
            cout << "\n";
        }
        i += 2;
    }
    return 0;
}
