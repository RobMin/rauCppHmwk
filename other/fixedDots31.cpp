#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    vector<int> perms;
    for (int i = 0; i < n; ++i) {
        perms.push_back(i + 1);
    }

    int count = 0;
    do {
        int fixeds = 0;
        for (int i = 0; i < n; ++i) {
            if (perms[i] == i + 1) {
                ++fixeds;
            }
            if (fixeds > k) {
                break;
            }
        }
        if (fixeds == k) {
            ++count;
        }
    } while (next_permutation(perms.begin(), perms.end()));

    cout << count;
    return 0;
}
