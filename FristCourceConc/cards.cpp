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
    string cards;
    cin >> cards;
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        cards = xarnel(cards);
//        cout << cards << '\n';
    }
    cout << cards;
}
//ABCDEFG
//1