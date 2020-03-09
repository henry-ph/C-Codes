#include<cstdio>
char ans[2][10] = {"False", "True"};
bool IsUgly(int x);

int main() {
    int n;
    while (scanf("%d", &n) != EOF)
        printf("%s\n", ans[IsUgly(n)]);
    return 0;
}

bool IsUgly(int x) {
    if (x == 1)
        return 0;
    while (!(x % 2))
        x /= 2;
    while (!(x % 3))
        x /= 3;
    while (!(x % 5))
        x /= 5;
    if (x != 1)
        return 0;
    return 1;
}