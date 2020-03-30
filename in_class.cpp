#include<bits/stdc++.h>
using namespace std;

int func(int x, int &y) {
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    return x + y;
}
int main() {
    int x = 0, y = 1;
    cout << func(x, y) << ' ' << x << ' ' << y << endl;
    return 0;
}