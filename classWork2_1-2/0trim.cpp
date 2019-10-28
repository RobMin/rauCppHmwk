#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    vector<int> numo;

    bool claim = false;
    int lastNotZero =  0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;

        if (!claim && a != 0) {
            claim = true;
        }

        if (claim) {
            numo.push_back(a);
            if (a != 0) {
                lastNotZero = numo.size();
            }
        }
    }

    for (int i = 0; i < lastNotZero; ++i) {
        cout << numo[i] << " ";
    }
}
