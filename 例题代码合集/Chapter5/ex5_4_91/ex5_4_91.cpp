#include <iostream>
using namespace std;
int i = 0;
void fun()
{
	{
		static int i = 1;
		cout << i++ << ',' ;  
	}
	cout << i << ',' ;
}
int main()
{
	fun();
	fun();
	return 0;
}
