#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double _min = min(a, b);
    _min = min(_min, c);
    double _max = max(a, b);
    _max = max(_max, c);
    cout << "Looser: " << _min << "\n";
    cout << "Next Einstein: " << _max;
}
