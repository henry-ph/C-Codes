#include <iostream>
using namespace std;

int fun(int i) {
	i *= 2;
	return i;
}

int main() {
	int i = 10;
	fun(i = fun(i));
	cout << i;
}
