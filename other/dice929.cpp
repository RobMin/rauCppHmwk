#include <iostream>
using namespace std;
int main() {
    long long num;
    cin >> num;
    long long klornt = 7 - num % 6;
    if (klornt == 7) klornt = 0;
    cout << num / 6 + klornt << " " << num * 6;
    return 0;
}
