#include <iostream>
#include <vector>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    vector<vector<int>> chars(s.length());

    for (int i = 0; i < t.length(); ++i) {
        if (s.find(t[i]) != string::npos) {
            chars[s.find(t[i])].push_back(i);
        }
    }

//    for (int i = 0; i < chars.size(); i++) {
//        for (int j = 0; j < chars[i].size(); j++)
//            cout << chars[i][j] << " ";
//        cout << endl;
//    }
    return 0;
}
