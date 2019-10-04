#include <iostream>

using namespace std;

int main() {
    int a, w;
    cin >> a >> w;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < a; ++j) {
            if (i < w || i >= a - w || j < w || j >= a - w) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
