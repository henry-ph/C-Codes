#include<cstdio>

void print(int x) {
    for (int i = 1; i <= x; ++i)
        putchar('*');
    putchar('\n');
    for (int i = 3; i < x; ++i) {
        putchar('*');
        for (int j = 2; j < x; ++j)
            putchar(' ');
        putchar('*');
        putchar('\n');
    }
    for (int i = 1; i <= x; ++i)
        putchar('*');
    putchar('\n');
}

int main() {
    int n;
    scanf("%d", &n);
    /*if (n == 3) {
        print(n);
        return 0;
    }*/
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