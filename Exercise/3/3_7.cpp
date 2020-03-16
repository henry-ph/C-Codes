#include<iostream>
using namespace std;
int seq[15];

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int gcdN(int* seq, int len) {
    if (len == 1) return seq[1];
    return gcd(seq[len - 1], gcdN(seq, len - 1));
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> seq[i];
    cout << gcdN(seq, n) << endl;
    return 0;
}