#include<iostream>
using namespace std;

int max1(int x, int y) {
    return max(x, y);
}

int max1(int x, int y, int z) {
    return max(max(x, y), z);
}

double max1(double x, double y) {
    return max(x, y);
}

double max1(double x, double y, double z) {
    return max(max(x, y), z);
}

int main() {
    cout << max1(1, 2) << endl;
    cout << max1(1, 2, 3) << endl;
    cout << max1(1.1, 1.2) << endl;
    cout << max1(1.1, 1.2, 1.3) << endl;
    return 0;
}