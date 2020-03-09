#include<cstdio>
#include<cstring>
using namespace std;
typedef long long ll;
ll fib[85];

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        memset(fib, 0, sizeof(fib));
        fib[1] = fib[2] = 1;
        for (int i = 3; i <= n + 1; ++i) 
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%lld\n", fib[n + 1]);
    }
    return 0;
}