#include<iostream>
#include"array.h"

using namespace std;

int main() {
    Array<int> a(10);
    for (int i = 10; i >= 1; --i) {
        a[10 - i] = i;
    }
    a.insertionSort();
    for (int i = 0; i < 10; ++i) {
        cout << a[i] << endl;
    }
    return 0;
}