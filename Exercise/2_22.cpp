#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ans;
    if (n < 10) {
        cout << n << endl;
        return 0;
    }
    for (int i = 9; i > 1; --i) {
        if (n == 1)
            break;
        if (!(n % i)) {
            while (!(n % i)) {
                ans += i + '0';
                n /= i;
            }
        }
    }
    reverse(ans.begin(), ans.end());
    if (ans.empty() || n != 1) {
        cout << '0' << endl;
        return 0;
    }
    long NumberAns = stol(ans);
    if (NumberAns > INT_MAX) 
        cout << '0' << endl;
    else
        cout << NumberAns << endl;
    return 0;
}