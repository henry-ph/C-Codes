#include<cstdio>
#include<iostream>
using namespace std;

int main() {
    int m, n, num;
    int ans = 0;
    scanf("%d%d", &m, &n);
    num = m ^ n;
    while (num) {
        ans++;
        num &= num - 1;
    }
    printf("%d\n", ans);
    return 0;
}