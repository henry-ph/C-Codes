#include <iostream>
using namespace std;

int C(int m, int n) {
    if (n == 1 || m == n) return 1;
    return C(m - 1, n) + C(m - 1, n - 1);
}

int main() {
    int m, n;
    cin >> m >> n;
    cout << C(m + 1, n + 1) << endl;
    return 0;
}