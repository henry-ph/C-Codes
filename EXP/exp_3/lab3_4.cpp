#include<iostream>
using namespace std;

int fib(int n) {
    cout << n << "->";
    if (n == 1 || n == 2) 
        return 1;
    else 
        return fib(n - 1) + fib(n - 2);
        
}

int main() {
    int n, ans;
    cin >> n;
    ans = fib(n);
    cout << "end" << endl << ans << endl;
}