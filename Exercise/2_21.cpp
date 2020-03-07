#include<bits/stdc++.h>
using namespace std;

bool isNumber(const string& str) {	
	istringstream sin(str);
	double test;
	return sin >> test && sin.eof();
}

int main() {
    string s;
    getline(cin, s);
    cout << isNumber(s) << endl;
    return 0;
}