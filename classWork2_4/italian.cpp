#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> veco;
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        char last = word[word.length() - 1];
        if (last == 'o') {
            veco.push_back(word + " - m.");
        } else if (last == 'a') {
            veco.push_back(word + " - f.");
        }
    }

    int vs = veco.size();
    cout << vs << '\n';
    for (int i = 0; i < vs; ++i) {
        cout << veco[i] << '\n';
    }
}
