#include <iostream>
#include <ctime>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

 auto t1 = clock();

    for(int i = 0; i < 1000000; ++i)
        cout << rand()%2;

 auto t2 = clock();

 cout << '\n' << 1.0*(t2 - t1)/CLOCKS_PER_SEC;

}