#include<bits/stdc++.h>
using namespace std;

int _pow(int base, int index) {
    if (!base)
        return 0;
    int ans = 1;
    while (index) {
        ans *= base;
        index--;
    }
    return ans;
}
int main() {
    int s, ans = 0, base, bit = 0;
    cin >> s;
    while (s) {
        base = s % 10;
        ans += _pow(2 * base, bit);
        s /= 10;
        bit++;
    }
    cout << ans << endl;
    return 0;
}