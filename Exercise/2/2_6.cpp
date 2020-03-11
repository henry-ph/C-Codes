#include<cstdio>

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    while (n) {
        ans += n & 1;
        n >>= 1;
    }
    printf("%d\n", ans);
    return 0;
}