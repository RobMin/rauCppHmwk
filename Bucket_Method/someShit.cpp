#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int convertBasis(int num, int basis) {
    if (num == 0 || basis == 10) {
        return num;
    }
    return num % basis + 10 * convertBasis(num / basis, basis);
}

int main() {
    int k = 2;
    vector<char> mySet = {'a', 'b', 'c', 'd'};
    int possibleCount = pow(mySet.size(), k);
    for (int i = 0; i < possibleCount; ++i) {
        int code = convertBasis(i, mySet.size());
        for (int j = 0; j < k; ++j) {
            cout << mySet[code % 10];
            code /= 10;
        }
        cout << '\n';
    }
}
