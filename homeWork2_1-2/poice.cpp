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

    int currPl = 0, allR = 0;
    for (int i = 0; i < n; ++i) {
        if (myVec[i] > 0) {
            if (currPl < 0) {
                allR -= currPl;
            }
            currPl = myVec[i];
        } else {
            currPl += myVec[i];
        }
    }

    if (currPl < 0) {
        allR -= currPl;
    }

    cout << allR;
}
