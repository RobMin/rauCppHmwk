#include <iostream>
#include <string>

using namespace std;

int main() {
    int x, y, n;
    cin >> x >> y >> n;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        if (word == "left") {
            x -= 1;
        } else if (word == "right") {
            x += 1;
        } else if (word == "up") {
            y += 1;
        } else if (word == "down") {
            y -= 1;
        }
    }

    cout << x << " " << y;
}
