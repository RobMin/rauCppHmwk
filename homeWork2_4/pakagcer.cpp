#include <iostream>
#include <vector>

using namespace std;

int main() {
    string pakagcer;
    getline(cin, pakagcer);

    int bac = 0;
    for (int i = 0; i < pakagcer.length(); ++i) {
        if (pakagcer[i] == '(') {
            ++bac;
        } else {
            --bac;
        }
        if (bac < 0) {
            break;
        }
    }

    cout << (bac == 0 ? "Yes" : "No");
}
