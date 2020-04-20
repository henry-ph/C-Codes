#include<iostream>
#include<cmath>

using namespace std;

const int N = 5e3 + 5;
int a[N], dp[N];

int main() {
    int n, ans = 0;
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