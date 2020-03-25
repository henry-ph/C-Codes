#include <iostream>
using namespace std;

int fun(int i) {
	i *= 2;
	return i;
}

int main() {
	int i = 10;
	fun(fun(i));
	cout << i;
}
