#include<iostream>
#include<cstring>

using namespace std;

int main() {
    string a, b;
    int ans = 0;
    cin >> a >> b;
    int lena = a.length(), lenb = b.length();
    for (int i = 0; i < lena; ++i) {
        string temp = a.substr(i, lenb);
        if (temp == b)
            ans++;
    }
    cout << ans << endl;
    return 0;
}