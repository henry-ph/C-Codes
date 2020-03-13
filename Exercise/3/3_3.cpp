#include <iostream>
#include<algorithm>
using namespace std;

void sort(int &a, int &b, int &c) {
    if (a > b)
        swap(a, b);
    if (a > c)
        swap(a, c);
    if (b > c)
        swap(b, c);
    return;
}
int checkTriangle(int a, int b, int c) {
    sort(a, b, c);
    if (a + b <= c)
    return 0;
    long long res = a * a + b * b - c * c;
    if (res > 0)
        return 1;
    if (!res)
        return 2;
    if (res < 0)
        return 3;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    cout << checkTriangle(a, b, c) << endl;
    return 0;
}