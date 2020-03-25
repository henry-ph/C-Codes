#include <iostream>
using namespace std;
void sub(int x, int y, int *z) {
	*z = y-x;
}
int main() {
	int a, b;
	sub(10, 5, &a);
	sub(7, a, &b);
	cout << a <<","<< b << endl;
	return 0;
}
