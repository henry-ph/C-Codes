#include<iostream>

using namespace std;

class Point {
    double _x, _y;

public:
    Point(double x, double y) : _x(x), _y(y){};
    void print() const {
        cout << _x << ' ' << _y << endl;
    }
    Point operator++(int x);
    Point operator--(int x);
};

Point Point::operator++(int) {
    _x++;
    _y++;
    return *this;
}

Point Point::operator--(int) {
    _x--;
    _y--;
    return *this;
}

int main() {
    Point a(1, 2);
    a++;
    a.print();
    a--;
    a.print();
    return 0;
}