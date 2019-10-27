#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cin >> n;
    vector<int> myVec(n);

    for (int i = 0; i < n; ++i) {
        cin >> myVec[i];
    }

    int _max = 1, curr = 1;
    for (int i = 1; i < n; ++i) {
        if (myVec[i] > myVec[i - 1]) {
            ++curr;
        } else {
            if (curr > _max) {
                _max = curr;
            }
            curr = 1;
        }
    }

    if (curr > _max) {
        _max = curr;
    }

    cout << _max;
}
