#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> boxes;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        boxes.push_back(min(a, b));
    }
    int L;
    cin >> L;
    sort(boxes.begin(), boxes.end());

    int n2 = 1;
    double fullsSum = 0;
    for (int i = 1; i < n; ++i) {
        if (fullsSum + boxes[i] / 2 + boxes[i - 1] / 2 < L) {
            ++n2;
            fullsSum += boxes[i - 1];
        } else {
            break;
        }
    }

    cout << n2;
    return 0;
}
