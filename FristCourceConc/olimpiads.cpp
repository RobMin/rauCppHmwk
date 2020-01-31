#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int myusy(string s, int i) {
    return s.length() - i - 1;
}

void change(string& s, int i, char by) {
    s = s.substr(0, i) + by + s.substr(i + 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    vector<int> t(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    bool kaT = false;
    bool kaP = false;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (t[i] > p[i]) {
            sum += t[i];
            kaT = true;
        } else if (t[i] < p[i]) {
            sum += p[i];
            kaP = true;
        } else {
            if (!kaT) {
                sum += t[i];
                kaT = true;
            } else {
                sum += p[i];
                kaP = true;
            }
        }
    }

    if (!kaT) {
        int min = abs(p[0] - t[0]);
        for (int i = 1; i < n; ++i) {
            if (p[i] - t[i] < min) {
                min = p[i] - t[i];
            }
        }
        cout << sum - min;
        return 0;
    } else if (!kaP) {
        int min = abs(p[0] - t[0]);
        for (int i = 1; i < n; ++i) {
            if (t[i] - p[i] < min) {
                min = t[i] - p[i];
            }
        }
        cout << sum - min;
        return 0;
    } else {
        cout << sum;
    }
}
