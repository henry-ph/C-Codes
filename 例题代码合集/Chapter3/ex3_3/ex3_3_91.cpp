#include <iostream>
using namespace std;
int fun3(int x, int y) {
	return x + y;
}
int fun2(int x, int y) {
	return y - x;
}
int fun1(int x, int y) {
	return fun2(y, x) * fun3(x, y);
}
int main() {
	cout << fun1(4, 5);
}
