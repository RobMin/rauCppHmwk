#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int sexyPart(string part) {
    vector<char> els(part.begin(), part.end());
    vector<char> uEls = els;
    sort(uEls.begin(), uEls.end());
    auto last = unique(uEls.begin(), uEls.end());
    uEls.erase(last, uEls.end());
    // els uEls
    if (uEls.size() == 1) {
        if (part.length() == 4) return 5;
        return els.size();
    } else if (els.size() == 3 && uEls.size() == 2) {
        return 2;
    } else if (els.size() == 4) {
        if (uEls.size() == 3) return 2;
        else if (uEls.size() == 2 && els[0] == els[3] && els[1] == els[2]) return 4;
        else if (uEls.size() == 2) return  3;
    }
    return 0;
}

int countPoints(string str, string cuts) {
    int points = 0;
    for (int i = 0; i < cuts.length(); i += 2) {
        points += sexyPart(str.substr(cuts[i] - '0', cuts[i + 1] - '0'));
    }
    return points;
}

string makeSexyNum(string str, string cuts) {
    string num;
    for (int i = 0; i < cuts.length(); i += 2) {
        num += str.substr(cuts[i] - '0', cuts[i + 1] - '0') + "-";
    }
    return num.substr(0, num.length() - 1);
}

int main() {
    string str;
    cin >> str;
    vector<string> cuts = {"022243", "033252", "022352", "0334", "0443"};
    int maxPoints = countPoints(str, cuts[0]);
    string bestNum = makeSexyNum(str, cuts[0]);
    for (int i = 1; i < cuts.size(); ++i) {
        int points = countPoints(str, cuts[i]);
        if (points > maxPoints) {
            maxPoints = points;
            bestNum = makeSexyNum(str, cuts[i]);
        }
    }
    cout << bestNum << "\n" << maxPoints;
    return 0;
}
