#include <iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    string getPermutation(int n, int k) {
        int res[n + 5], cnt = 0;
        for (int i = 1; i <= n; ++i)
            res[i] = i;
        while (++cnt != k)
            next_permutation(res + 1, res + n + 1);
        string ans;
        for (int i = 1; i <= n; ++i)
            ans += res[i] + '0';
        return ans;
    }
};

int main() {
	Solution s;	
	int n, k;
	cin >> n >> k;
	string str = s.getPermutation(n, k);
	cout << str;
	return 0;
}