#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <iomanip>

using namespace std;

void desc_sort(vector<pair<double, string>>& veco) {
    for (int i = 0; i < veco.size(); ++i) {
        for (int j = 1; j < veco.size() - i; ++j) {
            if (veco[j - 1].first < veco[j].first) {
                swap(veco[j - 1], veco[j]);
            }
        }
    }
}

int main() {
    vector<pair<double, string>> veco;
    for (int a = 0; a < 2; ++a) {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            double points;
            string name;
            cin >> points >> name;
            veco.emplace_back(points, name);
        }
    }

    desc_sort(veco);

    cout << veco.size() << '\n';
    for (int i = 0; i < veco.size(); ++i) {
        cout << fixed << setprecision(2) << veco[i].first << " " << veco[i].second << '\n';
    }
}
