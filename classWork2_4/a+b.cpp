#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string t1, t2;
    cin >> t1 >> t2;

    vector<int> t1v;
    for (int i = t1.length() - 1; i >= 0; --i) {
        t1v.push_back(t1[i] - '0');
    }

    vector<int> t2v;
    for (int i = t2.length() - 1; i >= 0; --i) {
        t2v.push_back(t2[i] - '0');
    }

    t1v.resize(max(t1.length(), t2.length()));
    t2v.resize(max(t1.length(), t2.length()));

    int car = 0;
    for (int i = 0; i < t1v.size(); ++i) {
        t1v[i] += t2v[i] + car;
        car = t1v[i] / 10;
        t1v[i] %= 10;
    }
    if (car != 0) {
        t1v.push_back(car);
    }

    for (int i = t1v.size() - 1; i >= 0; --i) {
        cout << t1v[i];
    }
}
