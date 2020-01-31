#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

//void left(vector<vector<char>>& mat, int center1, int center2, int& dir) {
//    if (dir == 1) {
//        mat[center1][center2] = '|';
//        mat[center1][center2 + 1] = '.';
//        mat[center1][center2 - 1] = '.';
//        mat[center1 - 1][center2] = '\\';
//        mat[center1 + 1][center2] = '/';
//        dir = 4;
//    } else if (dir == 2) {
//        mat[center1][center2] = '-';
//        mat[center1 - 1][center2] = '.';
//        mat[center1 + 1][center2] = '.';
//        mat[center1][center2 - 1] = '\\';
//        mat[center1][center2 + 1] = '/';
//        dir = 1;
//    } else if (dir == 3) {
//        mat[center1][center2] = '|';
//        mat[center1][center2 + 1] = '.';
//        mat[center1][center2 - 1] = '.';
//        mat[center1 + 1][center2] = '\\';
//        mat[center1 - 1][center2] = '/';
//        dir = 2;
//    } else if (dir == 4) {
//        mat[center1][center2] = '-';
//        mat[center1 - 1][center2] = '.';
//        mat[center1 + 1][center2] = '.';
//        mat[center1][center2 + 1] = '\\';
//        mat[center1][center2 - 1] = '/';
//        dir = 3;
//    }
//}
//
//void right(vector<vector<char>>& mat, int c1, int c2, int& dir) {
//    left(mat, c1, c2, dir);
//    left(mat, c1, c2, dir);
//    left(mat, c1, c2, dir);
//}
//
//void ptuyt(vector<vector<char>>& mat, int c1, int c2, int& dir) {
//    left(mat, c1, c2, dir);
//    left(mat, c1, c2, dir);
//}
//
//void uxix(vector<vector<char>>& mat, int center1, int center2, int& dir) {
//    if (dir == 1) {
//        mat[center1][center2] = '.';
//        mat[center1][center2 + 1] = '.';
//        mat[center1][center2 - 1] = '.';
//
//        mat[center1 - 1][center2] = '-';
//        mat[center1 - 1][center2 + 1] = '/';
//        mat[center1 - 1][center2 - 1] = '\\';
//    } else if (dir == 2) {
//        mat[center1][center2] = '.';
//        mat[center1 - 1][center2] = '.';
//        mat[center1 + 1][center2] = '.';
//
//        mat[center1][center2 + 1] = '|';
//        mat[center1 + 1][center2 + 1] = '\\';
//        mat[center1 - 1][center2 + 1] = '/';
//    } else if (dir == 3) {
//        mat[center1][center2] = '.';
//        mat[center1][center2 + 1] = '.';
//        mat[center1][center2 - 1] = '.';
//
//        mat[center1 + 1][center2] = '-';
//        mat[center1 + 1][center2 - 1] = '/';
//        mat[center1 + 1][center2 + 1] = '\\';
//    } else if (dir == 4) {
//        mat[center1][center2] = '.';
//        mat[center1 - 1][center2] = '.';
//        mat[center1 + 1][center2] = '.';
//
//        mat[center1][center2 - 1] = '|';
//        mat[center1 + 1][center2 - 1] = '/';
//        mat[center1 - 1][center2 - 1] = '\\';
//    }
//}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int c1, c2;
    vector<vector<char>> mat(a);
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            char ket;
            cin >> ket;
            if (ket == '-' || ket == '|') {
                c1 = i;
                c2 = j;
            }
            mat[i].push_back(ket);
        }
    }

    int dir;
    if (mat[c1][c2] == '|') {
        if (mat[c1 - 1][c2] == '/') {
            dir = 2;
        } else {
            dir = 4;
        }
    } else {
        if (mat[c1][c2 - 1] == '/') {
            dir = 3;
        } else {
            dir = 1;
        }
    }
//    cout << dir << c1 << c2;
//    string shit;
//    getline(cin, shit);
    for (int i = 0; i < c; ++i) {
//        cout << i <<'v';
        string hraman, junk;
        cin >> hraman;
        cin >> junk;
//        cout << hraman << " " << junk << "\n";
        if (hraman == "Left") {
            dir = (dir - 1 == 0 ? 4 : dir - 1);
//            left(mat, c1, c2, dir);
        } else if (hraman == "Right") {
            dir = (dir + 1 == 5 ? 1 : dir + 1);
//            right(mat, c1, c2, dir);
        } else if (hraman == "About") {
            dir = (dir - 2 > 0 ? dir - 2 : dir + 2);
//            ptuyt(mat, c1, c2, dir);
        } else if (hraman == "Forward") {
//            uxix(mat, c1, c2, dir);
            if (dir == 1) {
                --c1;
            } else if (dir == 2) {
                ++c2;
            } else if (dir == 3) {
                ++c1;
            } else if (dir == 4) {
                --c2;
            }
        }

//        cout << hraman << '\n';
//        for (int i = 0; i < a; ++i) {
//            for (int j = 0; j < b; ++j) {
//                cout << mat[i][j];
//            }
//            cout << '\n';
//        }
//        cout << '\n';
    }

    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            mat[i][j] = '.';
        }
    }

    mat[c1][c2] = (dir % 2 == 0 ? '|' : '-');
    if (dir == 1) {
        mat[c1][c2 - 1] = '\\';
        mat[c1][c2 + 1] = '/';
    } else if (dir == 2) {
        mat[c1 - 1][c2] = '/';
        mat[c1 + 1][c2] = '\\';
    } else if (dir == 3) {
        mat[c1][c2 + 1] = '\\';
        mat[c1][c2 - 1] = '/';
    } else if (dir == 4) {
        mat[c1 - 1][c2] = '\\';
        mat[c1 + 1][c2] = '/';
    }


    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            cout << mat[i][j];
        }
        cout << '\n';
    }
}

//4 7 4
//.......
//.......
//.../-\.
//.......
//Left turn
//Right turn
//About turn
//Forward step
