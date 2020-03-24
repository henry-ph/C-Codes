#include <cmath>
#include <iostream>
using namespace std;
class Line; //前向引用声明
class Point {
public:
    Point(int x1, int y1) {
        x = x1;
        y = y1;
    }
    friend double dist(Line l, Point p); //声明友元函数
private:
    int x, y;
};

class Line {
public:
    Line(int a1, int b1, int c1) {
        a = a1;
        b = b1;
        c = c1;
    }
    friend double dist(Line l, Point p); //声明友元函数
private:
    int a, b, c;
};
double dist(Line l, Point p) { //友元函数实现用于计算点到直线的距离
    return abs((l.a * p.x + l.b * p.y + l.c) / sqrt(l.a * l.a + l.b * l.b));
}
int main()
{
    int x, y, a, b, c;
    cin >> x >> y >> a >> b >> c;
    Point p(x, y);
    Line l(a, b, c);
    cout << dist(l, p) << endl;
    return 0;
}