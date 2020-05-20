#include<iostream>
#include"node.h"
using namespace std;

int main() {
    int x = 1, y = 2;
    Node<int> a(x), b(y);
    b.insertAfter(&a);
    cout << b.nextNode()->data << endl;
    return 0;
}