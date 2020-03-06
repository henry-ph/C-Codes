#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << setw(4) << cnt;
            cnt++;
        }
        cout << endl;
    }
    return 0;
}