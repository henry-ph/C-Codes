#include <iostream>
using namespace std;

int fun(int i) {
	i *= 3;
	return i;
}

int main() {
	int i = 10;
	fun(i = fun(i / 2));
	cout << i;
}
