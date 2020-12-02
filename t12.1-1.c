#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 2;
	int ret = 1;
	int n;
	scanf("%d", &n);
	while (i <= n)
	{
		ret *= i;
		i++;
	}
	printf("%d\n", ret);
	return 0;
}