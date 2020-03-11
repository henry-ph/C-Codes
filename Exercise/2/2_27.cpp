#include<cstdio>

int main() {
    for (int i = 1; i <= 10000; ++i) {
        int tmp = i, ans = 0;
        while (tmp) {
            int dig = tmp % 10;
            ans += dig * dig * dig;
            tmp /= 10;
        }
        if (ans == i) 
            printf("%d\n", i);
    }
    return 0;
}