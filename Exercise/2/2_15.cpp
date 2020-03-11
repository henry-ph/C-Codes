#include<iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int cnt = 3 * n - 2;
    for (int i = 0; i <= (cnt - 1) / 2; ++i)
        cout << (x + i) % 10 << ' ';
    for (int i = 0; i <= (cnt - 2) / 2; ++i)
        cout << (x + (3 * n - 3) / 2 + (!(n % 2) ? 0 : -1) - i + 10) % 10 << ' ';
    cout << endl;
    for (int i = 0; i < n - 2; ++i) {
        for (int j = 0; j <= i; ++j)
            cout << "  ";
        cout << (x + i + 1) % 10 << ' ';
        for(int j = 0; j < 3 * n - 2 * i - 6; j++)
            cout << "  ";
        cout << (x + i + 1) % 10 << ' ';
        cout << endl;
    }
    for (int i = 0; i < n - 1; ++i)
        cout << "  ";
    for (int i = 0; i < (n + 1) / 2; ++i)
        cout << (x + n - 1 + i) % 10 << ' ';
    for (int i = 0; i < n / 2; ++i)
        cout << (x + (3 * n - 3) / 2 + (!(n % 2) ? 0 : -1) - i + 10) % 10 << ' ';
    cout << endl;
    return 0;
}