#include <iostream>
#include <string>
using namespace std;

int _int(const char& n) {
    return n - '0';
}

int main() {
    string n;
    getline(cin, n);
    for (int i = 2; i < n.length(); ++i) {
        if (_int(n[i - 2]) - _int(n[i - 1]) != _int(n[i - 1]) - _int(n[i])) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}
