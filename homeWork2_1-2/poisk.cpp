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

    int x;
    cin >> x;
    bool ch = true;
    for (int i = n - 1; i >= 0; --i) {
        if (myVec[i] == x){
            cout << i + 1 << " ";
            ch = false;
        }
    }

    if (ch) {
        cout << -1;
    }
}