#include <iostream>

using namespace std;

void logger(const int times, const int x) {
    cout << times << " times " << x << "\n";
}

int main() {
    int n;
    cin >> n;

    int count = 1;
    int last;
    if (n > 0) {
        cin >> last;
    }
    for (int i = 1; i < n; ++i) {
        int _this;
        cin >> _this;
        if (_this == last) {
            ++count;
        } else {
            logger(count, last);
            last = _this;
            count = 1;
        }
    }
    logger(count, last);
}
