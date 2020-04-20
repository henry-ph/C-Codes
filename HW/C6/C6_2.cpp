#include<iostream>
#include<cstring>

using namespace std;

int dp[20][20];

int main() 
{
    string s;
    cin >> s;
    int len = s.length();
    for (int j = 0; j < len; ++j)
    {
        dp[j][j] = 1;
        for (int i = j - 1; i >= 0; --i)
        {
            if (s[i] != s[j])
                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1];
            else
                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] + 1;
        }
    }
    cout << dp[0][len - 1] << endl;
    return 0;
}