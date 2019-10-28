#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> numo(n);

    double sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> numo[i];
        sum += numo[i];
    }

    for (int i = 0; i < n; ++i) {
        cout << sum << " ";
        sum -= numo[i];
    }
}
