int fib(int n) {
	static int count = 0;
	if (n == 1) count++;
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	fib(5);
	return 0;
}