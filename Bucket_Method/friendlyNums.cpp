#include <iostream>
#include <map>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    map<int, int> myBucket1;
    while (a > 0) {
        int t = a % 10;
        a /= 10;
        myBucket1[t] = 1;
    }

    map<int, int> myBucket2;
    while (b > 0) {
        int t = b % 10;
        b /= 10;
        myBucket2[t] = 1;
    }

    if (myBucket1 == myBucket2) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
