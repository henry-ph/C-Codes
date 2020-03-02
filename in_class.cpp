#include<iostream>
using namespace std;

int main() {
    int x = 0, y = 0, z = 0;
    ++y && ++z || ++x;
    cout << x << ' ' << y << ' ' << z << endl;
    return 0;
}