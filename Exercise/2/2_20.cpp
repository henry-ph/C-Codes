#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 1;
    scanf("%d", &n);
    switch (n % 3) {
        case 0:
            ans = pow(3, n / 3);
            break;
        case 1:
            while(n > 4) {
                ans *= 3;
                n -= 3;
            }
            ans *= 4;
            break;
        case 2:
            while (n > 2) {
                ans *= 3;
                n -= 3;
            }
            ans *= 2;
            break;
    }
    printf("%d\n", ans);
    return 0;
}