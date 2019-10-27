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

    bool asc = true, desc = true;
    for (int i = 0; i < n - 1 && (asc || desc); ++i) {
        if (myVec[i] > myVec[i + 1]) {
            asc = false;
        } else if (myVec[i] < myVec[i + 1]) {
            desc = false;
        } else {
            asc = false;
            desc = false;
        }
    }

    if (asc) {
        cout << "Ascending";
    } else if (desc){
        cout << "Descending";
    } else {
        cout << "Neither";
    }
}
