#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isFirstBigger(string& date2, string& date1) {
    string y1 = date1.substr(6, 4);
    string y2 = date2.substr(6, 4);
    if (y1 > y2) {
        return true;
    } else if (y2 > y1) {
        return false;
    }

    string m1 = date1.substr(3, 2);
    string m2 = date2.substr(3, 2);
    if (m1 > m2) {
        return true;
    } else if (m2 > m1) {
        return false;
    }

    string d1 = date1.substr(0, 2);
    string d2 = date2.substr(0, 2);
    if (d1 > d2) {
        return true;
    } else if (d2 > d1) {
        return false;
    }

    return false;
}

void desc_sort(vector<string>& veco) {
    for (int i = 0; i < veco.size(); ++i) {
        for (int j = 1; j < veco.size() - i; ++j) {
            if (!isFirstBigger(veco[j - 1], veco[j])) {
                swap(veco[j - 1], veco[j]);
            }
        }
    }
}

int main() {
    vector<string> veco;
    string dte;
    while (cin >> dte) {
        veco.push_back(dte);
    }

    desc_sort(veco);

    for (int i = 0; i < veco.size(); ++i) {
        cout << veco[i] << "\n";
    }
}
