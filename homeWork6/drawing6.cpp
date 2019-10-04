#include <iostream>

using namespace std;

int main() {
    int num = 9;
    for (int i = 0; i < num; ++i) {
        for (int j = 0; j < num; ++j) {
            if ((i < num / 3 || i >= (num / 3 * 2)) && (j >= num / 3 && j < (num / 3) * 2)) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << "\n";
    }
}
