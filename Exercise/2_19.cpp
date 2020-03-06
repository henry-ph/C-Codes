#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
const int N = 1e4 + 5, MAX = 0x3f3f3f3f;
int dp[N];

int main() {
    int n;
    scanf("%d", &n);
    memset(dp, MAX, sizeof(dp));
    for (int i = 1; i * i <= n; ++i)
        dp[i * i] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; i + j * j <= n; ++j)
            dp[i + j * j] = min(dp[i] + 1, dp[i + j * j]);
    }
    printf("%d\n", dp[n]);
    return 0;
}