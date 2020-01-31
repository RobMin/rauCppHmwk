#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<char, int> bucko;

    int _max = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        ++bucko[a];
        if (bucko[a] > bucko[_max]) {
            _max = a;
        } else if (bucko[a] == bucko[_max]) {
            _max = max(a, _max);
        }
    }

    cout << _max;
}