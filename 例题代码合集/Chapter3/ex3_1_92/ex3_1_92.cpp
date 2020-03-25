#include <iostream>
using namespace std;
int main() {
	int i;
	for (i = 10; i>1; --i) {
		do {
			i /= 2;
			cout << i;
		} while (i >1);
	}
}
