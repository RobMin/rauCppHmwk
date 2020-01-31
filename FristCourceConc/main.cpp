#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool isSimple(int n) {
    if (n <= 3) return true;
    for (int i = 2; i < sqrt(n) + 1; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int getSimpleGreaterThan(int n) {
    for (int i = n + 1;;++i) {
        if (isSimple(i)) {
            return i;
        }
    }
}

int main() {
    int k;
    cin >> k;
    vector<int> simples(3574);
    simples[0] = 1;
    for (int i = 1; i < 3574; ++i) {
        simples[i] = getSimpleGreaterThan(simples[i-1]);
    }
    cout << simples[simples[k]];
}
