#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

string xarnel(string a) {
    string newa = "";
    for (int i = 0; i < a.length(); i+=2) {
        newa += a[i];
    }
    for (int i = 1; i < a.length(); i+=2) {
        newa += a[i];
    }
    string rev = "";
    for (int i = newa.length() - 1; i >= 0; i--) {
        rev += newa[i];
    }
    return rev;
}

int main() {
    string a, b;
    cin >> a >> b;
    int j = 0;
    for (int i = 0; i < b.size(); ++i) {
        if (b[i] == a[j]) {
            ++j;
        }
        if (j == a.length()) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
