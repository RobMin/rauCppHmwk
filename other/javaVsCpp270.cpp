#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    string str;
    cin >> str;

    string lCaseStr = str;
    for_each(lCaseStr.begin(), lCaseStr.end(), [](char & c){
        c = ::tolower(c);
    });
    bool isJava = false;
    if (lCaseStr != str) {
        isJava = true;
    }

    if (str[0] != tolower(str[0]) || str[0] == '_' || str[str.length() - 1] == '_') {
        cout << "Error!";
        return 0;
    }
    string newStr = "";
    bool makeNextUpper = false;
    bool lastWasUnderScore = false;
    for (int i = 0; i < str.length(); i++) {
        if ((str[i] == '_' && lastWasUnderScore) || (str[i] == '_' && isJava)) {
            cout << "Error!";
            return 0;
        } else if (isJava) {
            if (::tolower(str[i]) != str[i]) {
                newStr += '_';
            }
            newStr += ::tolower(str[i]);
        } else {
            if (str[i] == '_') {
                makeNextUpper = true;
                lastWasUnderScore = true;
            } else if (makeNextUpper) {
                makeNextUpper = false;
                lastWasUnderScore = false;
                newStr += ::toupper(str[i]);
            } else {
                newStr += str[i];
                lastWasUnderScore = false;
            }
        }
    }
    cout << newStr;
    return 0;
}
