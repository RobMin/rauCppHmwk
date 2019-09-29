#include <iostream>

using namespace std;

int main() {
    double wh, w;
    cin >> wh >> w;
    for (int i = 0; i < wh; ++i) {
        for (int j = 0; j < wh; ++j) {
            if (i < wh / 2 - w / 2 || i >= wh / 2 + w / 2) {
                if (j >= wh / 2 - w / 2 && j < wh / 2 + w / 2) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            } else {
                cout << "*";
            }
        }
        cout << "\n";
    }
    return 0;
}
