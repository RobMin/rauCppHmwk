#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> veco;
    veco.push_back(0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        veco.push_back(a);
    }
    veco.push_back(0);

    vector<int> lefto;
    vector<int> righto;
    long long lSum = 0;
    long long rSum = 0;
    long long lLastH = 0;
    long long rLastH = 0;
    for (int i = 0; i < n; ++i) {
        int localI = i + 1;
        if (veco[localI] <= lLastH) {
            lSum += lLastH - veco[localI] + 1;
            lLastH = veco[localI] + lLastH - veco[localI] + 1;
        } else {
            lLastH = veco[localI];
        }
        lefto.push_back(lSum);


        int localJ = veco.size() - 2 - i;
        if (veco[localJ] <= rLastH) {
            rSum += rLastH - veco[localJ] + 1;
            rLastH = veco[localJ] + rLastH - veco[localJ] + 1;
        } else {
            rLastH = veco[localJ];
        }
        righto.push_back(rSum);
    }

    for (int i = 0; i < lefto.size(); i++) {
        cout << lefto[i] << "  " << righto[i] << "\n";
    }


}
