#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int m, n;
    double x;
    cin >> m >> n >> x;
    if (!n) {
        if (!m) {
            cout << '0' << endl;
        }
        cout << setw(m) << (int)x << endl;
    }
    else 
        cout << setw(m + n + 1) << setfill('0') << setiosflags(ios::fixed) << setprecision(n) << x << endl;
    return 0;
}