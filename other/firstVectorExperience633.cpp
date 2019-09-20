#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<string> teamName;
    while (true) {
        string tName;
        cin >> tName;
        teamName.push_back(tName);
        if (tName == "Team") {
            break;
        }
    }

    vector<string> names;
    for (int i = 0; i < 3; ++i) {
        string name;
        cin >> name;
        names.push_back(name);
    }
    sort(names.begin(), names.end());

    for (int i = 0; i < teamName.size(); ++i) {
        cout << teamName[i];
        if (i != teamName.size() - 1) {
            cout << " ";
        }
    }
    cout << ": ";
    for (int i = 0; i < names.size(); ++i) {
        if (i != 0) {
            cout << ", ";
        }
        cout << names[i];
    }

    return 0;
}
