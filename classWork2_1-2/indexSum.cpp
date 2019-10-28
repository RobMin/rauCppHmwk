#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    int m;
    cin >> m;
    vector<int> I(m);
    for (int i = 0; i < m; ++i) {
        cin >> I[i];
    }

    double sum = 0;
    for (int i = 0; i < m; ++i) {
        sum += A[I[i]];
    }

    cout << sum;
}