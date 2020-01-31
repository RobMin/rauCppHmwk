#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void desc_sort(vector<int>& veco) {
    for (int i = 0; i < veco.size(); ++i) {
        for (int j = 1; j < veco.size() - i; ++j) {
            if (veco[j - 1] < veco[j]) {
                swap(veco[j - 1], veco[j]);
            }
        }
    }
}

int main() {
    vector<int> veco;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        veco.emplace_back(a);
    }

    desc_sort(veco);

    cout << veco[0] * veco[veco.size() - 1];
}
