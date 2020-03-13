#include <iostream>
using namespace std;

int countFactorialZero(int n) {
    int base = 5, ans = 0;
    while (n / base) {
        ans += n / base;
        base *= 5;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    cout << countFactorialZero(n) << endl;
    return 0;
}