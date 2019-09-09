#include <iostream>

int main() {
    int n, an, m, am, k;
    std::cin >> n >> an >> m >> am;
    int d = (am - an) / (m - n);

    int k;
    std::cin >> k;
    int kn = an - ((n - k) * d);

    std::cout << kn;
    return 0;
}
