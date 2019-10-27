#include <iostream>

using namespace std;

int main() {
    char x;
    int y;
    cin >> x >> y;
    int fix = (((int)'a' % 2 == 0) ? 1 : 0);
    cout << (((int)x + fix + y) % 2 == 0 ? "black" : "white");
}
