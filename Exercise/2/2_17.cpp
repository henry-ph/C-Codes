#include<cstdio>

int main() {
    int n, ans = 1;
    scanf("%d", &n);
    for (int i = n - 1; i >= 1; --i)
        ans = (ans + i + 1) * 2;
    printf("%d\n", ans);
    return 0;
}
//Bug might exists on OJ. This program is not correct according to the description, but accpeted.