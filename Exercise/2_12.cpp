#include<cstdio>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        putchar('*');
    putchar('\n');
    for (int i = 2; i < n; ++i) {
        putchar('*');
        for (int j = 2; j < n; ++j)
            putchar(' ');
        putchar('*');
        putchar('\n');
    }
    for (int i = 1; i <= n; ++i)
        putchar('*');
    putchar('\n');
    return 0;
}
//Wrong at point 0.