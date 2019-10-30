#include <iostream>
#include <string>

using namespace std;

int main() {
    string genom, gen;
    cin >> genom >> gen;

    for (int i = 0; i < genom.length() - gen.length(); ++i) {
        if (genom.substr(i, gen.length()) == gen) {
            cout << i << " ";
        }
    }
}
