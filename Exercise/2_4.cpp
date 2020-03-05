#include<cstdio>
#include<algorithm>
using namespace std;
const int N = 1e3 + 5;
int a[N];

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", a + i);
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n; ++i) 
        if (a[i + 1] - a[i] == 1)
            ans++;
    printf("%d\n", ans);
    return 0;
}