#include <iostream>
#include <vector>
#include <string>

using namespace std;

void split(vector<int>& veco, const string& str, const char& byChar) {
    int start = 0;
    for (int i = 1; i < str.size(); ++i) {
        if (str[i] == byChar) {
            veco.push_back(stoi(str.substr(start, i - start)));
            start = i + 1;
        }
    }
    veco.push_back(stoi(str.substr(start)));
}

int main() {
    string ip;
    cin >> ip;
    vector<int> ipPart;
    split(ipPart, ip, '.');

    unsigned int compactIp = 0;
    for (int i = 0; i < ipPart.size(); ++i) {
        compactIp = compactIp << 8;
        compactIp += ipPart[i];
    }

    cout << (compactIp >> 24) << '.' << ((compactIp << 8) >> 24) << '.' << ((compactIp << 16) >> 24) << '.' << ((compactIp << 24) >> 24);
}
