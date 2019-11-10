#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void asc_sort(vector<int>& veco) {
    for (int i = 0; i < veco.size(); ++i) {
        for (int j = 1; j < veco.size() - i; ++j) {
            if (veco[j - 1] > veco[j]) {
                swap(veco[j - 1], veco[j]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> veco;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        veco.emplace_back(a);
    }

    asc_sort(veco);

    for (int i = 0; i < n; i += 2) {
        cout << veco[i] << " ";
    }
    for (int i = (n % 2 == 0 ? n - 1 : n - 2); i >= 0; i -= 2) {
        cout << veco[i] << " ";
    }
}
