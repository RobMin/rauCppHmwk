#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> ch(n);

    for(int i = 0; i < n; ++i) {
        cin >> ch[i];
    }

    int max = ch[0];

    for(int i = 1; i < n; ++i) {
        if(ch[i] > max) {
            max = ch[i];
        }
    }

    int ans = 0;
    for(int i = 0; i < n; ++i) {
        ans += max - ch[i];
    }

    std::cout << ans;
}