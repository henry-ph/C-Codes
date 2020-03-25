#include <iostream>
using namespace std;
int main() {
	int i;
	for (i = 1; i<10; i++) {
		do {
			i *= 2;
		} while (i < 10);
	}
	cout << i;
}
