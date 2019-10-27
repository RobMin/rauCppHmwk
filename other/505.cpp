#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int len, shablonsCount, shitsCount;
    cin >> len >> shablonsCount >> shitsCount;
    map<string, int> shablons;
    for (int i = 0; i < shablonsCount; ++i) {
        int I;
        cin >> I;
        cin.ignore();
        string shablon;
        getline(cin, shablon);
        shablons[shablon] = I;
    }

    vector<string> shits;
    for (int i = 0; i < shitsCount; ++i) {
        string shit;
        getline(cin, shit);
        shits.push_back(shit);
    }

    int bads = 0;
    for (const string & shit : shits) {
        if(shablons.find(shit) == shablons.end()) {
            cout << "-" << "\n";
            ++bads;
        } else {
            cout << shablons[shit] << "\n";
        }
    }
    cout << "OK=" << shits.size() - bads << " " << "BAD=" << bads;

    return 0;
}
