#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double SegmentLength(const double x1, const double y1, const double x2, const double y2) {
    double a = x1 - x2;
    double b = y1 - y2;
    return sqrt(a*a + b*b);
}

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
    cout << fixed << setprecision(2);
    cout << SegmentLength(x1, y1, x2, y2) + SegmentLength(x2, y2, x3, y3) + SegmentLength(x3, y3, x4, y4) + SegmentLength(x4, y4, x1, y1);
}