#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

void asc_sort(vector<pair<int, int>>& veco) {
    for (int i = 0; i < veco.size(); ++i) {
        for (int j = 1; j < veco.size() - i; ++j) {
            if (veco[j - 1].second > veco[j].second) {
                swap(veco[j - 1], veco[j]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> veco;
    for (int i = 0; i < n; ++i) {
        int age;
        cin >> age;
        veco.emplace_back(i + 1, age);
    }

    asc_sort(veco);

    for (int i = 0; i < n; ++i) {
        cout << veco[i].first << " ";
    }
}
