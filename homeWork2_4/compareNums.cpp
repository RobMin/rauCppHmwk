#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int al = a.length();
    int bl = b.length();

    if (al < bl) {
        cout << "<";
    } else if (al > bl) {
        cout << ">";
    } else if (a > b) {
        cout << ">";
    } else if (a < b) {
        cout << "<";
    } else {
        cout << "=";
    }
}
