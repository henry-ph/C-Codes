#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char s;
    cin >> s >> n;
    for (int i = 1; i <= n - 1; ++i)
        cout << ' ';
    cout << s << endl;
    s = (s - 'A' + 1) % 26 + 'A';
    for (int i = 2; i < 2 * n - 1; ++i) {
        int tmp = i <= n ? i : 2 * n - i;
        int flag = i < n ? 1 : -1;
        int sp = n - tmp, st = 2 * tmp - 1;
        while (sp) {
            cout << ' ';
            sp--;
        }
        cout << s;
        for (int j = 2; j < st; ++j)
            cout << ' ';
        cout << s;
        if (s - 'A' + flag < 0)
            s += 26;
        s = (s - 'A' + flag) % 26 + 'A';
        cout << endl;
    }
    for (int i = 1; i <= n - 1; ++i)
        cout << ' ';
    cout << s << endl;
    return 0;
}

//Wrong at point 4.