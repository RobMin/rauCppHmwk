#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dsc_sort(vector<int>& veco) {
    for (int i = 0; i < veco.size(); ++i) {
        for (int j = 1; j < veco.size() - i; ++j) {
            if (veco[j - 1] < veco[j]) {
                swap(veco[j - 1], veco[j]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> veco(n);
    for (int i = 0; i < n; ++i) {
        cin >> veco[i];
    }

    dsc_sort(veco);

    for (int i = 0; i < n; i += 2) {
        cout << veco[i];
    }
    cout << "\n";
    for (int i = 1; i < n; i += 2) {
        cout << veco[i];
    }
}
