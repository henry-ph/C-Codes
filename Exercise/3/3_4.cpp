#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double length(int x1, int y1, int x2, int y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
double square(int x1, int y1, int x2, int y2, int x3, int y3) {
    double a, b, c, s;
    a = length(x1, y1, x2, y2);
    b = length(x1, y1, x3, y3);
    c = length(x2, y2, x3, y3);
    s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    cout << fixed << setprecision(3) << square(x1, y1, x2, y2, x3, y3) << endl;
    return 0;
}
