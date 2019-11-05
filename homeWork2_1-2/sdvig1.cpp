#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    x %= n;

    vector<int> myVec(n);
    for (int i = 0; i < n; ++i) {
        cin >> myVec[i];
    }

    for (int j = n - x; j < n + (n - x); ++j) {
        cout << myVec[j % n] << " ";
    }
}
