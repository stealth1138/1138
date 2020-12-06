#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
}
int main()
{
	int i;
	scanf("%d", &i);
	print(i);
	return 0;
}