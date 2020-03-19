#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
string myAtoi(string str) {
    string res;
    string::iterator it;
    it = str.begin();
    while (*it == ' ')
        it++;
    if (*it == '0' && it + 1 == str.end()) {
        res += '0';
        return res;
    }
    if (*it == '-') {
        res += *it;
        it++;
    }
    while (*it == '0')
        it++;
    while (it != str.end()) {
        if (*it == ' ') {
            break;
        }
        if (*it < '0' || *it > '9')
            break;
        res += *it;
        it++;
    }
    return res;
}

};

int main() {
	Solution s;	
	string str;
	getline(cin,str);
	cout << s.myAtoi(str);
	return 0;
}