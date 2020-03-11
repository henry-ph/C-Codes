#include<cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j)
            putchar('*');
        putchar('\n');
    }
    return 0;
}