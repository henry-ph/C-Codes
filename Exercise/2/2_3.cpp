#include<cstdio>

int main() {
    int n, ans = 0, base = 5;
    scanf("%d", &n);
    while (n / base) {
        ans += n / base;
        base *= 5;
    }
    printf("%d\n", ans);
    return 0;
}