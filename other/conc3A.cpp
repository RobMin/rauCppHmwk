#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

//int main() {
//    int n;
//    cin >> n;
//    vector<string> sNames;
//    vector<vector<string>> matrix;
//
//    for (int i = 0; i < n; ++i) {
//        int namesCount;
//        cin >> namesCount;
//        vector<string> names;
//        for (int j = 0; j < namesCount; ++j) {
//            string name;
//            cin >> name;
//            names.push_back(name);
//            sNames.push_back(name);
//        }
//        matrix.push_back(names);
//    }
//    vector<string> strs = {"teamname", "vanechka", "ivan", "albatross", "teddybear", "vitalya", "pythonists"};
//    sort(strs.begin(), strs.end());

//    int n = 3;
//    vector<vector<int>> matrix = getAllPairs(n);
//    for (int i = 0; i < strs.size(); i++) {
//        cout << strs[i] << " ";
//    }
//    cout << matrix.size();
//    for (int i = 0; i < matrix.size() - 1; i++) {
//        for (int j = 0; j < matrix[i].size(); j++) {
//            cout << matrix[i][j] << " ";
//        }
//        cout << "\n";
//    }
//    return 0;
//}

using namespace std;

bool check(vector<int> &sNames, vector<int> &namesMat, vector<int> set) {
    // check shit here
    return true;
}

//void filterSets() {
//    long long maxI = 0;
//    long long maxP = 0;
//    for (int i = 0; i < sets.size(); ++i) {
//        long long localP = sum(p, sets[i]);
//        if (localP > maxP || (localP == maxP && doChange(sets[i], sets[maxI]))) {
//            maxP = localP;
//            maxI = i;
//        }
//    }
//    vector<int> bestSet = sets[maxI];
//    sets.clear();
//    sets.push_back(bestSet);
//}

vector<vector<int>> sets;
void createSets(int n, ) {
    vector<int> teamNums;
    for (int i = 0; i < n; ++i) {
        teamNums.push_back(i + 1);
    }
    do {
        sets.push_back(teamNums);
    } while(next_permutation(teamNums.begin(), teamNums.end()));
}

int main() {
    int n;
    cin >> n;
    vector<string> sNames;
    vector<vector<string>> matrix;

    for (int i = 0; i < n; ++i) {
        int namesCount;
        cin >> namesCount;
        vector<string> names;
        for (int j = 0; j < namesCount; ++j) {
            string name;
            cin >> name;
            names.push_back(name);
            sNames.push_back(name);
        }
        matrix.push_back(names);
    }
    sort(sNames.begin(), sNames.end());

    createSets(350);



//    for (int i = 0; i < sets.size() - 1; i++) {
//        for (int j = 0; j < sets[i].size(); j++) {
//            cout << sets[i][j] << " ";
//        }
//        cout << "\n";
//    }

//    cout << sets[0].size() << " " << sum(p, sets[0]) << "\n";
//    for (int i = 0; i < sets[0].size(); ++i) {
//        cout << sets[0][i] + 1 << " ";
//    }
//    cout << sets[maxI].size() << " " << maxP << "\n";
//    for (int i = 0; i < sets[maxI].size(); ++i) {
//        cout << sets[maxI][i] + 1 << " ";
//    }
    return 0;
}
