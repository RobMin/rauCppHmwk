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
    string s;
    cin >> s;
//    cout << s << "\n";
//    change(s, 2, '0');
    for (int i = 0; i < s.length() / 2 + (s.length() % 2 == 0 ? 0 : 1); ++i) {
        if (s[i] == '?') {
            if (s[myusy(s, i)] == '?') {
                change(s, i, '0');
                change(s, myusy(s, i), '0');
            } else {
                change(s, i, s[myusy(s, i)]);
            }
        }
        if (s[myusy(s, i)] == '?') {
            change(s, myusy(s, i), s[i]);
        }
    }
    for (int i = 0; i < s.length() / 2 + (s.length() % 2 == 0 ? 0 : 1); ++i) {
        if (s[i] != s[myusy(s, i)]) {
            cout << "NO SOLUTION";
            return 0;
        }
    }
    cout << s;
    return 0;
}
