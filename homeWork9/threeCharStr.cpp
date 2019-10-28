#include <iostream>

using namespace std;

bool isUpperCase(char _char) {
    return (int)_char < (int)'a';
}

char to_lowercase(int diff, char _char) {
    return (!isUpperCase(_char) ? _char : (char)((int)_char + diff));
}

char to_uppercase(int diff, char _char) {
    return (isUpperCase(_char) ? _char : (char)((int)_char - diff));
}

int main() {
    int diff = (int)'a' - (int)'A';
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); ++i) {
        cout << (i == 0 ? to_uppercase(diff, str[i]) : to_lowercase(diff, str[i]));
    }
}
