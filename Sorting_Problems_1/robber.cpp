#include <iostream>
#include <vector>
#include <utility>

using namespace std;

void desc_sort(vector<double>& veco) {
    for (int i = 0; i < veco.size(); ++i) {
        for (int j = 1; j < veco.size() - i; ++j) {
            if (veco[j - 1] < veco[j]) {
                swap(veco[j - 1], veco[j]);
            }
        }
    }
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<double> veco;
    for (int i = 0; i < n; ++i) {
        double a;
        cin >> a;
        veco.emplace_back(a);
    }

    desc_sort(veco);

    double sum = 0;
    for (int i = 0; i < q; ++i) {
        sum += veco[i];
    }
    cout << sum;
}
