#include<iostream>
using namespace std;
int compute(int a, int b, int(*func)(int, int))
{
	return func(a, b);
}
int func1(int a, int b) { return ((a > b) ? a : b); }
int func2(int a, int b) { return ((a < b) ? a : b); }
int main() {
	int a = 2, b = 3, res;
	int(*p)(int, int) = &func1; // ���庯��ָ��p, �����������е����ֵ
	res = compute(a, b, p);
	cout << "Max of two number is :"<< res;
	return 0;
}
