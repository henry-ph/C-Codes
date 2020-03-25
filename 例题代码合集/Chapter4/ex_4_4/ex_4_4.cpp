#include <iostream>
using namespace std;

class Point {   //Point 类的定义
public:
	Point(int xx = 0, int yy = 0) { x = xx; y = yy; }
	Point(const Point& p) {	
		x = p.x;	y = p.y;   
	}
	int getX() const { return x; }
	int getY() const { return y; }
private:
	int x, y;
};
void fun1(Point& p) {
	cout << p.getX() << endl;
}

Point fun2() {
	Point a(0, 0);
	return a;
}
int main() {
	Point a(1, 1);
	Point b(a);
	cout << b.getX() << endl;
	fun1(b);
	b = fun2();
	cout << b.getX() << endl;
	return 0;
}
