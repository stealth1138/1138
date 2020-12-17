#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long Fib(int n)
{
	if (n < 3)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",Fib(n));
	system("pause");
	return 0;
}