#include<iostream>
#include<vector>
using namespace std;

int func(int x, int &y) {
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
    return x + y;
}
int main() {
    vector<int> a;
    vector<int> c;
    vector<int *> b;
    vector<int>::iterator it;
    vector<int *>::iterator _it;
    for (int i = 0; i < 10; ++i) {
        a.push_back(i);
    }
    for (it = a.begin(); it != a.end(); ++it)
    {
        c.push_back(*it);
        b.push_back(&(c.back()));
        //b.push_back(&(*it));
    }
    int sum = 0;
    for (_it = b.begin(); _it != b.end(); ++_it) {
        sum += **_it;
    }
    cout << sum << endl;
    return 0;
}