#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main() {
    string horse;
    cin >> horse;
    string chessAlp = "abcdefgh";
    int x1 = chessAlp.find(horse[0]) + 1;
    int y1 = horse[1] - '0';
    vector<int> x2s = {-2, -2, -1, -1, 1, 1, 2, 2};
    vector<int> y2s = {-1, 1, -2, 2, -2, 2, -1, 1};
    for (int i = 0; i < x2s.size(); i++) {
        int x = x1 + x2s[i];
        int y = y1 + y2s[i];
        if (x >= 1 && x <= 8 && y >= 1 && y <= 8) {
            cout << chessAlp[x - 1] + to_string(y) << "\n";
        }
    }
    return 0;
}
