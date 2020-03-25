#include <iostream>
using namespace std;
int fun2(int x) {
	return x * x;
}
int fun1(int x, int y) {
	return fun2(x) - fun2(y);
}
int main() {
	cout << fun1(3, 4) << endl;
	return 0;
}
