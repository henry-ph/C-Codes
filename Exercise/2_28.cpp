#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    if (n <= 0) {
        cout << '0' << endl;
        return 0;
    }
    for (int i = 1; i <= n; ++i) {
        int len = log10(i) + 1;
        long long tmp;
        tmp = (i * i) % (int)pow(10, len);
        if (tmp == i) 
            ans++;
    }
    cout << ans << endl;
    return 0;
}