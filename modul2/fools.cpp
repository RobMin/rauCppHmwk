#include <iostream>
#include <vector>

using namespace std;

//kam sranov kam aranc sra arten cham haskanum :0
void mySort(vector<pair<int, int>> vec) {
    for (int i = 1; i < vec.size(); ++i) {
        for (int j = 1; j < vec.size() - i; ++j) {
            if (vec[j - 1].first > vec[j].second) {
                swap(vec[j - 1], vec[j]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vec;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        pair<int, int> mIpair = {a, b};
        vec.push_back(mIpair);
    }
    mySort(vec);
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i - 1].second < vec[i].first) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
