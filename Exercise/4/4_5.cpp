#include <iostream>
using namespace std;
class Solution {
public:
    string reverseString(string s) {
        string::iterator it;
        string res;
        for (it = s.end() - 1; it >= s.begin(); --it) 
            res += *it;
        return res;
    }
};

int main() {
	Solution s;	
	string str;
	getline(cin,str);
	cout << s.reverseString(str) << endl;
	return 0;
}

