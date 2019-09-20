#include <iostream>
using namespace std;
int main() {
    string num;
    cin >> num;
    int zeros = 0;
    int maxLine = 0;
    for (int i = 0; i < num.length(); i++) {
        if (num[i] == '0') {
            ++zeros;
        } else {
            zeros = 0;
        }
        maxLine = max(zeros, maxLine);
    }
    cout << maxLine;
    return 0;
}
