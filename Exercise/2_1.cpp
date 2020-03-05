#include<iostream>
using namespace std;

int main() {
    int n, ans = 0, pre;
    cin >> n;
    cin >> pre;
    for (int i = 2; i <= n; ++i) {
        int now;
        cin >> now;
        if (now != pre) {
            ans++;
            pre = now;
        }
    }
    cout << ans + 1 << endl;
    return 0;
}