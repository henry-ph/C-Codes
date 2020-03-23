#include <bits/stdc++.h>
#define INT_MAX __INT_MAX__
using namespace std; 
class Solution {
public:    
    int divide(int dividend, int divisor) {        
        if (divisor == 0) {
            return INT_MAX;
        }
        int res = 0, _dividend = abs(dividend), _divisor = abs(divisor);
        while (_dividend >= _divisor) {
            res++;
            _dividend -= _divisor;
        }
        if ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
            return res;
        else
            return -res;
    }
}; 
int main() {        
    Solution s;  
    int dividend, divisor; 
    cin >> dividend >> divisor; 
    cout << s.divide(dividend, divisor) << endl;
   return 0;
}