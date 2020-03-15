#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    while (1) {
        int now = 0, tmp = n;
        while (tmp) {
            now += tmp % 10;
            tmp /= 10;
        }
        if (n == now)
            break;
        n = now;
    }
    cout << n << endl;
    return 0;
}