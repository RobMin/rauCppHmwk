#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

double getVecLen(vector<int> veci) {
    return sqrt(veci[0]*veci[0] + veci[1]*veci[1] + veci[2]*veci[2]);
}

void asc_sort(vector<vector<int>>& veco) {
    for (int i = 0; i < veco.size(); ++i) {
        for (int j = 1; j < veco.size() - i; ++j) {
            if (getVecLen(veco[j - 1]) > getVecLen(veco[j])) {
                swap(veco[j - 1], veco[j]);
            }
        }
    }
}

int main() {
    ifstream myInF("/home/lorraine/Desktop/rauCppHmwk/Sorting_Problems_1/AsteroidsDatabase.txt");
    int a, b, c;
    vector<vector<int>> veco;
    while (myInF >> a >> b >> c) {
        veco.emplace_back(vector<int>{a, b, c});
    }

    asc_sort(veco);

    ofstream myOuF("/home/lorraine/Desktop/rauCppHmwk/Sorting_Problems_1/AsteroidsSortedByDanger.txt");
    for (int i = 0; i < veco.size(); ++i) {
        for (int j = 0; j < 3; ++j) {
            myOuF << veco[i][j] << " ";
        }
        myOuF << "\n";
    }
}
