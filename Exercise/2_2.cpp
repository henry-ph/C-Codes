#include<cstdio>
const int N = 1e5 + 5;
int fab[N];

int main() {
    int n;
    scanf("%d", &n);
    fab[1] = fab[2] = 1;
    for (int i = 3; i <= n; ++i)
        fab[i] = fab[i - 1] + fab[i - 2];
    printf("%d\n", fab[n]);
    return 0;
}