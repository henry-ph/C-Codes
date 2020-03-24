#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

class Distance;
class Point {
public:
    Point(int _x, int _y) : x(_x), y(_y){};
    Point(){};
    Point(const Point &p) : x(p.x), y(p.y){};
    ~Point(){};
    friend Distance;

private:
    float x, y;
};

class Distance {
public:
    float Dis(Point &p,Point &q) const {
        return sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
    }
};

int main() {
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Point p(x1, y1), q(x2, y2);
    Distance d;
    cout << d.Dis(p, q) << endl;
    return 0;
}