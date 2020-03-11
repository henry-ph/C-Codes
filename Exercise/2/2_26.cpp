#include<bits/stdc++.h>
using namespace std;
char ans[2][10] = {"False", "True"};

int main() {
    int n, comp = 1;
    scanf("%d", &n);
    for (int i = 2; i <= sqrt(n); ++i) {
        if (!(n % i))
            comp += + i + n / i;
    }
    printf("%s\n", ans[n == comp]);
    return 0;
}