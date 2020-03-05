#include<cstdio>
#include<algorithm>
using namespace std;
const int N = 1e5 + 5;
int a[N];

int main() {
    int n, ans, len = 0, comp = 0;
    ;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int tmp;
        scanf("%d", &tmp);
        a[tmp]++;
        len = max(len, tmp);
    }
    ans = 1;
    for (int i = 2; i <= len; ++i) {
        if (a[i] > comp) {
            ans = i;
            comp = a[i];
        }
    }
    printf("%d\n", ans);
    return 0;
}