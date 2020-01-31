#include <iostream>
#include <string>

using namespace std;

bool isPalindrom(string s) {
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

void checkAllSubstrings(string s, int k) {
    for (int i = 0; i < s.size() + 1 - k; ++i) {
        string sub = s.substr(i, k);
        if (isPalindrom(sub)) {
            cout << sub << '\n';
        }
    }
}

int main() {
    string str;
    cin >> str;
    for (int i = 1; i < str.size() + 1; ++i) {
        checkAllSubstrings(str, i);
    }
}
