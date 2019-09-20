#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    long long N, K;
    cin >> N >> K;

    if (N == 1) {
        cout << 1;
        return 0;
    }

    vector<long long> perms;
    for (int i = 0; i < N; i++) {
        perms.push_back(i + 1);
    }

    int count = 0;
    do {
        for (int i = 1; i < N; i++) {
            if (abs(perms[i - 1] - perms[i]) > K) {
                break;
            }
            if (i == N - 1) {
                ++count;
            }
        }
    } while (next_permutation(perms.begin(), perms.end()));

    cout << count;
    return 0;
}
