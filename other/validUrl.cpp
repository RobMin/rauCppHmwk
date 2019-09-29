#include <iostream>
#include <string>
#include <regex>

using namespace std;
int main() {
    string url = "http://12.222";
    if (url.find("http://") == 0) {
        url = url.substr(7);
    }
    regex host("^[1-9]([0-9]){0,2}");//([0-9]){0,2}\.

    smatch match;
    regex_search(url, match, host);
    cout << match.suffix().str() << "\n";
    return 0;
}
