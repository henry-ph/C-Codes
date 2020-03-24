#include<iostream>
using namespace std;

class Point {
public:
    Point(double _x, double _y) : x(_x), y(_y){
        count++;
    }
    Point(){};
    ~Point() {
        count--;
    }
    void AddPoint(double _x, double _y) {
        x = _x, y = _y;
        count++;
    }
    static void ShowCount();
    void ShowPoint() {
        cout << x << ' ' << y << endl;
    }

private:
    double x, y;
    static int count;
};
int Point::count = 0;

void Point::ShowCount() {
    cout << count << endl;
}
int main() {
    double x, y;
    Point p;
    while (cin >> x >> y) {
        if (x == 0 && y == 0)
            break;
        p.AddPoint(x, y);
    }
    p.ShowCount();
    return 0;
}