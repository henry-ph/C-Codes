#include<iostream>
using namespace std;
class Point {
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}
	int getX() {
		return x;
	}
private:
	int x, y;
};
void f(Point p) {
	cout << p.getX() << endl;
}
Point g() {
	Point a(1, 2);
	return a;
}
