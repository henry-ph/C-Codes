#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<int> par;
        string::iterator it;
        for (it = s.begin(); it != s.end(); ++it) {  
            switch (*it) {
                case '(':
                    par.push(0);
                    break;
                case '[':
                    par.push(1);
                    break;
                case '{':
                    par.push(2);
                    break;
                case ')':
                    if (par.top() == 0) 
                        par.pop();
                    else {
                        return false;
                    }
                    break;
                case ']':
                    if (par.top() == 1) 
                        par.pop();
                    else {
                        return false;
                    }
                    break;
                case '}':
                    if (par.top() == 2) 
                        par.pop();
                    else {
                        return false;
                    }
                    break;
            }
        }
        if (!par.empty())
            return false;
        return true;
    }
};

int main() {
    Solution s;
    string str;
    getline(cin, str);
    bool res = s.isValid(str);
    cout << res;
    return 0;
}
