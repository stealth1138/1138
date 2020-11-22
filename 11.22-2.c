#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 1; i <= 5; i++)
	{
		for (int m = 5 - i; m > 0;m--)
		{
			printf(" ");
		}
		for (int n = 1; n <= i;n++)
		{
			printf("%d ", num);
		}
		printf("\n");
	}
	return 0;
}


