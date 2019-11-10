#include <iostream>
#include <vector>
#include <utility>

using namespace std;
// es chgitem es vonca kareli sortov grel :0
int main() {
    int n;
    cin >> n;

    vector<int> veco;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        veco.emplace_back(a);
    }

    for (int a = 0; a < 2; ++a) {
        int min = a;
        for (int i = a + 1; i < n; ++i) {
            if (veco[min] > veco[i]) {
                min = i;
            }
        }
        swap(veco[a == 0 ? 0 : veco.size() - 1], veco[min]);
    }

    for (int i = 0; i < n; ++i) {
        cout << veco[i] << " ";
    }
}
