#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;
    int n;
    cin >> n;

    if (n > 0) {
        string newWord = word;
        for (int i = 1; i < n; ++i) {
            newWord += word;
        }
        word = newWord;
    } else if (n < 0) {
        n *= -1;

        if (word.length() % n != 0) {
            cout << "undefined";
            return 0;
        }

        int newWL = word.length() / n;
        string newWord = word.substr(0, newWL);
        for (int i = 1; i < n; ++i) {
            if (newWord != word.substr(i * newWL, newWL)) {
                cout << "undefined";
                return 0;
            }
        }
        word = newWord;
    } else {
        word = "";
    }

    cout << word;
}
