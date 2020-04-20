#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

const int N = 1e5 + 5, inf = 0x3f3f3f3f;
int a[N], dp[N];

int main() {
    int n, ans = -inf;
    memset(dp, -inf, sizeof(dp));
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i) 
        dp[i] = max(dp[i - 1] + a[i], a[i]);
    for (int i = 1; i <= n; ++i)
        ans = max(ans, dp[i]);
    cout << ans << endl;
    return 0;
}