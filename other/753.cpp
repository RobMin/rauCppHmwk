#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<string> st;
int sum = 0;
void createSets(string &str, int len = 1) {
    if (len == str.length() + 1) return;
    for (int i = 0; i < str.length() - len + 1; ++i) {
        st.insert(str.substr(i, len));
    }
    sum += st.size();
    st.clear();
    createSets(str, len + 1);
}

int main() {
    string str;
    getline(cin, str);
    createSets(str);
    cout << sum;
    return 0;
}
