#include <iostream>
#include <set>

using namespace std;

int main() {
    int n1;
    cin >> n1;
    set<int> setik;

    for (int i = 0; i < n1; ++i) {
        int a;
        cin >> a;
        setik.insert(a);
    }

    int n2;
    cin >> n2;
    for (int i = 0; i < n2; ++i) {
        int a;
        cin >> a;
        if (!setik.insert(a).second) {
            cout << a << " ";
        }
    }
}
