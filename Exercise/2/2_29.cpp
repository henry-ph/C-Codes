#include<iostream>
using namespace std;

int main() {
    double money, ans;
    cin >> money;
    ans = money * 0.01 > 50 ? 50 : money * 0.01;
    cout << ans << endl;
    return 0;
}