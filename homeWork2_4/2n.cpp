#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(1, 1);

    for (int i = 0; i < n; ++i) {
        int mnac = 0;
        for (int j = 0; j < vec.size(); ++j) {
            int tiv = vec[j] * 2 + mnac;
            vec[j] = tiv % 10;
            mnac = tiv / 10;
            if (j == vec.size() - 1 && mnac != 0) {
                vec.push_back(0);
            }
        }
    }

    for (int i = vec.size() - 1; i >= 0; --i) {
        cout << vec[i];
    }
}
