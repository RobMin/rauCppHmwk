#include <iostream>
#include <vector>

using namespace std;

long long sum(const vector<int>& v, const vector<int>& inds) {
    long long _sum = 0;
    for (int i = 0; i < inds.size(); i++) {
        _sum += v[inds[i]];
    }
    return _sum;
}

bool doChange(vector<int> &pending, vector<int> &old) {
    if (pending.size() < old.size()) {
        return  true;
    } else if (pending.size() == old.size()) {
        return (pending < old);
    }
    return false;
}

vector<vector<int>> sets;
vector<int> p;

void filterSets() {
    long long maxI = 0;
    long long maxP = 0;
    for (int i = 0; i < sets.size(); ++i) {
        long long localP = sum(p, sets[i]);
        if (localP > maxP || (localP == maxP && doChange(sets[i], sets[maxI]))) {
            maxP = localP;
            maxI = i;
        }
    }
    vector<int> bestSet = sets[maxI];
    sets.clear();
    sets.push_back(bestSet);
}

void createSets(vector<int> &w, const int& W, const int& ind = 0, vector<int> lastInds = {}) {
    if (sum(w, lastInds) <= W) {
        sets.push_back(lastInds);
    } else {
        return;
    }
    if (sets.size() > 100) {
        filterSets();
    }
    for (int i = ind; i < w.size(); ++i) {
        lastInds.push_back(i);
        createSets(w, W, i + 1, lastInds);
        lastInds.pop_back();
    }
}

int main() {
    int n, W;
    cin >> n >> W;
    vector<int> w;
    for (int i = 0; i < n; i++) {
        int we, pr;
        cin >> we;
        cin >> pr;
        w.push_back(we);
        p.push_back(pr);
    }

    createSets(w, W);
    filterSets();

    cout << sets[0].size() << " " << sum(p, sets[0]) << "\n";
    for (int i = 0; i < sets[0].size(); ++i) {
        cout << sets[0][i] + 1 << " ";
    }
//    cout << sets[maxI].size() << " " << maxP << "\n";
//    for (int i = 0; i < sets[maxI].size(); ++i) {
//        cout << sets[maxI][i] + 1 << " ";
//    }
    return 0;
}
