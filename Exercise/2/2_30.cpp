#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (!(n % i))
            cout << i << ' ';
    }
    cout << endl;
    return 0;
}