#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << "Yes";
        return 0;
    }

    vector<int> vec1(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec1[i];
    }

    vector<int> vec2(n);
    for (int i = 0; i < n; ++i) {
        cin >> vec2[i];
    }

    int first = vec1[0];
    for (int i = 0; i < n; ++i) {
        if (first == vec2[i]) {
            bool isIt = true;
            for (int j = 0; j < n; ++j) {
                int _j = (i + j) % n;
                if (vec1[j] != vec2[_j]) {
                    isIt = false;
                    break;
                }
            }
            if (isIt) {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";
}
