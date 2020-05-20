#include<iostream>
#include"link.h"

using namespace std;

int main() {
    LinkedList<int> a, b;
    for (int i = 0; i < 5; ++i) {
        a.insertRear(i);
        b.insertRear(i);
    }
    a.reset();
    b.reset();
    while (!a.endOfList()) {
        a.next();
    }
    while (!b.endOfList()) {
        a.insertRear(b.data());
        b.next();
    }
    a.reset();
    while (!a.endOfList()) {
        cout << a.data() << endl;
        a.next();
    }
    return 0;
}