#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    string str, sdvig;
    cin >> str >> sdvig;
    vector<string> sdvigs;
    for (int i = 0; i < sdvig.length(); i++) {
        sdvigs.push_back(sdvig.substr(i) + sdvig.substr(0, i));
    }
    int counter = 0;
    for (int i = 0; i < str.length() - sdvig.length() + 1; i++) {
        if (find(sdvigs.begin(), sdvigs.end(), str.substr(i, sdvig.length())) != sdvigs.end()) {
            ++counter;
        }
    }
    cout << counter;
    return 0;
}
