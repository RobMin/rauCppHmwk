#include <iostream>
#include <fstream>
#include <map>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;

void genIt() {
    ofstream ost("gibberish.txt");
    srand(time(0));
    for (int i = 0; i < 100000000; ++i) {
        ost << (char)('a' + (rand() % 26));
    }
    ost.close();
}

int main() {
    genIt();
    map<char, int> bucko;
    ifstream ist("gibberish.txt");
    char a;
    while (ist >> a) {
        ++bucko[a];
    }
    ist.close();
    for (int i = 0; i < 26; ++i) {
        char _char = (char)('a' + i);
        cout << _char << " - " << setw(10) << bucko[_char] << "\n";
    }
}