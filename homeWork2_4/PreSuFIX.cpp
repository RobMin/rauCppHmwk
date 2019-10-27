#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int al = a.length();
    int bl = b.length();
    if (al < bl) {
        cout << "Neither";
        return 0;
    }

    bool pre = a.substr(0, bl) == b;
    bool suf = a.substr(al - bl) == b;

    if (pre && suf) {
        cout << "Both";
    } else if (pre) {
        cout << "Prefix";
    } else if (suf) {
        cout << "Suffix";
    } else {
        cout << "Neither";
    }
}
