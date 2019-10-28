#include <iostream>
#include <vector>

using namespace std;

bool isUpperCase(char _char) {
    return (int)_char < (int)'a';
}

char to_lowercase(int diff, char _char) {
    return (!isUpperCase(_char) ? _char : (char)((int)_char + diff));
}

int main() {
    int diff = (int)'a' - (int)'A';
    int n;
    cin >> n;
    vector<char> _charo;
    for (int i = 0; i < n; ++i) {
        char a;
        cin >> a;

        if (i < n / 2) {
            _charo.push_back(to_lowercase(diff, a));
        } else if (i >= (n / 2) + (n % 2)) {
            if (_charo[n - i - 1] != to_lowercase(diff, a)) {
                cout << "no";
                return 0;
            }
        }
    }
    cout << "yes";
    return 0;
}
