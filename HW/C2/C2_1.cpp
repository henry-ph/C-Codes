#include<bits/stdc++.h>
using namespace std;

const int MAX = 0x3f3f3f3f;

int main() {
    int n, sum = 0, _min = MAX, _max = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int tmp;
        cin >> tmp;
        sum += tmp;
        _min = min(tmp, _min);
        _max = max(tmp, _max);
    }
    cout << sum << ' ' << _min << ' ' << _max << endl;
    return 0;
}