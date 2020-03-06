#include<cstdio>
#include<algorithm>
using namespace std;
const int N = 1e5 + 5;
int a[N];

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) 
        scanf("%d", a + i);
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; ++i) 
        for (int j = i + 1; j <= n; ++j) 
            for (int k = j + 1; k <= n; ++k)
                if (a[i] + a[j] > a[k]) 
                    ans++;
    printf("%d\n", ans);
    return 0;
}