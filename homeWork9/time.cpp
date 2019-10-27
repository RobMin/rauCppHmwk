#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int h, m, s, add;
    char shit;
    cin >> h >> shit >> m >> shit >> s >> add;
    m += (s + add) / 60;
    s = (s + add) % 60;
    h = (h + (m / 60)) % 24;
    m %= 60;
    cout << setw(2) << setfill('0') << h << ':' << setw(2) << setfill('0') << m << ':' << setw(2) << setfill('0') << s;
}
