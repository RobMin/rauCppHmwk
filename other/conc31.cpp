#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int m, n, chair, x, y;
    cin >> m >> n >> chair >> x >> y;
    vector<int> shits;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            int I;
            cin >> I;
            if (I != 0) {
                shits.push_back(abs(x - (i + 1)) + abs(y - (j + 1)) + I);
            }
        }
    }
    sort(shits.begin(), shits.end());

    int uniques = 0;
    int lastEl = -1;
    for (int i = 0; i < shits.size(); i++) {
        if (shits[i] != lastEl) {
            uniques++;
            lastEl = shits[i];
        }
    }
    cout << uniques << "\n";

    lastEl = -1;
    for (int i = 0; i < shits.size(); i++) {
        if (shits[i] != lastEl) {
            cout << shits[i] << " ";
            lastEl = shits[i];
            int count = 1;
            for (int j = i + 1; j < shits.size(); j++) {
                if (shits[j] == shits[i]) {
                    count++;
                }
            }
            cout << count << "\n";
        }
    }
}
