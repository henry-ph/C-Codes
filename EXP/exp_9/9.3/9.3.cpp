#include<iostream>
#include"queue.h"

using namespace std;

int main() {
    Queue<int> q;
    for (int i = 0; i < 4; ++i) {
        q.insert(i);
    }
    while (!q.empty()) {
        cout << q.getFront() << endl;
        q.remove();
    }
    return 0;
}