#include <iostream>
#include <vector>

using namespace std;

int main() {
    int d;
    cin >> d;
    for (int i = 0; i < d; ++i) {
        vector<int> shits;
        for (int j = 0; j < 8; ++j) {
            int shit;
            cin >> shit;
            shits.push_back(shit);
        }
        vector<int> newShits;
        int last = shits[shits[7]];
        if (shits[7] > 0 && last > 0) cout << 0 << " ";
        for (int j = i - 1; j > 0; j--) {
            if (shits[j] < last) {
                newShits.push_back(j);
                last = shits[j];
            }
        }
        for (int j = newShits.size() - 1; j >= 0; --j) {
            cout << newShits[j]  << " ";
        }

        cout << shits[7] << "\n";
    }
}
