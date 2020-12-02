#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 2;
	int ret = 1;
	int n;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}