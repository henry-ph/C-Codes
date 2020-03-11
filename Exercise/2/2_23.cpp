#include<bits/stdc++.h>
using namespace std;

int _pow(int base, int index) {
    int ans = 1;
    while (index) {
        ans %= 1000;
        base %= 1000;
        if (index & 1) 
            ans *= base;
        base *= base;
        index >>= 1;
    }
    return ans % 1000;
}

int main() {
    int n, a;
    cin >> n >> a;
    cout << _pow(n, a) << endl;
    return 0;
}