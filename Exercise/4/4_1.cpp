#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
string convert(string s, int numRows) {
    int len = s.length(), p = 2 * numRows - 2, cnt = 1, pos = 0;
    if (len < numRows || numRows == 1)
        return s;
    string ans;
    ans += s[0];
    while (cnt < len) {
        int rest = pos % p;
        if (!rest || rest == numRows - 1)
            pos += p;
        else if (rest < numRows - 1)
            pos += (numRows - rest - 1) * 2;
        else
            pos += (p - rest) * 2;
        if (pos >= len) {
            if (rest <= numRows - 1)
                pos = rest + 1;
            else pos = p - rest + 1;
        }
        ans += s[pos];
        cnt++;
    }
    return ans;
}
};

int main() {

	Solution s;	
	string str;
	int n;
	getline(cin, str);
	cin >> n;
	cout << s.convert(str,n);
	return 0;
}