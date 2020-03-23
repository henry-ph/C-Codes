#include <iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        return pow(x, n);
    }
};

int main() {
	Solution s;	
	double x;
	int n;
	cin >> x >> n;
	cout << s.myPow(x, n) << endl;
	return 0;

}