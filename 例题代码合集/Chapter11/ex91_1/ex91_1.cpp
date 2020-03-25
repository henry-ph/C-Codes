#include <iostream>
using namespace std;
#include <iomanip>

int main() {
	cout.fill('#');
	cout.width(10);
	cout << setiosflags(ios::left) << 123.456;

	return 0;
}