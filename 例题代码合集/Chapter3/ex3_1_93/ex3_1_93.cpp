#include <iostream>
using namespace std;
int main() {
	int i;
	for (i = 0; i<10; i = i + 2) {
		if (i % 2 == 0)
			--i;
	}
	cout << i;
}
