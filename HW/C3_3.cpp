#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; ++i) {
        int tmp = i <= n ? i : 2 * n - i;
        int sp = n - tmp, st = 2 * tmp - 1;
        while (sp) {
            cout << ' ';
            sp--;
        }
        while (st) {
            cout << '*';
            st--;
        }
        cout << endl;
    }
    return 0;
}